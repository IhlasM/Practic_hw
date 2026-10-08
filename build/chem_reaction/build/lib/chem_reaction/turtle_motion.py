"""Случайное движение черепах и action-сервер реакции /react."""
import math
import random
import time

import rclpy
from geometry_msgs.msg import Twist
from rclpy.action import ActionServer, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from turtlesim.msg import Pose

from chem_interfaces.action import React
from chem_reaction import logic
from chem_reaction.behavior import wander_command
from chem_reaction.reaction import turn_command

DT = 0.1  # шаг цикла управления, секунды


class TurtleMotion(Node):
    def __init__(self):
        super().__init__('turtle_motion')
        self.declare_parameter('turtles', ['turtle1', 'turtle2', 'turtle3'])
        self.declare_parameter('change_period', 1.0)
        self.declare_parameter('move_time', 1.5)    # сколько ехать после разворота
        self.declare_parameter('move_speed', 1.5)

        self.names = list(self.get_parameter('turtles').value)
        change_period = float(self.get_parameter('change_period').value)
        self.move_time = float(self.get_parameter('move_time').value)
        self.move_speed = float(self.get_parameter('move_speed').value)

        self.rng = random.Random()
        self.poses = {}                                  # имя -> (x, y, theta)
        self.commands = {n: (1.0, 0.0) for n in self.names}
        self.busy = set()                                # черепахи в реакции
        self.cmd_pubs = {}

        for name in self.names:
            self.cmd_pubs[name] = self.create_publisher(
                Twist, f'/{name}/cmd_vel', 10)
            self.create_subscription(
                Pose, f'/{name}/pose',
                lambda msg, n=name: self.on_pose(n, msg), 10)

        self.create_timer(DT, self.tick)                  # отправка команд
        self.create_timer(change_period, self.randomize)  # смена направления

        # action-сервер в отдельной (reentrant) группе, чтобы длинное
        # выполнение реакции не блокировало таймеры и подписки
        self.react_server = ActionServer(
            self, React, 'react',
            execute_callback=self.execute_react,
            goal_callback=self.goal_react,
            callback_group=ReentrantCallbackGroup())

        self.get_logger().info(f'Движение запущено: {self.names}, action /react готов')

    # ---------- обычное блуждание ----------
    def on_pose(self, name, msg):
        self.poses[name] = (msg.x, msg.y, msg.theta)

    def randomize(self):
        for name in self.names:
            self.commands[name] = logic.random_velocity(self.rng)

    def publish_cmd(self, name, linear, angular):
        twist = Twist()
        twist.linear.x = float(linear)
        twist.angular.z = float(angular)
        self.cmd_pubs[name].publish(twist)

    def tick(self):
        for name, (x, y, theta) in list(self.poses.items()):
            if name in self.busy:
                continue  # эта черепаха сейчас в реакции
            lin, ang = wander_command(x, y, theta, self.commands[name])
            self.publish_cmd(name, lin, ang)

    # ---------- action /react ----------
    def goal_react(self, goal_request):
        names = list(goal_request.turtles)
        ok = (len(names) == 2
              and all(n in self.poses for n in names)
              and not self.busy.intersection(names))
        if not ok:
            self.get_logger().warn(f'Цель {names} отклонена')
            return GoalResponse.REJECT
        self.busy.update(names)   # сразу занимаем, чтобы не принять дубль
        return GoalResponse.ACCEPT

    def execute_react(self, goal_handle):
        names = list(goal_handle.request.turtles)
        feedback = React.Feedback()
        self.get_logger().info(f'Реакция: {names}')

        try:
            # 1) разворот на 180 градусов
            targets = {n: logic.turn_around(self.poses[n][2]) for n in names}
            feedback.stage = 'turn'
            deadline = time.monotonic() + 4.0
            while time.monotonic() < deadline:
                finished = True
                remaining = 0.0
                for n in names:
                    theta = self.poses[n][2]
                    ang = turn_command(theta, targets[n])
                    if ang != 0.0:
                        finished = False
                    remaining = max(
                        remaining, abs(logic.normalize_angle(targets[n] - theta)))
                    self.publish_cmd(n, 0.0, ang)
                feedback.progress = float(1.0 - remaining / math.pi)
                goal_handle.publish_feedback(feedback)
                if finished:
                    break
                time.sleep(DT)

            # 2) расходимся: едем вперёд (уже в обратную сторону)
            feedback.stage = 'move'
            steps = max(1, int(self.move_time / DT))
            for i in range(steps):
                for n in names:
                    self.publish_cmd(n, self.move_speed, 0.0)
                feedback.progress = (i + 1) / steps
                goal_handle.publish_feedback(feedback)
                time.sleep(DT)
        finally:
            self.busy.difference_update(names)

        goal_handle.succeed()
        result = React.Result()
        result.success = True
        return result


def main(args=None):
    rclpy.init(args=args)
    node = TurtleMotion()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
