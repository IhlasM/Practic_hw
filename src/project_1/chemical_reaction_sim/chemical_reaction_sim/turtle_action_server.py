import random
import time
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from geometry_msgs.msg import Twist
from reaction_interfaces.action import RandomWalk


class TurtleActionServer(Node):

    def __init__(self):
        super().__init__('turtle_action_server')
        self._action_server = ActionServer(
            self,
            RandomWalk,
            'random_walk',
            self.execute_callback
        )
        self.cmd_publishers = {}

    def execute_callback(self, goal_handle):
        turtle_name = goal_handle.request.name
        duration = goal_handle.request.duration

        if turtle_name not in self.cmd_publishers:
            self.cmd_publishers[turtle_name] = self.create_publisher(
                Twist, f'/{turtle_name}/cmd_vel', 10
            )

        pub = self.cmd_publishers[turtle_name]
        feedback_msg = RandomWalk.Feedback()
        start_time = time.time()

        while (time.time() - start_time) < duration:
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                return RandomWalk.Result(completed=False)

            msg = Twist()
            msg.linear.x = random.uniform(1.0, 2.5)
            msg.angular.z = random.uniform(-2.0, 2.0)
            pub.publish(msg)

            feedback_msg.time_left = float(duration - (time.time() - start_time))
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(0.2)

        goal_handle.succeed()
        return RandomWalk.Result(completed=True)


def main(args=None):
    rclpy.init(args=args)
    node = TurtleActionServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()