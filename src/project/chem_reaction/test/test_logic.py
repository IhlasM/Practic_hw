import math
import random

import pytest

from chem_reaction import logic


# ---------- distance / is_touching ----------
def test_distance_3_4_5():
    assert logic.distance(0, 0, 3, 4) == pytest.approx(5.0)


def test_distance_zero():
    assert logic.distance(2, 2, 2, 2) == 0.0


def test_is_touching_close():
    assert logic.is_touching((1.0, 1.0), (1.3, 1.0))


def test_is_touching_far():
    assert not logic.is_touching((1.0, 1.0), (3.0, 1.0))


def test_is_touching_boundary_is_not_touching():
    # условие "расстояние < 0.5": ровно 0.5 - не касание
    assert not logic.is_touching((0.0, 0.0), (0.5, 0.0))


# ---------- find_collisions ----------
def test_no_collisions():
    pos = {'turtle1': (1, 1), 'turtle2': (5, 5), 'turtle3': (9, 9)}
    assert logic.find_collisions(pos) == []


def test_pair_collision():
    pos = {'turtle1': (5.0, 5.0), 'turtle2': (5.3, 5.0), 'turtle3': (9, 9)}
    result = logic.find_collisions(pos)
    assert len(result) == 1
    kind, names, cx, cy = result[0]
    assert kind == logic.PAIR
    assert names == ['turtle1', 'turtle2']
    assert cx == pytest.approx(5.15)
    assert cy == pytest.approx(5.0)


def test_triple_collision():
    pos = {'turtle1': (5.0, 5.0), 'turtle2': (5.2, 5.0), 'turtle3': (5.1, 5.2)}
    result = logic.find_collisions(pos)
    assert len(result) == 1
    kind, names, _, _ = result[0]
    assert kind == logic.TRIPLE
    assert names == ['turtle1', 'turtle2', 'turtle3']


def test_chain_is_pair_not_triple():
    # 1-2 и 2-3 касаются, 1-3 нет: тройки нет, реагирует одна пара
    pos = {'turtle1': (1.0, 5.0), 'turtle2': (1.4, 5.0), 'turtle3': (1.8, 5.0)}
    result = logic.find_collisions(pos)
    assert len(result) == 1
    assert result[0][0] == logic.PAIR


def test_other_pair_names():
    pos = {'turtle1': (1, 1), 'turtle2': (8, 8), 'turtle3': (8.2, 8.0)}
    result = logic.find_collisions(pos)
    assert result[0][1] == ['turtle2', 'turtle3']


# ---------- углы ----------
def test_normalize_angle_zero():
    assert logic.normalize_angle(2 * math.pi) == pytest.approx(0.0, abs=1e-9)


def test_normalize_angle_big():
    assert abs(logic.normalize_angle(3 * math.pi)) == pytest.approx(math.pi)


def test_normalize_angle_negative():
    assert logic.normalize_angle(-math.pi / 2) == pytest.approx(-math.pi / 2)


def test_turn_around_from_zero():
    assert logic.turn_around(0.0) == pytest.approx(math.pi)


def test_turn_around_wraps():
    assert logic.turn_around(math.pi / 2) == pytest.approx(-math.pi / 2)


# ---------- случайность ----------
def test_random_velocity_ranges():
    rng = random.Random(1)
    for _ in range(200):
        lin, ang = logic.random_velocity(rng)
        assert 1.0 <= lin <= 2.0
        assert -2.0 <= ang <= 2.0


def test_random_point_inside_field():
    rng = random.Random(2)
    for _ in range(200):
        x, y = logic.random_point(rng, margin=1.0)
        assert 1.0 <= x <= logic.FIELD_SIZE - 1.0
        assert 1.0 <= y <= logic.FIELD_SIZE - 1.0


def test_random_points_count():
    rng = random.Random(3)
    assert len(logic.random_points(rng, 3)) == 3


# ---------- стены ----------
def test_near_wall_true():
    assert logic.near_wall(0.5, 5.0)
    assert logic.near_wall(5.0, 10.5)


def test_near_wall_false():
    assert not logic.near_wall(5.5, 5.5)


def test_angular_toward_center_turns_right():
    # у левой стены, смотрит вверх, центр на востоке -> поворот по часовой (<0)
    assert logic.angular_toward_center(1.0, 5.5, math.pi / 2) < 0


def test_angular_toward_center_facing_center():
    # смотрит прямо на центр -> почти не поворачивает
    assert logic.angular_toward_center(1.0, 5.5, 0.0) == pytest.approx(0.0, abs=1e-6)


def test_angular_toward_center_is_limited():
    assert abs(logic.angular_toward_center(1.0, 5.5, math.pi)) <= 2.0


# ---------- цвета ----------
def test_pen_color_original():
    assert logic.pen_color_for('turtle1', False) == (255, 0, 0)
    assert logic.pen_color_for('turtle2', False) == (0, 0, 255)
    assert logic.pen_color_for('turtle3', False) == (0, 255, 0)


def test_pen_color_yellow_after_reaction():
    assert logic.pen_color_for('turtle2', True) == logic.YELLOW
