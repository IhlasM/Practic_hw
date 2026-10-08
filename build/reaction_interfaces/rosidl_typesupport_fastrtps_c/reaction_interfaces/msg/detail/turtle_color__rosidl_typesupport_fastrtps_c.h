// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from reaction_interfaces:msg/TurtleColor.idl
// generated code does not contain a copyright notice
#ifndef REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "reaction_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "reaction_interfaces/msg/detail/turtle_color__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_reaction_interfaces
bool cdr_serialize_reaction_interfaces__msg__TurtleColor(
  const reaction_interfaces__msg__TurtleColor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_reaction_interfaces
bool cdr_deserialize_reaction_interfaces__msg__TurtleColor(
  eprosima::fastcdr::Cdr &,
  reaction_interfaces__msg__TurtleColor * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_reaction_interfaces
size_t get_serialized_size_reaction_interfaces__msg__TurtleColor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_reaction_interfaces
size_t max_serialized_size_reaction_interfaces__msg__TurtleColor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_reaction_interfaces
bool cdr_serialize_key_reaction_interfaces__msg__TurtleColor(
  const reaction_interfaces__msg__TurtleColor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_reaction_interfaces
size_t get_serialized_size_key_reaction_interfaces__msg__TurtleColor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_reaction_interfaces
size_t max_serialized_size_key_reaction_interfaces__msg__TurtleColor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_reaction_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reaction_interfaces, msg, TurtleColor)();

#ifdef __cplusplus
}
#endif

#endif  // REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
