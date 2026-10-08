// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chem_interfaces:action/React.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chem_interfaces/action/react.h"


#ifndef CHEM_INTERFACES__ACTION__DETAIL__REACT__STRUCT_H_
#define CHEM_INTERFACES__ACTION__DETAIL__REACT__STRUCT_H_

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

/// Struct defined in action/React in the package chem_interfaces.
typedef struct chem_interfaces__action__React_Goal
{
  rosidl_runtime_c__String__Sequence turtles;
} chem_interfaces__action__React_Goal;

// Struct for a sequence of chem_interfaces__action__React_Goal.
typedef struct chem_interfaces__action__React_Goal__Sequence
{
  chem_interfaces__action__React_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chem_interfaces__action__React_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/React in the package chem_interfaces.
typedef struct chem_interfaces__action__React_Result
{
  bool success;
} chem_interfaces__action__React_Result;

// Struct for a sequence of chem_interfaces__action__React_Result.
typedef struct chem_interfaces__action__React_Result__Sequence
{
  chem_interfaces__action__React_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chem_interfaces__action__React_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stage'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/React in the package chem_interfaces.
typedef struct chem_interfaces__action__React_Feedback
{
  /// turn / move
  rosidl_runtime_c__String stage;
  /// от 0.0 до 1.0
  float progress;
} chem_interfaces__action__React_Feedback;

// Struct for a sequence of chem_interfaces__action__React_Feedback.
typedef struct chem_interfaces__action__React_Feedback__Sequence
{
  chem_interfaces__action__React_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chem_interfaces__action__React_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "chem_interfaces/action/detail/react__struct.h"

/// Struct defined in action/React in the package chem_interfaces.
typedef struct chem_interfaces__action__React_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  chem_interfaces__action__React_Goal goal;
} chem_interfaces__action__React_SendGoal_Request;

// Struct for a sequence of chem_interfaces__action__React_SendGoal_Request.
typedef struct chem_interfaces__action__React_SendGoal_Request__Sequence
{
  chem_interfaces__action__React_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chem_interfaces__action__React_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/React in the package chem_interfaces.
typedef struct chem_interfaces__action__React_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} chem_interfaces__action__React_SendGoal_Response;

// Struct for a sequence of chem_interfaces__action__React_SendGoal_Response.
typedef struct chem_interfaces__action__React_SendGoal_Response__Sequence
{
  chem_interfaces__action__React_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chem_interfaces__action__React_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  chem_interfaces__action__React_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  chem_interfaces__action__React_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/React in the package chem_interfaces.
typedef struct chem_interfaces__action__React_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  chem_interfaces__action__React_SendGoal_Request__Sequence request;
  chem_interfaces__action__React_SendGoal_Response__Sequence response;
} chem_interfaces__action__React_SendGoal_Event;

// Struct for a sequence of chem_interfaces__action__React_SendGoal_Event.
typedef struct chem_interfaces__action__React_SendGoal_Event__Sequence
{
  chem_interfaces__action__React_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chem_interfaces__action__React_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/React in the package chem_interfaces.
typedef struct chem_interfaces__action__React_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} chem_interfaces__action__React_GetResult_Request;

// Struct for a sequence of chem_interfaces__action__React_GetResult_Request.
typedef struct chem_interfaces__action__React_GetResult_Request__Sequence
{
  chem_interfaces__action__React_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chem_interfaces__action__React_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "chem_interfaces/action/detail/react__struct.h"

/// Struct defined in action/React in the package chem_interfaces.
typedef struct chem_interfaces__action__React_GetResult_Response
{
  int8_t status;
  chem_interfaces__action__React_Result result;
} chem_interfaces__action__React_GetResult_Response;

// Struct for a sequence of chem_interfaces__action__React_GetResult_Response.
typedef struct chem_interfaces__action__React_GetResult_Response__Sequence
{
  chem_interfaces__action__React_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chem_interfaces__action__React_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  chem_interfaces__action__React_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  chem_interfaces__action__React_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/React in the package chem_interfaces.
typedef struct chem_interfaces__action__React_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  chem_interfaces__action__React_GetResult_Request__Sequence request;
  chem_interfaces__action__React_GetResult_Response__Sequence response;
} chem_interfaces__action__React_GetResult_Event;

// Struct for a sequence of chem_interfaces__action__React_GetResult_Event.
typedef struct chem_interfaces__action__React_GetResult_Event__Sequence
{
  chem_interfaces__action__React_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chem_interfaces__action__React_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "chem_interfaces/action/detail/react__struct.h"

/// Struct defined in action/React in the package chem_interfaces.
typedef struct chem_interfaces__action__React_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  chem_interfaces__action__React_Feedback feedback;
} chem_interfaces__action__React_FeedbackMessage;

// Struct for a sequence of chem_interfaces__action__React_FeedbackMessage.
typedef struct chem_interfaces__action__React_FeedbackMessage__Sequence
{
  chem_interfaces__action__React_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chem_interfaces__action__React_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHEM_INTERFACES__ACTION__DETAIL__REACT__STRUCT_H_
