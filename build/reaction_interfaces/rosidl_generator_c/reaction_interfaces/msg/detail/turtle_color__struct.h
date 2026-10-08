// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from reaction_interfaces:msg/TurtleColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "reaction_interfaces/msg/turtle_color.h"


#ifndef REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__STRUCT_H_
#define REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TurtleColor in the package reaction_interfaces.
typedef struct reaction_interfaces__msg__TurtleColor
{
  rosidl_runtime_c__String name;
  uint8_t r;
  uint8_t g;
  uint8_t b;
} reaction_interfaces__msg__TurtleColor;

// Struct for a sequence of reaction_interfaces__msg__TurtleColor.
typedef struct reaction_interfaces__msg__TurtleColor__Sequence
{
  reaction_interfaces__msg__TurtleColor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reaction_interfaces__msg__TurtleColor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__STRUCT_H_
