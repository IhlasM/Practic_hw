// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chem_interfaces:srv/Explode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chem_interfaces/srv/explode.h"


#ifndef CHEM_INTERFACES__SRV__DETAIL__EXPLODE__STRUCT_H_
#define CHEM_INTERFACES__SRV__DETAIL__EXPLODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turtles'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Explode in the package chem_interfaces.
typedef struct chem_interfaces__srv__Explode_Request
{
  rosidl_runtime_c__String__Sequence turtles;
} chem_interfaces__srv__Explode_Request;

// Struct for a sequence of chem_interfaces__srv__Explode_Request.
typedef struct chem_interfaces__srv__Explode_Request__Sequence
{
  chem_interfaces__srv__Explode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chem_interfaces__srv__Explode_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Explode in the package chem_interfaces.
typedef struct chem_interfaces__srv__Explode_Response
{
  bool success;
  /// сколько черепах телепортировано
  int32_t teleported;
} chem_interfaces__srv__Explode_Response;

// Struct for a sequence of chem_interfaces__srv__Explode_Response.
typedef struct chem_interfaces__srv__Explode_Response__Sequence
{
  chem_interfaces__srv__Explode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chem_interfaces__srv__Explode_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  chem_interfaces__srv__Explode_Event__request__MAX_SIZE = 1
};
// response
enum
{
  chem_interfaces__srv__Explode_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Explode in the package chem_interfaces.
typedef struct chem_interfaces__srv__Explode_Event
{
  service_msgs__msg__ServiceEventInfo info;
  chem_interfaces__srv__Explode_Request__Sequence request;
  chem_interfaces__srv__Explode_Response__Sequence response;
} chem_interfaces__srv__Explode_Event;

// Struct for a sequence of chem_interfaces__srv__Explode_Event.
typedef struct chem_interfaces__srv__Explode_Event__Sequence
{
  chem_interfaces__srv__Explode_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chem_interfaces__srv__Explode_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHEM_INTERFACES__SRV__DETAIL__EXPLODE__STRUCT_H_
