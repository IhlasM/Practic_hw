// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from chem_interfaces:msg/Collision.idl
// generated code does not contain a copyright notice
#ifndef CHEM_INTERFACES__MSG__DETAIL__COLLISION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CHEM_INTERFACES__MSG__DETAIL__COLLISION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "chem_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "chem_interfaces/msg/detail/collision__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chem_interfaces
bool cdr_serialize_chem_interfaces__msg__Collision(
  const chem_interfaces__msg__Collision * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chem_interfaces
bool cdr_deserialize_chem_interfaces__msg__Collision(
  eprosima::fastcdr::Cdr &,
  chem_interfaces__msg__Collision * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chem_interfaces
size_t get_serialized_size_chem_interfaces__msg__Collision(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chem_interfaces
size_t max_serialized_size_chem_interfaces__msg__Collision(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chem_interfaces
bool cdr_serialize_key_chem_interfaces__msg__Collision(
  const chem_interfaces__msg__Collision * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chem_interfaces
size_t get_serialized_size_key_chem_interfaces__msg__Collision(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chem_interfaces
size_t max_serialized_size_key_chem_interfaces__msg__Collision(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chem_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chem_interfaces, msg, Collision)();

#ifdef __cplusplus
}
#endif

#endif  // CHEM_INTERFACES__MSG__DETAIL__COLLISION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
