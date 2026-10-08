// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from reaction_interfaces:action/RandomWalk.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "reaction_interfaces/action/random_walk.h"


#ifndef REACTION_INTERFACES__ACTION__DETAIL__RANDOM_WALK__STRUCT_H_
#define REACTION_INTERFACES__ACTION__DETAIL__RANDOM_WALK__STRUCT_H_

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

/// Struct defined in action/RandomWalk in the package reaction_interfaces.
typedef struct reaction_interfaces__action__RandomWalk_Goal
{
  rosidl_runtime_c__String name;
  float duration;
} reaction_interfaces__action__RandomWalk_Goal;

// Struct for a sequence of reaction_interfaces__action__RandomWalk_Goal.
typedef struct reaction_interfaces__action__RandomWalk_Goal__Sequence
{
  reaction_interfaces__action__RandomWalk_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reaction_interfaces__action__RandomWalk_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/RandomWalk in the package reaction_interfaces.
typedef struct reaction_interfaces__action__RandomWalk_Result
{
  bool completed;
} reaction_interfaces__action__RandomWalk_Result;

// Struct for a sequence of reaction_interfaces__action__RandomWalk_Result.
typedef struct reaction_interfaces__action__RandomWalk_Result__Sequence
{
  reaction_interfaces__action__RandomWalk_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reaction_interfaces__action__RandomWalk_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/RandomWalk in the package reaction_interfaces.
typedef struct reaction_interfaces__action__RandomWalk_Feedback
{
  float time_left;
} reaction_interfaces__action__RandomWalk_Feedback;

// Struct for a sequence of reaction_interfaces__action__RandomWalk_Feedback.
typedef struct reaction_interfaces__action__RandomWalk_Feedback__Sequence
{
  reaction_interfaces__action__RandomWalk_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reaction_interfaces__action__RandomWalk_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "reaction_interfaces/action/detail/random_walk__struct.h"

/// Struct defined in action/RandomWalk in the package reaction_interfaces.
typedef struct reaction_interfaces__action__RandomWalk_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  reaction_interfaces__action__RandomWalk_Goal goal;
} reaction_interfaces__action__RandomWalk_SendGoal_Request;

// Struct for a sequence of reaction_interfaces__action__RandomWalk_SendGoal_Request.
typedef struct reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence
{
  reaction_interfaces__action__RandomWalk_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RandomWalk in the package reaction_interfaces.
typedef struct reaction_interfaces__action__RandomWalk_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} reaction_interfaces__action__RandomWalk_SendGoal_Response;

// Struct for a sequence of reaction_interfaces__action__RandomWalk_SendGoal_Response.
typedef struct reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence
{
  reaction_interfaces__action__RandomWalk_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  reaction_interfaces__action__RandomWalk_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  reaction_interfaces__action__RandomWalk_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/RandomWalk in the package reaction_interfaces.
typedef struct reaction_interfaces__action__RandomWalk_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  reaction_interfaces__action__RandomWalk_SendGoal_Request__Sequence request;
  reaction_interfaces__action__RandomWalk_SendGoal_Response__Sequence response;
} reaction_interfaces__action__RandomWalk_SendGoal_Event;

// Struct for a sequence of reaction_interfaces__action__RandomWalk_SendGoal_Event.
typedef struct reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence
{
  reaction_interfaces__action__RandomWalk_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reaction_interfaces__action__RandomWalk_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RandomWalk in the package reaction_interfaces.
typedef struct reaction_interfaces__action__RandomWalk_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} reaction_interfaces__action__RandomWalk_GetResult_Request;

// Struct for a sequence of reaction_interfaces__action__RandomWalk_GetResult_Request.
typedef struct reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence
{
  reaction_interfaces__action__RandomWalk_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.h"

/// Struct defined in action/RandomWalk in the package reaction_interfaces.
typedef struct reaction_interfaces__action__RandomWalk_GetResult_Response
{
  int8_t status;
  reaction_interfaces__action__RandomWalk_Result result;
} reaction_interfaces__action__RandomWalk_GetResult_Response;

// Struct for a sequence of reaction_interfaces__action__RandomWalk_GetResult_Response.
typedef struct reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence
{
  reaction_interfaces__action__RandomWalk_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  reaction_interfaces__action__RandomWalk_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  reaction_interfaces__action__RandomWalk_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/RandomWalk in the package reaction_interfaces.
typedef struct reaction_interfaces__action__RandomWalk_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  reaction_interfaces__action__RandomWalk_GetResult_Request__Sequence request;
  reaction_interfaces__action__RandomWalk_GetResult_Response__Sequence response;
} reaction_interfaces__action__RandomWalk_GetResult_Event;

// Struct for a sequence of reaction_interfaces__action__RandomWalk_GetResult_Event.
typedef struct reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence
{
  reaction_interfaces__action__RandomWalk_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reaction_interfaces__action__RandomWalk_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.h"

/// Struct defined in action/RandomWalk in the package reaction_interfaces.
typedef struct reaction_interfaces__action__RandomWalk_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  reaction_interfaces__action__RandomWalk_Feedback feedback;
} reaction_interfaces__action__RandomWalk_FeedbackMessage;

// Struct for a sequence of reaction_interfaces__action__RandomWalk_FeedbackMessage.
typedef struct reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence
{
  reaction_interfaces__action__RandomWalk_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reaction_interfaces__action__RandomWalk_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // REACTION_INTERFACES__ACTION__DETAIL__RANDOM_WALK__STRUCT_H_
