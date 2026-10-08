import math

from chem_reaction import reaction


def test_turn_command_far_is_positive_and_limited():
    ang = reaction.turn_command(0.0, math.pi / 2)
    assert 0 < ang <= 4.0


def test_turn_command_reached_is_zero():
    assert reaction.turn_command(1.0, 1.01) == 0.0


def test_turn_command_negative_direction():
    assert reaction.turn_command(1.0, 0.0) < 0


def test_turn_command_takes_short_way_around():
    # от 3.0 к -3.0 короче крутиться вперёд через pi, а не назад
    assert reaction.turn_command(3.0, -3.0) > 0


def test_split_due_some_due():
    due, rest = reaction.split_due({'turtle1': 5.0, 'turtle2': 12.0}, 10.0)
    assert due == ['turtle1']
    assert rest == {'turtle2': 12.0}


def test_split_due_none_due():
    due, rest = reaction.split_due({'turtle1': 15.0}, 10.0)
    assert due == []
    assert rest == {'turtle1': 15.0}


def test_split_due_all_due_sorted():
    due, rest = reaction.split_due({'turtle2': 1.0, 'turtle1': 2.0}, 10.0)
    assert due == ['turtle1', 'turtle2']
    assert rest == {}


def test_split_due_empty():
    assert reaction.split_due({}, 10.0) == ([], {})
