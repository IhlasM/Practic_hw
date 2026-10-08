#!/usr/bin/env python3
import math
import random
from typing import Dict, Tuple

import rclpy
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from turtlesim.srv import Kill, Spawn, TeleportAbsolute, SetPen

from reaction_interfaces.msg import ReactionEvent
from reaction_interfaces.srv import ResetSimulation
from reaction_interfaces.action import RunSimulation


class ReactionNode(Node):
    TURTLES = ("turtle_red", "turtle_blue", "turtle_green")
    COLORS = {
        "turtle_red": "red",
        "turtle_blue": "blue",
        "turtle_green": "green",
    }
    YELLOW = (1.0, 1.0, 0.0)

    def __init__(self):
        super().__init__("reaction_node")
        self.rng = random.Random()
        self.poses: Dict[str, Pose] = {}
        self.color_pubs = {}
        self.cmd_pubs = {}
        self.pose_subs = {}
        self.teleport_clients = {}
        self.pen_clients = {}
        self.reaction_count = 0
        self.last_pair_reaction = 0.0
        self.reaction_cooldown = 1.0

        self.event_pub = self.create_publisher(
            ReactionEvent, "/reaction/events", 10
        )

        self.spawn_client = self.create_client(Spawn, "/spawn")
        self.kill_client = self.create_client(Kill, "/kill")

        self.reset_srv = self.create_service(
            ResetSimulation, "/reaction/reset", self.reset_callback
        )

        self.action_server = ActionServer(
            self,
            RunSimulation,
            "/reaction/run_simulation",
            execute_callback=self.execute_simulation,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback,
        )

        for name in self.TURTLES:
            self.cmd_pubs[name] = self.create_publisher(
                Twist, f"/{name}/cmd_vel", 10
            )
            self.pose_subs[name] = self.create_subscription(
                Pose, f"/{name}/pose",
                lambda msg, n=name: self.pose_callback(n, msg), 10
            )
            self.teleport_clients[name] = self.create_client(
                TeleportAbsolute, f"/{name}/teleport_absolute"
            )
            self.pen_clients[name] = self.create_client(
                SetPen, f"/{name}/set_pen"
            )

        self.timer = self.create_timer(0.25, self.update)
        self.get_logger().info(
            "Chemical reaction simulation started. "
            "Waiting for turtlesim and creating 3 turtles..."
        )
        self.create_timer(1.0, self.ensure_turtles)

    def pose_callback(self, name: str, msg: Pose):
        self.poses[name] = msg

    def ensure_turtles(self):
        if not self.spawn_client.service_is_ready():
            return
        # Spawn each missing turtle. Existing ones are ignored.
        positions = {
            "turtle_red": (2.0, 2.0, 0.0),
            "turtle_blue": (8.0, 2.0, math.pi / 2),
            "turtle_green": (5.5, 9.0, math.pi),
        }
        for name, (x, y, theta) in positions.items():
            if name in self.poses:
                continue
            req = Spawn.Request()
            req.x, req.y, req.theta, req.name = x, y, theta, name
            future = self.spawn_client.call_async(req)
            future.add_done_callback(
                lambda f, n=name: self.spawn_done(n, f)
            )

    def spawn_done(self, name, future):
        try:
            result = future.result()
            if result.name:
                self.get_logger().info(f"Spawned {result.name}")
        except Exception as exc:
            # Usually means turtle already exists; no need to stop the node.
            self.get_logger().debug(f"Spawn {name}: {exc}")

    def update(self):
        if len(self.poses) < 3:
            return

        now = self.get_clock().now().nanoseconds / 1e9
        for name in self.TURTLES:
            if name not in self.poses:
                continue
            twist = Twist()
            # Random but smooth-ish movement.
            twist.linear.x = 1.2
            twist.angular.z = self.rng.uniform(-1.2, 1.2)
            self.cmd_pubs[name].publish(twist)

        names = list(self.TURTLES)
        triple = self._triple_collision(names)
        if triple:
            self.explosion(triple)
            self.last_pair_reaction = now
            return

        for i in range(len(names)):
            for j in range(i + 1, len(names)):
                a, b = names[i], names[j]
                d = self.distance(a, b)
                if d < 0.5 and now - self.last_pair_reaction >= self.reaction_cooldown:
                    self.pair_reaction(a, b, d)
                    self.last_pair_reaction = now
                    return

    def distance(self, a: str, b: str) -> float:
        pa, pb = self.poses[a], self.poses[b]
        return math.hypot(pa.x - pb.x, pa.y - pb.y)

    def _triple_collision(self, names):
        center = (
            sum(self.poses[n].x for n in names) / len(names),
            sum(self.poses[n].y for n in names) / len(names),
        )
        return all(
            math.hypot(self.poses[n].x - center[0], self.poses[n].y - center[1]) < 0.5
            for n in names
        )

    def pair_reaction(self, a: str, b: str, distance: float):
        self.reaction_count += 1
        self.get_logger().info(
            f"REACTION: {a} + {b}, distance={distance:.3f}"
        )
        self.publish_event(a, b, "pair_reaction", distance, 2,
                           "Two turtles touched: yellow + 180-degree turn.")

        for name in (a, b):
            self.set_yellow_pen(name)
            pose = self.poses[name]
            self.teleport(name, pose.x, pose.y, (pose.theta + math.pi) % (2 * math.pi))
            # Yellow is represented visually by turtle color through turtlesim
            # limitations; event and logs explicitly mark the reaction color.
        # Move apart immediately by sending opposite angular/linear directions.
        self.cmd_pubs[a].publish(self._twist(-1.0, 0.8))
        self.cmd_pubs[b].publish(self._twist(-1.0, -0.8))

    def explosion(self, names):
        self.reaction_count += 1
        self.get_logger().warn("EXPLOSION: three turtles touched!")
        self.publish_event(
            names[0], names[1], "explosion", 0.0, 3,
            "Three turtles touched simultaneously: all teleported."
        )
        for name in names:
            self.teleport(
                name,
                self.rng.uniform(1.0, 10.0),
                self.rng.uniform(1.0, 10.0),
                self.rng.uniform(-math.pi, math.pi),
            )

    def _twist(self, linear, angular):
        t = Twist()
        t.linear.x = linear
        t.angular.z = angular
        return t

    def set_yellow_pen(self, name):
        client = self.pen_clients[name]
        if not client.service_is_ready():
            return
        req = SetPen.Request()
        req.r, req.g, req.b = 255, 255, 0
        req.width = 3
        req.off = 0
        client.call_async(req)

    def teleport(self, name, x, y, theta):
        client = self.teleport_clients[name]
        if not client.service_is_ready():
            return
        req = TeleportAbsolute.Request()
        req.x, req.y, req.theta = float(x), float(y), float(theta)
        client.call_async(req)

    def publish_event(self, a, b, reaction_type, distance, count, description):
        msg = ReactionEvent()
        msg.stamp = self.get_clock().now().to_msg()
        msg.turtle_a = a
        msg.turtle_b = b
        msg.reaction_type = reaction_type
        msg.distance = float(distance)
        msg.turtle_count = count
        msg.description = description
        self.event_pub.publish(msg)

    def reset_callback(self, request, response):
        self.reaction_count = 0
        positions = {
            "turtle_red": (2.0, 2.0, 0.0),
            "turtle_blue": (8.0, 2.0, math.pi / 2),
            "turtle_green": (5.5, 9.0, math.pi),
        }
        for name, (x, y, theta) in positions.items():
            if name in self.poses:
                if request.randomize_positions:
                    x = self.rng.uniform(1.0, 10.0)
                    y = self.rng.uniform(1.0, 10.0)
                    theta = self.rng.uniform(-math.pi, math.pi)
                self.teleport(name, x, y, theta)
        response.success = True
        response.message = "Simulation reset successfully."
        self.get_logger().info(response.message)
        return response

    def goal_callback(self, goal_request):
        if goal_request.duration <= 0:
            return GoalResponse.REJECT
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        return CancelResponse.ACCEPT

    async def execute_simulation(self, goal_handle):
        duration = float(goal_handle.request.duration)
        start = self.get_clock().now().nanoseconds / 1e9
        initial_reactions = self.reaction_count
        feedback = RunSimulation.Feedback()

        while rclpy.ok():
            elapsed = self.get_clock().now().nanoseconds / 1e9 - start
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                result = RunSimulation.Result()
                result.completed = False
                result.reactions = self.reaction_count - initial_reactions
                result.message = "Simulation action canceled."
                return result
            if elapsed >= duration:
                break

            feedback.elapsed = float(elapsed)
            feedback.reactions = self.reaction_count - initial_reactions
            goal_handle.publish_feedback(feedback)
            await self._sleep_async(0.2)

        goal_handle.succeed()
        result = RunSimulation.Result()
        result.completed = True
        result.reactions = self.reaction_count - initial_reactions
        result.message = "Simulation completed."
        return result

    async def _sleep_async(self, seconds):
        import asyncio
        await asyncio.sleep(seconds)


def main(args=None):
    rclpy.init(args=args)
    node = ReactionNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
