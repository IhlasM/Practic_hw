// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from reaction_interfaces:msg/TurtleColor.idl
// generated code does not contain a copyright notice

#ifndef REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "reaction_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "reaction_interfaces/msg/detail/turtle_color__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace reaction_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_reaction_interfaces
cdr_serialize(
  const reaction_interfaces::msg::TurtleColor & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_reaction_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  reaction_interfaces::msg::TurtleColor & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_reaction_interfaces
get_serialized_size(
  const reaction_interfaces::msg::TurtleColor & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_reaction_interfaces
max_serialized_size_TurtleColor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_reaction_interfaces
cdr_serialize_key(
  const reaction_interfaces::msg::TurtleColor & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_reaction_interfaces
get_serialized_size_key(
  const reaction_interfaces::msg::TurtleColor & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_reaction_interfaces
max_serialized_size_key_TurtleColor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace reaction_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_reaction_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, reaction_interfaces, msg, TurtleColor)();

#ifdef __cplusplus
}
#endif

#endif  // REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
