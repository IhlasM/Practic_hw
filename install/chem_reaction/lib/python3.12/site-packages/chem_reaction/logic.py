"""Чистая логика проекта (без ROS), чтобы её можно было тестировать pytest."""
import math
from itertools import combinations

FIELD_SIZE = 11.0        # поле turtlesim: примерно 11 x 11
TOUCH_DISTANCE = 0.5     # расстояние касания по условию

PAIR = 2                 # совпадает с Collision.PAIR
TRIPLE = 3               # совпадает с Collision.TRIPLE

PEN_COLORS = {
    'turtle1': (255, 0, 0),    # красный
    'turtle2': (0, 0, 255),    # синий
    'turtle3': (0, 255, 0),    # зелёный
}
YELLOW = (255, 255, 0)


def distance(x1, y1, x2, y2):
    """Евклидово расстояние между двумя точками."""
    return math.hypot(x2 - x1, y2 - y1)


def is_touching(p1, p2, threshold=TOUCH_DISTANCE):
    """Черепахи касаются, если расстояние строго меньше порога."""
    return distance(p1[0], p1[1], p2[0], p2[1]) < threshold


def _center(names, positions):
    xs = [positions[n][0] for n in names]
    ys = [positions[n][1] for n in names]
    return sum(xs) / len(xs), sum(ys) / len(ys)


def find_collisions(positions, threshold=TOUCH_DISTANCE):
    """Ищет касания.

    positions: словарь {имя: (x, y)}.
    Возвращает список (kind, [имена], cx, cy), где kind = PAIR или TRIPLE.
    Тройка - когда все три пары черепах касаются друг друга.
    Одна черепаха участвует не больше чем в одном касании.
    """
    names = sorted(positions)
    touching = {
        (a, b) for a, b in combinations(names, 2)
        if is_touching(positions[a], positions[b], threshold)
    }

    result = []
    used = set()

    for a, b, c in combinations(names, 3):
        if {(a, b), (a, c), (b, c)} <= touching:
            group = [a, b, c]
            cx, cy = _center(group, positions)
            result.append((TRIPLE, group, cx, cy))
            used.update(group)

    for a, b in sorted(touching):
        if a not in used and b not in used:
            group = [a, b]
            cx, cy = _center(group, positions)
            result.append((PAIR, group, cx, cy))
            used.update(group)

    return result


def normalize_angle(angle):
    """Приводит угол к диапазону [-pi, pi]."""
    return math.atan2(math.sin(angle), math.cos(angle))


def turn_around(theta):
    """Новый угол после разворота на 180 градусов."""
    return normalize_angle(theta + math.pi)


def random_velocity(rng):
    """Случайные (линейная, угловая) скорости для блуждания."""
    return rng.uniform(1.0, 2.0), rng.uniform(-2.0, 2.0)


def random_point(rng, margin=1.0):
    """Случайная точка внутри поля, не ближе margin к краю."""
    return (rng.uniform(margin, FIELD_SIZE - margin),
            rng.uniform(margin, FIELD_SIZE - margin))


def random_points(rng, n, margin=1.0):
    """n случайных точек (для взрыва)."""
    return [random_point(rng, margin) for _ in range(n)]


def near_wall(x, y, margin=1.0):
    """Черепаха близко к стене поля?"""
    return (x < margin or x > FIELD_SIZE - margin
            or y < margin or y > FIELD_SIZE - margin)


def angular_toward_center(x, y, theta, gain=2.0, limit=2.0):
    """Угловая скорость, поворачивающая черепаху к центру поля."""
    target = math.atan2(FIELD_SIZE / 2 - y, FIELD_SIZE / 2 - x)
    diff = normalize_angle(target - theta)
    return max(-limit, min(limit, gain * diff))


def pen_color_for(name, reacted):
    """Цвет пера: жёлтый после реакции, иначе исходный цвет черепахи."""
    if reacted:
        return YELLOW
    return PEN_COLORS[name]
