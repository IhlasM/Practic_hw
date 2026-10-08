import rclpy
from rclpy.node import Node
from hw3_interfaces.srv import CheckAnagram


def is_anagram(a: str, b: str) -> bool:
    """Строки - анаграммы, если состоят из одних и тех же букв
    (регистр и пробелы не учитываем)."""
    a = a.replace(' ', '').lower()
    b = b.replace(' ', '').lower()
    return sorted(a) == sorted(b)


class AnagramServer(Node):
    def __init__(self):
        super().__init__('anagram_server')
        self.srv = self.create_service(
            CheckAnagram, 'check_anagram', self.handle_request)
        self.get_logger().info('Сервер запущен, жду запросы на /check_anagram')

    def handle_request(self, request, response):
        response.is_anagram = is_anagram(request.first, request.second)
        self.get_logger().info(
            f'Запрос: "{request.first}" и "{request.second}" -> {response.is_anagram}')
        return response


def main(args=None):
    rclpy.init(args=args)
    node = AnagramServer()
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
