// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chem_interfaces:msg/Collision.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chem_interfaces/msg/collision.h"


#ifndef CHEM_INTERFACES__MSG__DETAIL__COLLISION__STRUCT_H_
#define CHEM_INTERFACES__MSG__DETAIL__COLLISION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'PAIR'.
enum
{
  chem_interfaces__msg__Collision__PAIR = 2
};

/// Constant 'TRIPLE'.
enum
{
  chem_interfaces__msg__Collision__TRIPLE = 3
};

// Include directives for member types
// Member 'turtles'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Collision in the package chem_interfaces.
/**
  * Касание черепах
 */
typedef struct chem_interfaces__msg__Collision
{
  /// PAIR или TRIPLE
  uint8_t kind;
  /// имена черепах, участвующих в касании
  rosidl_runtime_c__String__Sequence turtles;
  /// центр точки касания
  float x;
  float y;
} chem_interfaces__msg__Collision;

// Struct for a sequence of chem_interfaces__msg__Collision.
typedef struct chem_interfaces__msg__Collision__Sequence
{
  chem_interfaces__msg__Collision * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chem_interfaces__msg__Collision__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHEM_INTERFACES__MSG__DETAIL__COLLISION__STRUCT_H_
