import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32, String


class OctalConverter(Node):
    """Читает число из 'numbers' и публикует его в восьмеричной записи в 'octal'."""

    def __init__(self):
        super().__init__('octal_converter')
        self.subscription = self.create_subscription(
            Int32, 'numbers', self.listener_callback, 10)
        self.publisher = self.create_publisher(String, 'octal', 10)

    def listener_callback(self, msg):
        out = String()
        out.data = format(msg.data, 'o')  # без префикса '0o'
        self.publisher.publish(out)
        self.get_logger().info(f'Получено: {msg.data} -> восьмеричное: {out.data}')


def main(args=None):
    rclpy.init(args=args)
    node = OctalConverter()
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
