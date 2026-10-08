"""Чистые функции реакции (без ROS)."""
from chem_reaction import logic


def turn_command(theta, target, gain=4.0, limit=4.0, tol=0.03):
    """Угловая скорость для поворота от theta к target.

    Возвращает 0.0, когда цель достигнута (разница меньше tol).
    """
    diff = logic.normalize_angle(target - theta)
    if abs(diff) < tol:
        return 0.0
    return max(-limit, min(limit, gain * diff))


def split_due(pending, now):
    """Делит ожидающие возврата цвета на готовые и оставшиеся.

    pending: {имя: время, когда вернуть цвет}.
    Возвращает (отсортированный список готовых имён, словарь оставшихся).
    """
    due = sorted(n for n, t in pending.items() if t <= now)
    rest = {n: t for n, t in pending.items() if t > now}
    return due, rest
