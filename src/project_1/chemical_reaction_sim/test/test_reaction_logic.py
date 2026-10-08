import math
import pytest
from chemical_reaction_sim.reaction_node import calculate_distance, check_collisions


def test_calculate_distance():
    p1 = (0.0, 0.0, 0.0)
    p2 = (3.0, 4.0, 0.0)
    assert calculate_distance(p1, p2) == pytest.approx(5.0)


def test_no_collision():
    poses = {
        'turtle1': (1.0, 1.0, 0.0),
        'turtle2': (5.0, 5.0, 0.0),
        'turtle3': (9.0, 9.0, 0.0)
    }
    event, targets = check_collisions(poses, threshold=0.5)
    assert event == 'NONE'
    assert targets is None


def test_two_turtles_reaction():
    poses = {
        'turtle1': (1.0, 1.0, 0.0),
        'turtle2': (1.3, 1.0, 0.0),  # Расстояние 0.3 < 0.5
        'turtle3': (8.0, 8.0, 0.0)
    }
    event, targets = check_collisions(poses, threshold=0.5)
    assert event == 'REACTION'
    assert set(targets) == {'turtle1', 'turtle2'}


def test_three_turtles_explosion():
    poses = {
        'turtle1': (2.0, 2.0, 0.0),
        'turtle2': (2.2, 2.0, 0.0),  # d = 0.2
        'turtle3': (2.1, 2.2, 0.0)   # d = 0.223 и 0.20
    }
    event, targets = check_collisions(poses, threshold=0.5)
    assert event == 'EXPLOSION'
    assert targets is None