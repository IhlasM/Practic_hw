import sys

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from hw4_interfaces.action import PowerOfTwo


class PowerClient(Node):
    def __init__(self):
        super().__init__('power_client')
        self._client = ActionClient(self, PowerOfTwo, 'power_of_two')

    def feedback_callback(self, feedback_msg):
        fb = feedback_msg.feedback
        self.get_logger().info(f'Feedback: для {fb.number} степень = {fb.power}')

    def send_goal(self, numbers):
        self.get_logger().info('Жду action-сервер...')
        self._client.wait_for_server()

        goal = PowerOfTwo.Goal()
        goal.numbers = numbers

        send_future = self._client.send_goal_async(
            goal, feedback_callback=self.feedback_callback)
        rclpy.spin_until_future_complete(self, send_future)

        goal_handle = send_future.result()
        if not goal_handle.accepted:
            self.get_logger().error('Цель отклонена сервером')
            return None

        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        return result_future.result().result


def main(args=None):
    rclpy.init(args=args)
    node = PowerClient()

    # числа берём из аргументов, иначе значения по умолчанию
    if len(sys.argv) > 1:
        numbers = [int(x) for x in sys.argv[1:]]
    else:
        numbers = [1, 5, 8, 17, 100]

    result = node.send_goal(numbers)
    if result is not None:
        node.get_logger().info(f'Числа: {numbers}')
        node.get_logger().info(f'Результат (степени): {list(result.powers)}')

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
