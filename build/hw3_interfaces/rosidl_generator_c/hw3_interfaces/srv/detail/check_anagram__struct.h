// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hw3_interfaces:srv/CheckAnagram.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw3_interfaces/srv/check_anagram.h"


#ifndef HW3_INTERFACES__SRV__DETAIL__CHECK_ANAGRAM__STRUCT_H_
#define HW3_INTERFACES__SRV__DETAIL__CHECK_ANAGRAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'first'
// Member 'second'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CheckAnagram in the package hw3_interfaces.
typedef struct hw3_interfaces__srv__CheckAnagram_Request
{
  rosidl_runtime_c__String first;
  rosidl_runtime_c__String second;
} hw3_interfaces__srv__CheckAnagram_Request;

// Struct for a sequence of hw3_interfaces__srv__CheckAnagram_Request.
typedef struct hw3_interfaces__srv__CheckAnagram_Request__Sequence
{
  hw3_interfaces__srv__CheckAnagram_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw3_interfaces__srv__CheckAnagram_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/CheckAnagram in the package hw3_interfaces.
typedef struct hw3_interfaces__srv__CheckAnagram_Response
{
  bool is_anagram;
} hw3_interfaces__srv__CheckAnagram_Response;

// Struct for a sequence of hw3_interfaces__srv__CheckAnagram_Response.
typedef struct hw3_interfaces__srv__CheckAnagram_Response__Sequence
{
  hw3_interfaces__srv__CheckAnagram_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw3_interfaces__srv__CheckAnagram_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  hw3_interfaces__srv__CheckAnagram_Event__request__MAX_SIZE = 1
};
// response
enum
{
  hw3_interfaces__srv__CheckAnagram_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CheckAnagram in the package hw3_interfaces.
typedef struct hw3_interfaces__srv__CheckAnagram_Event
{
  service_msgs__msg__ServiceEventInfo info;
  hw3_interfaces__srv__CheckAnagram_Request__Sequence request;
  hw3_interfaces__srv__CheckAnagram_Response__Sequence response;
} hw3_interfaces__srv__CheckAnagram_Event;

// Struct for a sequence of hw3_interfaces__srv__CheckAnagram_Event.
typedef struct hw3_interfaces__srv__CheckAnagram_Event__Sequence
{
  hw3_interfaces__srv__CheckAnagram_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw3_interfaces__srv__CheckAnagram_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HW3_INTERFACES__SRV__DETAIL__CHECK_ANAGRAM__STRUCT_H_
