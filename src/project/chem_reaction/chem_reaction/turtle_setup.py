"""Одноразовый узел: создаёт turtle2, turtle3 и задаёт цвета пера."""
import math

import rclpy
from rclpy.node import Node
from turtlesim.srv import SetPen, Spawn

from chem_reaction import logic

# имя: (x, y, theta)
SPAWN_POINTS = {
    'turtle2': (3.0, 8.0, 0.0),
    'turtle3': (8.0, 3.0, math.pi),
}
PEN_WIDTH = 3


class TurtleSetup(Node):
    def __init__(self):
        super().__init__('turtle_setup')
        self.spawn_client = self.create_client(Spawn, '/spawn')

    def call(self, client, request):
        client.wait_for_service()
        future = client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        return future.result()

    def spawn(self, name, x, y, theta):
        request = Spawn.Request()
        request.x = x
        request.y = y
        request.theta = theta
        request.name = name
        self.call(self.spawn_client, request)
        self.get_logger().info(f'Создана {name}')

    def set_pen(self, name, color):
        client = self.create_client(SetPen, f'/{name}/set_pen')
        request = SetPen.Request()
        request.r, request.g, request.b = color
        request.width = PEN_WIDTH
        request.off = 0
        self.call(client, request)
        self.get_logger().info(f'{name}: цвет пера {color}')


def main(args=None):
    rclpy.init(args=args)
    node = TurtleSetup()

    for name, (x, y, theta) in SPAWN_POINTS.items():
        node.spawn(name, x, y, theta)

    for name in ['turtle1', 'turtle2', 'turtle3']:
        node.set_pen(name, logic.pen_color_for(name, False))

    node.get_logger().info('Настройка завершена')
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
