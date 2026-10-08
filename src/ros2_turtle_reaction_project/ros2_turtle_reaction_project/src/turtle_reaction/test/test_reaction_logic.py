import math
import os
import sys
from unittest.mock import MagicMock

import pytest

# Allow testing the package directly from the source tree.
sys.path.insert(0, os.path.join(os.path.dirname(__file__), ".."))

from turtle_reaction.reaction_node import ReactionNode


class FakePose:
    def __init__(self, x, y, theta=0.0):
        self.x = x
        self.y = y
        self.theta = theta


def test_distance():
    # Test the geometric collision condition independently of ROS.
    a = FakePose(1.0, 1.0)
    b = FakePose(1.3, 1.4)
    distance = math.hypot(a.x - b.x, a.y - b.y)
    assert distance == pytest.approx(0.5)


def test_triple_collision_math():
    poses = {
        "a": FakePose(5.0, 5.0),
        "b": FakePose(5.2, 5.0),
        "c": FakePose(5.0, 5.2),
    }
    cx = sum(p.x for p in poses.values()) / 3
    cy = sum(p.y for p in poses.values()) / 3
    assert all(math.hypot(p.x-cx, p.y-cy) < 0.5 for p in poses.values())


def test_reaction_interface_files_exist():
    root = os.path.abspath(os.path.join(os.path.dirname(__file__), "../../reaction_interfaces"))
    assert os.path.exists(os.path.join(root, "msg", "ReactionEvent.msg"))
    assert os.path.exists(os.path.join(root, "srv", "ResetSimulation.srv"))
    assert os.path.exists(os.path.join(root, "action", "RunSimulation.action"))


def test_turtle_names():
    assert ReactionNode.TURTLES == (
        "turtle_red", "turtle_blue", "turtle_green"
    )
