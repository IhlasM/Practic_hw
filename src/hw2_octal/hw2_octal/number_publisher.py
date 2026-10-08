import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32


class NumberPublisher(Node):
    """Публикует натуральные числа от 1 до N в топик 'numbers'."""

    def __init__(self):
        super().__init__('number_publisher')
        self.declare_parameter('n', 20)
        self.declare_parameter('period', 1.0)

        self.n = self.get_parameter('n').value
        period = self.get_parameter('period').value

        self.publisher = self.create_publisher(Int32, 'numbers', 10)
        self.current = 1
        self.timer = self.create_timer(period, self.timer_callback)
        self.get_logger().info(f'Публикую числа от 1 до {self.n}')

    def timer_callback(self):
        if self.current > self.n:
            self.get_logger().info('Все числа опубликованы')
            self.timer.cancel()
            return

        msg = Int32()
        msg.data = self.current
        self.publisher.publish(msg)
        self.get_logger().info(f'Опубликовано: {msg.data}')
        self.current += 1


def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisher()
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
