import time

import rclpy
from rclpy.action import ActionServer, GoalResponse
from rclpy.node import Node
from hw4_interfaces.action import PowerOfTwo


def min_power_of_two(n: int) -> int:
    """Наименьшая степень p, для которой 2**p >= n."""
    return (n - 1).bit_length()


class PowerServer(Node):
    def __init__(self):
        super().__init__('power_server')
        self._server = ActionServer(
            self,
            PowerOfTwo,
            'power_of_two',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback)
        self.get_logger().info('Action-сервер запущен: /power_of_two')

    def goal_callback(self, goal_request):
        numbers = goal_request.numbers
        if len(numbers) == 0 or any(n < 1 for n in numbers):
            self.get_logger().warn('Цель отклонена: нужны натуральные числа')
            return GoalResponse.REJECT
        self.get_logger().info(f'Цель принята: {list(numbers)}')
        return GoalResponse.ACCEPT

    def execute_callback(self, goal_handle):
        powers = []
        feedback = PowerOfTwo.Feedback()

        for n in goal_handle.request.numbers:
            p = min_power_of_two(n)
            powers.append(p)

            feedback.number = n
            feedback.power = p
            goal_handle.publish_feedback(feedback)
            self.get_logger().info(f'Для {n}: 2^{p} = {2 ** p} >= {n}')
            time.sleep(0.7)  # пауза, чтобы feedback было видно на видео

        goal_handle.succeed()
        result = PowerOfTwo.Result()
        result.powers = powers
        return result


def main(args=None):
    rclpy.init(args=args)
    node = PowerServer()
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
