"""Чистые функции поведения черепах (без ROS)."""
from chem_reaction import logic


def wander_command(x, y, theta, current):
    """Команда (линейная, угловая) для блуждания.

    У стены поворачиваем к центру поля, в остальных случаях
    держим текущую случайную команду.
    """
    if logic.near_wall(x, y):
        return 1.0, logic.angular_toward_center(x, y, theta)
    return current


def is_on_cooldown(last_times, key, now, cooldown):
    """Это касание уже недавно сообщали? (чтобы не слать его каждые 0.1 с)"""
    last = last_times.get(key)
    return last is not None and (now - last) < cooldown
