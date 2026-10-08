// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hw4_interfaces:action/PowerOfTwo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"
#include "hw4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hw4_interfaces/action/detail/power_of_two__functions.h"
#include "hw4_interfaces/action/detail/power_of_two__struct.h"


// Include directives for member types
// Member `numbers`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__PowerOfTwo_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw4_interfaces__action__PowerOfTwo_Goal__init(message_memory);
}

void hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__PowerOfTwo_Goal_fini_function(void * message_memory)
{
  hw4_interfaces__action__PowerOfTwo_Goal__fini(message_memory);
}

size_t hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__size_function__PowerOfTwo_Goal__numbers(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_Goal__numbers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_Goal__numbers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__fetch_function__PowerOfTwo_Goal__numbers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_Goal__numbers(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__assign_function__PowerOfTwo_Goal__numbers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_Goal__numbers(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__resize_function__PowerOfTwo_Goal__numbers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__PowerOfTwo_Goal_message_member_array[1] = {
  {
    "numbers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_Goal, numbers),  // bytes offset in struct
    NULL,  // default value
    hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__size_function__PowerOfTwo_Goal__numbers,  // size() function pointer
    hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_Goal__numbers,  // get_const(index) function pointer
    hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_Goal__numbers,  // get(index) function pointer
    hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__fetch_function__PowerOfTwo_Goal__numbers,  // fetch(index, &value) function pointer
    hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__assign_function__PowerOfTwo_Goal__numbers,  // assign(index, value) function pointer
    hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__resize_function__PowerOfTwo_Goal__numbers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__PowerOfTwo_Goal_message_members = {
  "hw4_interfaces__action",  // message namespace
  "PowerOfTwo_Goal",  // message name
  1,  // number of fields
  sizeof(hw4_interfaces__action__PowerOfTwo_Goal),
  false,  // has_any_key_member_
  hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__PowerOfTwo_Goal_message_member_array,  // message members
  hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__PowerOfTwo_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__PowerOfTwo_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__PowerOfTwo_Goal_message_type_support_handle = {
  0,
  &hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__PowerOfTwo_Goal_message_members,
  get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_Goal__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_Goal__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw4_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_Goal)() {
  if (!hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__PowerOfTwo_Goal_message_type_support_handle.typesupport_identifier) {
    hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__PowerOfTwo_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw4_interfaces__action__PowerOfTwo_Goal__rosidl_typesupport_introspection_c__PowerOfTwo_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hw4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"


// Include directives for member types
// Member `powers`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__PowerOfTwo_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw4_interfaces__action__PowerOfTwo_Result__init(message_memory);
}

void hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__PowerOfTwo_Result_fini_function(void * message_memory)
{
  hw4_interfaces__action__PowerOfTwo_Result__fini(message_memory);
}

size_t hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__size_function__PowerOfTwo_Result__powers(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_Result__powers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_Result__powers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__fetch_function__PowerOfTwo_Result__powers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_Result__powers(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__assign_function__PowerOfTwo_Result__powers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_Result__powers(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__resize_function__PowerOfTwo_Result__powers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__PowerOfTwo_Result_message_member_array[1] = {
  {
    "powers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_Result, powers),  // bytes offset in struct
    NULL,  // default value
    hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__size_function__PowerOfTwo_Result__powers,  // size() function pointer
    hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_Result__powers,  // get_const(index) function pointer
    hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_Result__powers,  // get(index) function pointer
    hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__fetch_function__PowerOfTwo_Result__powers,  // fetch(index, &value) function pointer
    hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__assign_function__PowerOfTwo_Result__powers,  // assign(index, value) function pointer
    hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__resize_function__PowerOfTwo_Result__powers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__PowerOfTwo_Result_message_members = {
  "hw4_interfaces__action",  // message namespace
  "PowerOfTwo_Result",  // message name
  1,  // number of fields
  sizeof(hw4_interfaces__action__PowerOfTwo_Result),
  false,  // has_any_key_member_
  hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__PowerOfTwo_Result_message_member_array,  // message members
  hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__PowerOfTwo_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__PowerOfTwo_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__PowerOfTwo_Result_message_type_support_handle = {
  0,
  &hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__PowerOfTwo_Result_message_members,
  get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_Result__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_Result__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw4_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_Result)() {
  if (!hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__PowerOfTwo_Result_message_type_support_handle.typesupport_identifier) {
    hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__PowerOfTwo_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw4_interfaces__action__PowerOfTwo_Result__rosidl_typesupport_introspection_c__PowerOfTwo_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hw4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hw4_interfaces__action__PowerOfTwo_Feedback__rosidl_typesupport_introspection_c__PowerOfTwo_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw4_interfaces__action__PowerOfTwo_Feedback__init(message_memory);
}

void hw4_interfaces__action__PowerOfTwo_Feedback__rosidl_typesupport_introspection_c__PowerOfTwo_Feedback_fini_function(void * message_memory)
{
  hw4_interfaces__action__PowerOfTwo_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hw4_interfaces__action__PowerOfTwo_Feedback__rosidl_typesupport_introspection_c__PowerOfTwo_Feedback_message_member_array[2] = {
  {
    "number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_Feedback, number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_Feedback, power),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw4_interfaces__action__PowerOfTwo_Feedback__rosidl_typesupport_introspection_c__PowerOfTwo_Feedback_message_members = {
  "hw4_interfaces__action",  // message namespace
  "PowerOfTwo_Feedback",  // message name
  2,  // number of fields
  sizeof(hw4_interfaces__action__PowerOfTwo_Feedback),
  false,  // has_any_key_member_
  hw4_interfaces__action__PowerOfTwo_Feedback__rosidl_typesupport_introspection_c__PowerOfTwo_Feedback_message_member_array,  // message members
  hw4_interfaces__action__PowerOfTwo_Feedback__rosidl_typesupport_introspection_c__PowerOfTwo_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  hw4_interfaces__action__PowerOfTwo_Feedback__rosidl_typesupport_introspection_c__PowerOfTwo_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw4_interfaces__action__PowerOfTwo_Feedback__rosidl_typesupport_introspection_c__PowerOfTwo_Feedback_message_type_support_handle = {
  0,
  &hw4_interfaces__action__PowerOfTwo_Feedback__rosidl_typesupport_introspection_c__PowerOfTwo_Feedback_message_members,
  get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_Feedback__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_Feedback__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw4_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_Feedback)() {
  if (!hw4_interfaces__action__PowerOfTwo_Feedback__rosidl_typesupport_introspection_c__PowerOfTwo_Feedback_message_type_support_handle.typesupport_identifier) {
    hw4_interfaces__action__PowerOfTwo_Feedback__rosidl_typesupport_introspection_c__PowerOfTwo_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw4_interfaces__action__PowerOfTwo_Feedback__rosidl_typesupport_introspection_c__PowerOfTwo_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hw4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "hw4_interfaces/action/power_of_two.h"
// Member `goal`
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw4_interfaces__action__PowerOfTwo_SendGoal_Request__init(message_memory);
}

void hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_fini_function(void * message_memory)
{
  hw4_interfaces__action__PowerOfTwo_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_message_members = {
  "hw4_interfaces__action",  // message namespace
  "PowerOfTwo_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(hw4_interfaces__action__PowerOfTwo_SendGoal_Request),
  false,  // has_any_key_member_
  hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_message_member_array,  // message members
  hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_message_type_support_handle = {
  0,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Request__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Request__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw4_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Request)() {
  hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_Goal)();
  if (!hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hw4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hw4_interfaces__action__PowerOfTwo_SendGoal_Response__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw4_interfaces__action__PowerOfTwo_SendGoal_Response__init(message_memory);
}

void hw4_interfaces__action__PowerOfTwo_SendGoal_Response__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_fini_function(void * message_memory)
{
  hw4_interfaces__action__PowerOfTwo_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hw4_interfaces__action__PowerOfTwo_SendGoal_Response__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw4_interfaces__action__PowerOfTwo_SendGoal_Response__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_message_members = {
  "hw4_interfaces__action",  // message namespace
  "PowerOfTwo_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(hw4_interfaces__action__PowerOfTwo_SendGoal_Response),
  false,  // has_any_key_member_
  hw4_interfaces__action__PowerOfTwo_SendGoal_Response__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_message_member_array,  // message members
  hw4_interfaces__action__PowerOfTwo_SendGoal_Response__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  hw4_interfaces__action__PowerOfTwo_SendGoal_Response__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw4_interfaces__action__PowerOfTwo_SendGoal_Response__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_message_type_support_handle = {
  0,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Response__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Response__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Response__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw4_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Response)() {
  hw4_interfaces__action__PowerOfTwo_SendGoal_Response__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!hw4_interfaces__action__PowerOfTwo_SendGoal_Response__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    hw4_interfaces__action__PowerOfTwo_SendGoal_Response__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw4_interfaces__action__PowerOfTwo_SendGoal_Response__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hw4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "hw4_interfaces/action/power_of_two.h"
// Member `request`
// Member `response`
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw4_interfaces__action__PowerOfTwo_SendGoal_Event__init(message_memory);
}

void hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_fini_function(void * message_memory)
{
  hw4_interfaces__action__PowerOfTwo_SendGoal_Event__fini(message_memory);
}

size_t hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__PowerOfTwo_SendGoal_Event__request(
  const void * untyped_member)
{
  const hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence * member =
    (const hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence * member =
    (const hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence * member =
    (hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__PowerOfTwo_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hw4_interfaces__action__PowerOfTwo_SendGoal_Request * item =
    ((const hw4_interfaces__action__PowerOfTwo_SendGoal_Request *)
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_SendGoal_Event__request(untyped_member, index));
  hw4_interfaces__action__PowerOfTwo_SendGoal_Request * value =
    (hw4_interfaces__action__PowerOfTwo_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__PowerOfTwo_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hw4_interfaces__action__PowerOfTwo_SendGoal_Request * item =
    ((hw4_interfaces__action__PowerOfTwo_SendGoal_Request *)
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_SendGoal_Event__request(untyped_member, index));
  const hw4_interfaces__action__PowerOfTwo_SendGoal_Request * value =
    (const hw4_interfaces__action__PowerOfTwo_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__PowerOfTwo_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence * member =
    (hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence *)(untyped_member);
  hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence__fini(member);
  return hw4_interfaces__action__PowerOfTwo_SendGoal_Request__Sequence__init(member, size);
}

size_t hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__PowerOfTwo_SendGoal_Event__response(
  const void * untyped_member)
{
  const hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence * member =
    (const hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence * member =
    (const hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence * member =
    (hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__PowerOfTwo_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hw4_interfaces__action__PowerOfTwo_SendGoal_Response * item =
    ((const hw4_interfaces__action__PowerOfTwo_SendGoal_Response *)
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_SendGoal_Event__response(untyped_member, index));
  hw4_interfaces__action__PowerOfTwo_SendGoal_Response * value =
    (hw4_interfaces__action__PowerOfTwo_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__PowerOfTwo_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hw4_interfaces__action__PowerOfTwo_SendGoal_Response * item =
    ((hw4_interfaces__action__PowerOfTwo_SendGoal_Response *)
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_SendGoal_Event__response(untyped_member, index));
  const hw4_interfaces__action__PowerOfTwo_SendGoal_Response * value =
    (const hw4_interfaces__action__PowerOfTwo_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__PowerOfTwo_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence * member =
    (hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence *)(untyped_member);
  hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence__fini(member);
  return hw4_interfaces__action__PowerOfTwo_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_SendGoal_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__PowerOfTwo_SendGoal_Event__request,  // size() function pointer
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_SendGoal_Event__request,  // get_const(index) function pointer
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_SendGoal_Event__request,  // get(index) function pointer
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__PowerOfTwo_SendGoal_Event__request,  // fetch(index, &value) function pointer
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__PowerOfTwo_SendGoal_Event__request,  // assign(index, value) function pointer
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__PowerOfTwo_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__PowerOfTwo_SendGoal_Event__response,  // size() function pointer
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_SendGoal_Event__response,  // get_const(index) function pointer
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_SendGoal_Event__response,  // get(index) function pointer
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__PowerOfTwo_SendGoal_Event__response,  // fetch(index, &value) function pointer
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__PowerOfTwo_SendGoal_Event__response,  // assign(index, value) function pointer
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__PowerOfTwo_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_message_members = {
  "hw4_interfaces__action",  // message namespace
  "PowerOfTwo_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(hw4_interfaces__action__PowerOfTwo_SendGoal_Event),
  false,  // has_any_key_member_
  hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_message_member_array,  // message members
  hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_message_type_support_handle = {
  0,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Event__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Event__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw4_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Event)() {
  hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Request)();
  hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Response)();
  if (!hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hw4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_service_members = {
  "hw4_interfaces__action",  // service namespace
  "PowerOfTwo_SendGoal",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_service_type_support_handle = {
  0,
  &hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Request__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Request_message_type_support_handle,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Response__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Response_message_type_support_handle,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Event__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hw4_interfaces,
    action,
    PowerOfTwo_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hw4_interfaces,
    action,
    PowerOfTwo_SendGoal
  ),
  &hw4_interfaces__action__PowerOfTwo_SendGoal__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_SendGoal__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_SendGoal__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw4_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal)(void) {
  if (!hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_service_type_support_handle.typesupport_identifier) {
    hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Event)()->data;
  }

  return &hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hw4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hw4_interfaces__action__PowerOfTwo_GetResult_Request__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw4_interfaces__action__PowerOfTwo_GetResult_Request__init(message_memory);
}

void hw4_interfaces__action__PowerOfTwo_GetResult_Request__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_fini_function(void * message_memory)
{
  hw4_interfaces__action__PowerOfTwo_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hw4_interfaces__action__PowerOfTwo_GetResult_Request__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw4_interfaces__action__PowerOfTwo_GetResult_Request__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_message_members = {
  "hw4_interfaces__action",  // message namespace
  "PowerOfTwo_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(hw4_interfaces__action__PowerOfTwo_GetResult_Request),
  false,  // has_any_key_member_
  hw4_interfaces__action__PowerOfTwo_GetResult_Request__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_message_member_array,  // message members
  hw4_interfaces__action__PowerOfTwo_GetResult_Request__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  hw4_interfaces__action__PowerOfTwo_GetResult_Request__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw4_interfaces__action__PowerOfTwo_GetResult_Request__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_message_type_support_handle = {
  0,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Request__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Request__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Request__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw4_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult_Request)() {
  hw4_interfaces__action__PowerOfTwo_GetResult_Request__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!hw4_interfaces__action__PowerOfTwo_GetResult_Request__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    hw4_interfaces__action__PowerOfTwo_GetResult_Request__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw4_interfaces__action__PowerOfTwo_GetResult_Request__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hw4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "hw4_interfaces/action/power_of_two.h"
// Member `result`
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hw4_interfaces__action__PowerOfTwo_GetResult_Response__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw4_interfaces__action__PowerOfTwo_GetResult_Response__init(message_memory);
}

void hw4_interfaces__action__PowerOfTwo_GetResult_Response__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_fini_function(void * message_memory)
{
  hw4_interfaces__action__PowerOfTwo_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hw4_interfaces__action__PowerOfTwo_GetResult_Response__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw4_interfaces__action__PowerOfTwo_GetResult_Response__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_message_members = {
  "hw4_interfaces__action",  // message namespace
  "PowerOfTwo_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(hw4_interfaces__action__PowerOfTwo_GetResult_Response),
  false,  // has_any_key_member_
  hw4_interfaces__action__PowerOfTwo_GetResult_Response__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_message_member_array,  // message members
  hw4_interfaces__action__PowerOfTwo_GetResult_Response__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  hw4_interfaces__action__PowerOfTwo_GetResult_Response__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw4_interfaces__action__PowerOfTwo_GetResult_Response__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_message_type_support_handle = {
  0,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Response__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Response__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Response__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw4_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult_Response)() {
  hw4_interfaces__action__PowerOfTwo_GetResult_Response__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_Result)();
  if (!hw4_interfaces__action__PowerOfTwo_GetResult_Response__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    hw4_interfaces__action__PowerOfTwo_GetResult_Response__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw4_interfaces__action__PowerOfTwo_GetResult_Response__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hw4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/service_event_info.h"
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "hw4_interfaces/action/power_of_two.h"
// Member `request`
// Member `response`
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw4_interfaces__action__PowerOfTwo_GetResult_Event__init(message_memory);
}

void hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_fini_function(void * message_memory)
{
  hw4_interfaces__action__PowerOfTwo_GetResult_Event__fini(message_memory);
}

size_t hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__size_function__PowerOfTwo_GetResult_Event__request(
  const void * untyped_member)
{
  const hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence * member =
    (const hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence * member =
    (const hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence * member =
    (hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__PowerOfTwo_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hw4_interfaces__action__PowerOfTwo_GetResult_Request * item =
    ((const hw4_interfaces__action__PowerOfTwo_GetResult_Request *)
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_GetResult_Event__request(untyped_member, index));
  hw4_interfaces__action__PowerOfTwo_GetResult_Request * value =
    (hw4_interfaces__action__PowerOfTwo_GetResult_Request *)(untyped_value);
  *value = *item;
}

void hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__PowerOfTwo_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hw4_interfaces__action__PowerOfTwo_GetResult_Request * item =
    ((hw4_interfaces__action__PowerOfTwo_GetResult_Request *)
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_GetResult_Event__request(untyped_member, index));
  const hw4_interfaces__action__PowerOfTwo_GetResult_Request * value =
    (const hw4_interfaces__action__PowerOfTwo_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__PowerOfTwo_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence * member =
    (hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence *)(untyped_member);
  hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence__fini(member);
  return hw4_interfaces__action__PowerOfTwo_GetResult_Request__Sequence__init(member, size);
}

size_t hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__size_function__PowerOfTwo_GetResult_Event__response(
  const void * untyped_member)
{
  const hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence * member =
    (const hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence * member =
    (const hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence * member =
    (hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__PowerOfTwo_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hw4_interfaces__action__PowerOfTwo_GetResult_Response * item =
    ((const hw4_interfaces__action__PowerOfTwo_GetResult_Response *)
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_GetResult_Event__response(untyped_member, index));
  hw4_interfaces__action__PowerOfTwo_GetResult_Response * value =
    (hw4_interfaces__action__PowerOfTwo_GetResult_Response *)(untyped_value);
  *value = *item;
}

void hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__PowerOfTwo_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hw4_interfaces__action__PowerOfTwo_GetResult_Response * item =
    ((hw4_interfaces__action__PowerOfTwo_GetResult_Response *)
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_GetResult_Event__response(untyped_member, index));
  const hw4_interfaces__action__PowerOfTwo_GetResult_Response * value =
    (const hw4_interfaces__action__PowerOfTwo_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__PowerOfTwo_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence * member =
    (hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence *)(untyped_member);
  hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence__fini(member);
  return hw4_interfaces__action__PowerOfTwo_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_GetResult_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__size_function__PowerOfTwo_GetResult_Event__request,  // size() function pointer
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_GetResult_Event__request,  // get_const(index) function pointer
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_GetResult_Event__request,  // get(index) function pointer
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__PowerOfTwo_GetResult_Event__request,  // fetch(index, &value) function pointer
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__PowerOfTwo_GetResult_Event__request,  // assign(index, value) function pointer
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__PowerOfTwo_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__size_function__PowerOfTwo_GetResult_Event__response,  // size() function pointer
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__PowerOfTwo_GetResult_Event__response,  // get_const(index) function pointer
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__get_function__PowerOfTwo_GetResult_Event__response,  // get(index) function pointer
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__PowerOfTwo_GetResult_Event__response,  // fetch(index, &value) function pointer
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__PowerOfTwo_GetResult_Event__response,  // assign(index, value) function pointer
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__PowerOfTwo_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_message_members = {
  "hw4_interfaces__action",  // message namespace
  "PowerOfTwo_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(hw4_interfaces__action__PowerOfTwo_GetResult_Event),
  false,  // has_any_key_member_
  hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_message_member_array,  // message members
  hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_message_type_support_handle = {
  0,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Event__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Event__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw4_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult_Event)() {
  hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult_Request)();
  hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult_Response)();
  if (!hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hw4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_service_members = {
  "hw4_interfaces__action",  // service namespace
  "PowerOfTwo_GetResult",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_service_type_support_handle = {
  0,
  &hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_service_members,
  get_service_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Request__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Request_message_type_support_handle,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Response__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Response_message_type_support_handle,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Event__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hw4_interfaces,
    action,
    PowerOfTwo_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hw4_interfaces,
    action,
    PowerOfTwo_GetResult
  ),
  &hw4_interfaces__action__PowerOfTwo_GetResult__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_GetResult__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_GetResult__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw4_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult)(void) {
  if (!hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_service_type_support_handle.typesupport_identifier) {
    hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult_Event)()->data;
  }

  return &hw4_interfaces__action__detail__power_of_two__rosidl_typesupport_introspection_c__PowerOfTwo_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hw4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "hw4_interfaces/action/power_of_two.h"
// Member `feedback`
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hw4_interfaces__action__PowerOfTwo_FeedbackMessage__rosidl_typesupport_introspection_c__PowerOfTwo_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw4_interfaces__action__PowerOfTwo_FeedbackMessage__init(message_memory);
}

void hw4_interfaces__action__PowerOfTwo_FeedbackMessage__rosidl_typesupport_introspection_c__PowerOfTwo_FeedbackMessage_fini_function(void * message_memory)
{
  hw4_interfaces__action__PowerOfTwo_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hw4_interfaces__action__PowerOfTwo_FeedbackMessage__rosidl_typesupport_introspection_c__PowerOfTwo_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interfaces__action__PowerOfTwo_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw4_interfaces__action__PowerOfTwo_FeedbackMessage__rosidl_typesupport_introspection_c__PowerOfTwo_FeedbackMessage_message_members = {
  "hw4_interfaces__action",  // message namespace
  "PowerOfTwo_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(hw4_interfaces__action__PowerOfTwo_FeedbackMessage),
  false,  // has_any_key_member_
  hw4_interfaces__action__PowerOfTwo_FeedbackMessage__rosidl_typesupport_introspection_c__PowerOfTwo_FeedbackMessage_message_member_array,  // message members
  hw4_interfaces__action__PowerOfTwo_FeedbackMessage__rosidl_typesupport_introspection_c__PowerOfTwo_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  hw4_interfaces__action__PowerOfTwo_FeedbackMessage__rosidl_typesupport_introspection_c__PowerOfTwo_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw4_interfaces__action__PowerOfTwo_FeedbackMessage__rosidl_typesupport_introspection_c__PowerOfTwo_FeedbackMessage_message_type_support_handle = {
  0,
  &hw4_interfaces__action__PowerOfTwo_FeedbackMessage__rosidl_typesupport_introspection_c__PowerOfTwo_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_FeedbackMessage__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_FeedbackMessage__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw4_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_FeedbackMessage)() {
  hw4_interfaces__action__PowerOfTwo_FeedbackMessage__rosidl_typesupport_introspection_c__PowerOfTwo_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  hw4_interfaces__action__PowerOfTwo_FeedbackMessage__rosidl_typesupport_introspection_c__PowerOfTwo_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_Feedback)();
  if (!hw4_interfaces__action__PowerOfTwo_FeedbackMessage__rosidl_typesupport_introspection_c__PowerOfTwo_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    hw4_interfaces__action__PowerOfTwo_FeedbackMessage__rosidl_typesupport_introspection_c__PowerOfTwo_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw4_interfaces__action__PowerOfTwo_FeedbackMessage__rosidl_typesupport_introspection_c__PowerOfTwo_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
