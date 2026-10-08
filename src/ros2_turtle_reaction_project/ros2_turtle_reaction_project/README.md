# ROS2 Project №6 — Chemical Reaction

Проект для задания «Химическая реакция» на базе turtlesim.

## Что реализовано

- 3 черепахи: красная, синяя, зелёная.
- Случайное движение.
- Обнаружение касания:
  - 2 черепахи: обе становятся жёлтыми, разворачиваются на 180° и расходятся.
  - 3 черепахи одновременно: «взрыв», все телепортируются в случайные точки.
- ROS 2 topics, services и actions.
- Отдельный пакет `reaction_interfaces` с `.msg`, `.srv`, `.action`.
- Тесты на `pytest`.
- Управление turtlesim через стандартные `/turtleX/cmd_vel`, `/turtleX/pose`, `/spawn`, `/kill`, `/turtleX/teleport_absolute`.

## Требования

Проверено по структуре задания: ROS2 + turtlesim, три типа интерфейсов и тесты.

Рекомендуется ROS 2 Humble/Jazzy и Ubuntu.

## Сборка

```bash
cd ros2_turtle_reaction_project
source /opt/ros/$ROS_DISTRO/setup.bash
colcon build --symlink-install
source install/setup.bash
```

## Запуск

Терминал 1:
```bash
source /opt/ros/$ROS_DISTRO/setup.bash
ros2 run turtlesim turtlesim_node
```

Терминал 2:
```bash
source /opt/ros/$ROS_DISTRO/setup.bash
source install/setup.bash
ros2 run turtle_reaction reaction_node
```

После запуска узел создаёт/переиспользует turtlesim-черепах и начинает случайное движение.

## Проверка ROS-механизмов

Topics:
```bash
ros2 topic list
ros2 topic echo /reaction/events
```

Service:
```bash
ros2 service list
ros2 service call /reaction/reset reaction_interfaces/srv/ResetSimulation "{}"
```

Action:
```bash
ros2 action list
ros2 action send_goal /reaction/run_simulation reaction_interfaces/action/RunSimulation "{duration: 20.0}"
```

## Тесты

```bash
colcon test --pytest-args -q
colcon test-result --verbose
```

Также можно отдельно:
```bash
pytest -q src/turtle_reaction/test
```

## Демонстрация

Для видео удобно показать:
1. `ros2 run turtlesim turtlesim_node`
2. запуск `reaction_node`
3. случайное движение трёх черепах
4. `/reaction/events`
5. service `/reaction/reset`
6. action `/reaction/run_simulation`
7. `colcon test`
8. `git status`, `git log`, `git remote -v`

## Git

```bash
git init
git add .
git commit -m "Implement turtle chemical reaction project"
git branch -M main
git remote add origin <YOUR_GITHUB_REPOSITORY_URL>
git push -u origin main
```
