// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from chem_interfaces:msg/Collision.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "chem_interfaces/msg/detail/collision__rosidl_typesupport_introspection_c.h"
#include "chem_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "chem_interfaces/msg/detail/collision__functions.h"
#include "chem_interfaces/msg/detail/collision__struct.h"


// Include directives for member types
// Member `turtles`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__Collision_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chem_interfaces__msg__Collision__init(message_memory);
}

void chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__Collision_fini_function(void * message_memory)
{
  chem_interfaces__msg__Collision__fini(message_memory);
}

size_t chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__size_function__Collision__turtles(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__get_const_function__Collision__turtles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__get_function__Collision__turtles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__fetch_function__Collision__turtles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__get_const_function__Collision__turtles(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__assign_function__Collision__turtles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__get_function__Collision__turtles(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__resize_function__Collision__turtles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__Collision_message_member_array[4] = {
  {
    "kind",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chem_interfaces__msg__Collision, kind),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turtles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chem_interfaces__msg__Collision, turtles),  // bytes offset in struct
    NULL,  // default value
    chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__size_function__Collision__turtles,  // size() function pointer
    chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__get_const_function__Collision__turtles,  // get_const(index) function pointer
    chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__get_function__Collision__turtles,  // get(index) function pointer
    chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__fetch_function__Collision__turtles,  // fetch(index, &value) function pointer
    chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__assign_function__Collision__turtles,  // assign(index, value) function pointer
    chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__resize_function__Collision__turtles  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chem_interfaces__msg__Collision, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chem_interfaces__msg__Collision, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__Collision_message_members = {
  "chem_interfaces__msg",  // message namespace
  "Collision",  // message name
  4,  // number of fields
  sizeof(chem_interfaces__msg__Collision),
  false,  // has_any_key_member_
  chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__Collision_message_member_array,  // message members
  chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__Collision_init_function,  // function to initialize message memory (memory has to be allocated)
  chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__Collision_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__Collision_message_type_support_handle = {
  0,
  &chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__Collision_message_members,
  get_message_typesupport_handle_function,
  &chem_interfaces__msg__Collision__get_type_hash,
  &chem_interfaces__msg__Collision__get_type_description,
  &chem_interfaces__msg__Collision__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chem_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chem_interfaces, msg, Collision)() {
  if (!chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__Collision_message_type_support_handle.typesupport_identifier) {
    chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__Collision_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &chem_interfaces__msg__Collision__rosidl_typesupport_introspection_c__Collision_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
