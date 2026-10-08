import math
import random
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from turtlesim.msg import Pose
from turtlesim.srv import Spawn, SetPen, TeleportAbsolute
from reaction_interfaces.msg import TurtleColor
from reaction_interfaces.srv import ChangePenColor
from reaction_interfaces.action import RandomWalk


def calculate_distance(p1, p2):
    """Вычисление Евклидова расстояния между двумя точками."""
    return math.sqrt((p1[0] - p2[0])**2 + (p1[1] - p2[1])**2)


def check_collisions(poses, threshold=0.5):
    """
    Проверка касаний.
    Возвращает:
    - ('EXPLOSION', None) если все 3 черепахи касаются одновременно.
    - ('REACTION', (t1, t2)) если коснулась пара черепах.
    - (NONE, None) если касаний нет.
    """
    names = list(poses.keys())
    if len(names) < 3:
        return 'NONE', None

    p1, p2, p3 = poses[names[0]], poses[names[1]], poses[names[2]]
    d12 = calculate_distance(p1, p2)
    d23 = calculate_distance(p2, p3)
    d13 = calculate_distance(p1, p3)

    if d12 < threshold and d23 < threshold and d13 < threshold:
        return 'EXPLOSION', None

    if d12 < threshold:
        return 'REACTION', (names[0], names[1])
    if d23 < threshold:
        return 'REACTION', (names[1], names[2])
    if d13 < threshold:
        return 'REACTION', (names[0], names[2])

    return 'NONE', None


class ChemicalReactionNode(Node):

    def __init__(self):
        super().__init__('chemical_reaction_node')

        self.turtles = {
            'turtle1': {'color': 'red', 'rgb': (255, 0, 0)},
            'turtle2': {'color': 'blue', 'rgb': (0, 0, 255)},
            'turtle3': {'color': 'green', 'rgb': (0, 255, 0)}
        }
        self.poses = {}
        self.cooldown = 0

        # Сервис изменения цвета следа (Кастомный Service)
        self.srv_pen = self.create_service(
            ChangePenColor, 'change_pen_color', self.change_pen_callback
        )

        # Публикатор цвета (Кастомный Topic)
        self.color_pub = self.create_publisher(TurtleColor, '/turtle_colors', 10)

        # Клиент экшена случайного движения (Кастомный Action)
        self.action_client = ActionClient(self, RandomWalk, 'random_walk')

        # Подписка на позиции черепах и настройка стартовых условий
        self.init_turtles()

        # Таймер проверки столкновений (10 Гц)
        self.timer = self.create_timer(0.1, self.loop_callback)

    def init_turtles(self):
        spawn_client = self.create_client(Spawn, '/spawn')
        while not spawn_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Ожидание сервиса /spawn...')

        # Заспавнить turtle2 и turtle3 (turtle1 спавнится по умолчанию)
        spawn_client.call_async(Spawn.Request(x=3.0, y=3.0, theta=0.0, name='turtle2'))
        spawn_client.call_async(Spawn.Request(x=8.0, y=8.0, theta=0.0, name='turtle3'))

        for name, data in self.turtles.items():
            self.create_subscription(
                Pose, f'/{name}/pose',
                lambda msg, n=name: self.pose_callback(msg, n),
                10
            )
            self.set_turtle_pen(name, data['rgb'][0], data['rgb'][1], data['rgb'][2])

        self.start_random_walks()

    def pose_callback(self, msg, name):
        self.poses[name] = (msg.x, msg.y, msg.theta)

    def set_turtle_pen(self, name, r, g, b, width=3):
        client = self.create_client(SetPen, f'/{name}/set_pen')
        if client.wait_for_service(timeout_sec=1.0):
            req = SetPen.Request(r=r, g=g, b=b, width=width, off=0)
            client.call_async(req)

    def change_pen_callback(self, request, response):
        self.set_turtle_pen(request.name, request.r, request.g, request.b, request.width)
        response.success = True
        return response

    def start_random_walks(self):
        if not self.action_client.wait_for_server(timeout_sec=2.0):
            return
        for name in self.turtles.keys():
            goal = RandomWalk.Goal()
            goal.name = name
            goal.duration = 100.0
            self.action_client.send_goal_async(goal)

    def loop_callback(self):
        # Публикация цвета каждого маркера в кастомный топик
        for name, data in self.turtles.items():
            c_msg = TurtleColor()
            c_msg.name = name
            c_msg.r, c_msg.g, c_msg.b = data['rgb']
            self.color_pub.publish(c_msg)

        if self.cooldown > 0:
            self.cooldown -= 1
            return

        if len(self.poses) < 3:
            return

        event, targets = check_collisions(self.poses, threshold=0.5)

        if event == 'EXPLOSION':
            self.get_logger().warn('ВЗРЫВ! Все 3 черепахи коснулись одновременно!')
            self.trigger_explosion()
            self.cooldown = 20  # Пауза на 2 секунды

        elif event == 'REACTION':
            t1, t2 = targets
            self.get_logger().info(f'РЕАКЦИЯ между {t1} и {t2}!')
            self.trigger_reaction(t1, t2)
            self.cooldown = 15  # Пауза на 1.5 секунды

    def trigger_reaction(self, t1, t2):
        # Меняем цвет маркера на желтый (255, 255, 0)
        for t in [t1, t2]:
            self.turtles[t]['rgb'] = (255, 255, 0)
            self.set_turtle_pen(t, 255, 255, 0)

            # Разворачиваем на 180° (PI)
            pose = self.poses[t]
            new_theta = pose[2] + math.pi
            tp_client = self.create_client(TeleportAbsolute, f'/{t}/teleport_absolute')
            if tp_client.wait_for_service(timeout_sec=1.0):
                req = TeleportAbsolute.Request(x=pose[0], y=pose[1], theta=new_theta)
                tp_client.call_async(req)

    def trigger_explosion(self):
        for t in self.turtles.keys():
            rx = random.uniform(1.0, 10.0)
            ry = random.uniform(1.0, 10.0)
            rt = random.uniform(0.0, 2 * math.pi)
            tp_client = self.create_client(TeleportAbsolute, f'/{t}/teleport_absolute')
            if tp_client.wait_for_service(timeout_sec=1.0):
                req = TeleportAbsolute.Request(x=rx, y=ry, theta=rt)
                tp_client.call_async(req)


def main(args=None):
    rclpy.init(args=args)
    node = ChemicalReactionNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()