// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from reaction_interfaces:msg/TurtleColor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "reaction_interfaces/msg/detail/turtle_color__rosidl_typesupport_introspection_c.h"
#include "reaction_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "reaction_interfaces/msg/detail/turtle_color__functions.h"
#include "reaction_interfaces/msg/detail/turtle_color__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void reaction_interfaces__msg__TurtleColor__rosidl_typesupport_introspection_c__TurtleColor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  reaction_interfaces__msg__TurtleColor__init(message_memory);
}

void reaction_interfaces__msg__TurtleColor__rosidl_typesupport_introspection_c__TurtleColor_fini_function(void * message_memory)
{
  reaction_interfaces__msg__TurtleColor__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember reaction_interfaces__msg__TurtleColor__rosidl_typesupport_introspection_c__TurtleColor_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reaction_interfaces__msg__TurtleColor, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reaction_interfaces__msg__TurtleColor, r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "g",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reaction_interfaces__msg__TurtleColor, g),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reaction_interfaces__msg__TurtleColor, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers reaction_interfaces__msg__TurtleColor__rosidl_typesupport_introspection_c__TurtleColor_message_members = {
  "reaction_interfaces__msg",  // message namespace
  "TurtleColor",  // message name
  4,  // number of fields
  sizeof(reaction_interfaces__msg__TurtleColor),
  false,  // has_any_key_member_
  reaction_interfaces__msg__TurtleColor__rosidl_typesupport_introspection_c__TurtleColor_message_member_array,  // message members
  reaction_interfaces__msg__TurtleColor__rosidl_typesupport_introspection_c__TurtleColor_init_function,  // function to initialize message memory (memory has to be allocated)
  reaction_interfaces__msg__TurtleColor__rosidl_typesupport_introspection_c__TurtleColor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t reaction_interfaces__msg__TurtleColor__rosidl_typesupport_introspection_c__TurtleColor_message_type_support_handle = {
  0,
  &reaction_interfaces__msg__TurtleColor__rosidl_typesupport_introspection_c__TurtleColor_message_members,
  get_message_typesupport_handle_function,
  &reaction_interfaces__msg__TurtleColor__get_type_hash,
  &reaction_interfaces__msg__TurtleColor__get_type_description,
  &reaction_interfaces__msg__TurtleColor__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reaction_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, msg, TurtleColor)() {
  if (!reaction_interfaces__msg__TurtleColor__rosidl_typesupport_introspection_c__TurtleColor_message_type_support_handle.typesupport_identifier) {
    reaction_interfaces__msg__TurtleColor__rosidl_typesupport_introspection_c__TurtleColor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &reaction_interfaces__msg__TurtleColor__rosidl_typesupport_introspection_c__TurtleColor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
