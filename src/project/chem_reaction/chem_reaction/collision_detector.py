"""Детектор касаний: публикует Collision в топик /chem/collision."""
import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose

from chem_interfaces.msg import Collision
from chem_reaction import logic
from chem_reaction.behavior import is_on_cooldown


class CollisionDetector(Node):
    def __init__(self):
        super().__init__('collision_detector')
        self.declare_parameter('turtles', ['turtle1', 'turtle2', 'turtle3'])
        self.declare_parameter('threshold', logic.TOUCH_DISTANCE)
        self.declare_parameter('cooldown', 3.0)

        self.names = list(self.get_parameter('turtles').value)
        self.threshold = float(self.get_parameter('threshold').value)
        self.cooldown = float(self.get_parameter('cooldown').value)

        self.positions = {}       # имя -> (x, y)
        self.last_times = {}      # (имена) -> время последнего сообщения

        self.publisher = self.create_publisher(Collision, '/chem/collision', 10)
        for name in self.names:
            self.create_subscription(
                Pose, f'/{name}/pose',
                lambda msg, n=name: self.on_pose(n, msg), 10)

        self.create_timer(0.1, self.tick)
        self.get_logger().info('Детектор касаний запущен')

    def on_pose(self, name, msg):
        self.positions[name] = (msg.x, msg.y)

    def tick(self):
        if len(self.positions) < len(self.names):
            return  # ещё не все черепахи появились
        now = self.get_clock().now().nanoseconds / 1e9

        found = logic.find_collisions(self.positions, self.threshold)
        for kind, group, cx, cy in found:
            key = tuple(group)
            if is_on_cooldown(self.last_times, key, now, self.cooldown):
                continue
            self.last_times[key] = now

            msg = Collision()
            msg.kind = kind
            msg.turtles = group
            msg.x = float(cx)
            msg.y = float(cy)
            self.publisher.publish(msg)

            title = 'ТРОЙНОЕ касание' if kind == logic.TRIPLE else 'Касание пары'
            self.get_logger().info(f'{title}: {group}')


def main(args=None):
    rclpy.init(args=args)
    node = CollisionDetector()
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
