// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from reaction_interfaces:srv/ChangePenColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "reaction_interfaces/srv/change_pen_color.h"


#ifndef REACTION_INTERFACES__SRV__DETAIL__CHANGE_PEN_COLOR__STRUCT_H_
#define REACTION_INTERFACES__SRV__DETAIL__CHANGE_PEN_COLOR__STRUCT_H_

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

/// Struct defined in srv/ChangePenColor in the package reaction_interfaces.
typedef struct reaction_interfaces__srv__ChangePenColor_Request
{
  rosidl_runtime_c__String name;
  uint8_t r;
  uint8_t g;
  uint8_t b;
  uint8_t width;
} reaction_interfaces__srv__ChangePenColor_Request;

// Struct for a sequence of reaction_interfaces__srv__ChangePenColor_Request.
typedef struct reaction_interfaces__srv__ChangePenColor_Request__Sequence
{
  reaction_interfaces__srv__ChangePenColor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reaction_interfaces__srv__ChangePenColor_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ChangePenColor in the package reaction_interfaces.
typedef struct reaction_interfaces__srv__ChangePenColor_Response
{
  bool success;
} reaction_interfaces__srv__ChangePenColor_Response;

// Struct for a sequence of reaction_interfaces__srv__ChangePenColor_Response.
typedef struct reaction_interfaces__srv__ChangePenColor_Response__Sequence
{
  reaction_interfaces__srv__ChangePenColor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reaction_interfaces__srv__ChangePenColor_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  reaction_interfaces__srv__ChangePenColor_Event__request__MAX_SIZE = 1
};
// response
enum
{
  reaction_interfaces__srv__ChangePenColor_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ChangePenColor in the package reaction_interfaces.
typedef struct reaction_interfaces__srv__ChangePenColor_Event
{
  service_msgs__msg__ServiceEventInfo info;
  reaction_interfaces__srv__ChangePenColor_Request__Sequence request;
  reaction_interfaces__srv__ChangePenColor_Response__Sequence response;
} reaction_interfaces__srv__ChangePenColor_Event;

// Struct for a sequence of reaction_interfaces__srv__ChangePenColor_Event.
typedef struct reaction_interfaces__srv__ChangePenColor_Event__Sequence
{
  reaction_interfaces__srv__ChangePenColor_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reaction_interfaces__srv__ChangePenColor_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // REACTION_INTERFACES__SRV__DETAIL__CHANGE_PEN_COLOR__STRUCT_H_
