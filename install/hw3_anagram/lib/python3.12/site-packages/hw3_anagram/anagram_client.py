import sys

import rclpy
from rclpy.node import Node
from hw3_interfaces.srv import CheckAnagram


class AnagramClient(Node):
    def __init__(self):
        super().__init__('anagram_client')
        self.client = self.create_client(CheckAnagram, 'check_anagram')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Жду сервер...')

    def send_request(self, first, second):
        request = CheckAnagram.Request()
        request.first = first
        request.second = second
        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        return future.result()


def main(args=None):
    rclpy.init(args=args)
    node = AnagramClient()

    # строки берём из аргументов командной строки, иначе значения по умолчанию
    if len(sys.argv) >= 3:
        first, second = sys.argv[1], sys.argv[2]
    else:
        first, second = 'listen', 'silent'

    result = node.send_request(first, second)
    if result.is_anagram:
        node.get_logger().info(f'"{first}" и "{second}" - анаграммы: True')
    else:
        node.get_logger().info(f'"{first}" и "{second}" - анаграммы: False')

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
