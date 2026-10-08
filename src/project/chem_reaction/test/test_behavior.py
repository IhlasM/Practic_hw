import math

from chem_reaction import behavior


def test_wander_keeps_command_in_open_field():
    assert behavior.wander_command(5.5, 5.5, 0.0, (1.5, 0.7)) == (1.5, 0.7)


def test_wander_turns_to_center_near_wall():
    lin, ang = behavior.wander_command(0.5, 5.5, math.pi / 2, (1.5, 0.7))
    assert lin == 1.0
    assert ang < 0  # у левой стены, смотрит вверх, центр справа -> по часовой


def test_cooldown_no_record():
    assert not behavior.is_on_cooldown({}, ('turtle1', 'turtle2'), 10.0, 3.0)


def test_cooldown_recent_event():
    last = {('turtle1', 'turtle2'): 9.0}
    assert behavior.is_on_cooldown(last, ('turtle1', 'turtle2'), 10.0, 3.0)


def test_cooldown_expired():
    last = {('turtle1', 'turtle2'): 5.0}
    assert not behavior.is_on_cooldown(last, ('turtle1', 'turtle2'), 10.0, 3.0)


def test_cooldown_other_key_is_independent():
    last = {('turtle1', 'turtle2'): 9.5}
    assert not behavior.is_on_cooldown(last, ('turtle2', 'turtle3'), 10.0, 3.0)
