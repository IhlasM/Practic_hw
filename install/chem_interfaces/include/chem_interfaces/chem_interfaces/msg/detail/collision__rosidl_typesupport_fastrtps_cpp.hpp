// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from chem_interfaces:msg/Collision.idl
// generated code does not contain a copyright notice

#ifndef CHEM_INTERFACES__MSG__DETAIL__COLLISION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CHEM_INTERFACES__MSG__DETAIL__COLLISION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "chem_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "chem_interfaces/msg/detail/collision__struct.hpp"

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

namespace chem_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chem_interfaces
cdr_serialize(
  const chem_interfaces::msg::Collision & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chem_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  chem_interfaces::msg::Collision & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chem_interfaces
get_serialized_size(
  const chem_interfaces::msg::Collision & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chem_interfaces
max_serialized_size_Collision(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chem_interfaces
cdr_serialize_key(
  const chem_interfaces::msg::Collision & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chem_interfaces
get_serialized_size_key(
  const chem_interfaces::msg::Collision & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chem_interfaces
max_serialized_size_key_Collision(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace chem_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chem_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chem_interfaces, msg, Collision)();

#ifdef __cplusplus
}
#endif

#endif  // CHEM_INTERFACES__MSG__DETAIL__COLLISION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
