"""Менеджер реакций: слушает /chem/collision и запускает реакции."""
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from turtlesim.srv import SetPen

from chem_interfaces.action import React
from chem_interfaces.msg import Collision
from chem_reaction import logic
from chem_reaction.reaction import split_due

PEN_WIDTH = 3


class ReactionManager(Node):
    def __init__(self):
        super().__init__('reaction_manager')
        self.declare_parameter('turtles', ['turtle1', 'turtle2', 'turtle3'])
        self.declare_parameter('restore_delay', 2.0)

        names = list(self.get_parameter('turtles').value)
        self.restore_delay = float(self.get_parameter('restore_delay').value)

        self.reacting = set()     # черепахи, у которых идёт реакция
        self.pending = {}         # имя -> когда вернуть исходный цвет
        self.last_stage = None

        self.react_client = ActionClient(self, React, 'react')
        self.pen_clients = {
            n: self.create_client(SetPen, f'/{n}/set_pen') for n in names}

        self.create_subscription(Collision, '/chem/collision', self.on_collision, 10)
        self.create_timer(0.2, self.restore_colors)
        self.get_logger().info('Менеджер реакций запущен')

    def now(self):
        return self.get_clock().now().nanoseconds / 1e9

    # ---------- цвет пера (сервис turtlesim) ----------
    def set_pen(self, name, color):
        client = self.pen_clients[name]
        if not client.service_is_ready():
            self.get_logger().warn(f'Сервис set_pen для {name} недоступен')
            return
        request = SetPen.Request()
        request.r, request.g, request.b = color
        request.width = PEN_WIDTH
        request.off = 0
        client.call_async(request)

    def restore_colors(self):
        due, self.pending = split_due(self.pending, self.now())
        for name in due:
            self.set_pen(name, logic.pen_color_for(name, False))
            self.get_logger().info(f'{name}: цвет возвращён')

    # ---------- обработка касаний (топик) ----------
    def on_collision(self, msg):
        names = list(msg.turtles)
        if msg.kind == logic.PAIR:
            self.start_pair_reaction(names)
        elif msg.kind == logic.TRIPLE:
            self.get_logger().info(
                f'Тройное касание {names}: взрыв будет реализован на следующем шаге')

    # ---------- реакция пары (action) ----------
    def start_pair_reaction(self, names):
        if self.reacting.intersection(names):
            return
        if not self.react_client.server_is_ready():
            self.get_logger().warn('Action-сервер /react недоступен')
            return

        self.reacting.update(names)
        for name in names:
            self.set_pen(name, logic.YELLOW)          # жёлтый цвет
        self.get_logger().info(f'Реакция пары {names}: цвет -> жёлтый')

        goal = React.Goal()
        goal.turtles = names
        future = self.react_client.send_goal_async(
            goal, feedback_callback=self.on_feedback)
        future.add_done_callback(lambda f: self.on_goal_response(f, names))

    def on_goal_response(self, future, names):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().warn(f'Цель {names} отклонена сервером')
            self.reacting.difference_update(names)
            return
        goal_handle.get_result_async().add_done_callback(
            lambda f: self.on_result(f, names))

    def on_feedback(self, feedback_msg):
        stage = feedback_msg.feedback.stage
        if stage != self.last_stage:
            self.last_stage = stage
            self.get_logger().info(f'Этап реакции: {stage}')

    def on_result(self, future, names):
        self.get_logger().info(f'Реакция {names} завершена')
        self.last_stage = None
        self.reacting.difference_update(names)
        due_time = self.now() + self.restore_delay
        for name in names:
            self.pending[name] = due_time


def main(args=None):
    rclpy.init(args=args)
    node = ReactionManager()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
