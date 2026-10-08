// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from reaction_interfaces:srv/ChangePenColor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "reaction_interfaces/srv/detail/change_pen_color__rosidl_typesupport_introspection_c.h"
#include "reaction_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "reaction_interfaces/srv/detail/change_pen_color__functions.h"
#include "reaction_interfaces/srv/detail/change_pen_color__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void reaction_interfaces__srv__ChangePenColor_Request__rosidl_typesupport_introspection_c__ChangePenColor_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  reaction_interfaces__srv__ChangePenColor_Request__init(message_memory);
}

void reaction_interfaces__srv__ChangePenColor_Request__rosidl_typesupport_introspection_c__ChangePenColor_Request_fini_function(void * message_memory)
{
  reaction_interfaces__srv__ChangePenColor_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember reaction_interfaces__srv__ChangePenColor_Request__rosidl_typesupport_introspection_c__ChangePenColor_Request_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reaction_interfaces__srv__ChangePenColor_Request, name),  // bytes offset in struct
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
    offsetof(reaction_interfaces__srv__ChangePenColor_Request, r),  // bytes offset in struct
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
    offsetof(reaction_interfaces__srv__ChangePenColor_Request, g),  // bytes offset in struct
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
    offsetof(reaction_interfaces__srv__ChangePenColor_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reaction_interfaces__srv__ChangePenColor_Request, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers reaction_interfaces__srv__ChangePenColor_Request__rosidl_typesupport_introspection_c__ChangePenColor_Request_message_members = {
  "reaction_interfaces__srv",  // message namespace
  "ChangePenColor_Request",  // message name
  5,  // number of fields
  sizeof(reaction_interfaces__srv__ChangePenColor_Request),
  false,  // has_any_key_member_
  reaction_interfaces__srv__ChangePenColor_Request__rosidl_typesupport_introspection_c__ChangePenColor_Request_message_member_array,  // message members
  reaction_interfaces__srv__ChangePenColor_Request__rosidl_typesupport_introspection_c__ChangePenColor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  reaction_interfaces__srv__ChangePenColor_Request__rosidl_typesupport_introspection_c__ChangePenColor_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t reaction_interfaces__srv__ChangePenColor_Request__rosidl_typesupport_introspection_c__ChangePenColor_Request_message_type_support_handle = {
  0,
  &reaction_interfaces__srv__ChangePenColor_Request__rosidl_typesupport_introspection_c__ChangePenColor_Request_message_members,
  get_message_typesupport_handle_function,
  &reaction_interfaces__srv__ChangePenColor_Request__get_type_hash,
  &reaction_interfaces__srv__ChangePenColor_Request__get_type_description,
  &reaction_interfaces__srv__ChangePenColor_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reaction_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, srv, ChangePenColor_Request)() {
  if (!reaction_interfaces__srv__ChangePenColor_Request__rosidl_typesupport_introspection_c__ChangePenColor_Request_message_type_support_handle.typesupport_identifier) {
    reaction_interfaces__srv__ChangePenColor_Request__rosidl_typesupport_introspection_c__ChangePenColor_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &reaction_interfaces__srv__ChangePenColor_Request__rosidl_typesupport_introspection_c__ChangePenColor_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "reaction_interfaces/srv/detail/change_pen_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reaction_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reaction_interfaces/srv/detail/change_pen_color__functions.h"
// already included above
// #include "reaction_interfaces/srv/detail/change_pen_color__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void reaction_interfaces__srv__ChangePenColor_Response__rosidl_typesupport_introspection_c__ChangePenColor_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  reaction_interfaces__srv__ChangePenColor_Response__init(message_memory);
}

void reaction_interfaces__srv__ChangePenColor_Response__rosidl_typesupport_introspection_c__ChangePenColor_Response_fini_function(void * message_memory)
{
  reaction_interfaces__srv__ChangePenColor_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember reaction_interfaces__srv__ChangePenColor_Response__rosidl_typesupport_introspection_c__ChangePenColor_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reaction_interfaces__srv__ChangePenColor_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers reaction_interfaces__srv__ChangePenColor_Response__rosidl_typesupport_introspection_c__ChangePenColor_Response_message_members = {
  "reaction_interfaces__srv",  // message namespace
  "ChangePenColor_Response",  // message name
  1,  // number of fields
  sizeof(reaction_interfaces__srv__ChangePenColor_Response),
  false,  // has_any_key_member_
  reaction_interfaces__srv__ChangePenColor_Response__rosidl_typesupport_introspection_c__ChangePenColor_Response_message_member_array,  // message members
  reaction_interfaces__srv__ChangePenColor_Response__rosidl_typesupport_introspection_c__ChangePenColor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  reaction_interfaces__srv__ChangePenColor_Response__rosidl_typesupport_introspection_c__ChangePenColor_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t reaction_interfaces__srv__ChangePenColor_Response__rosidl_typesupport_introspection_c__ChangePenColor_Response_message_type_support_handle = {
  0,
  &reaction_interfaces__srv__ChangePenColor_Response__rosidl_typesupport_introspection_c__ChangePenColor_Response_message_members,
  get_message_typesupport_handle_function,
  &reaction_interfaces__srv__ChangePenColor_Response__get_type_hash,
  &reaction_interfaces__srv__ChangePenColor_Response__get_type_description,
  &reaction_interfaces__srv__ChangePenColor_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reaction_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, srv, ChangePenColor_Response)() {
  if (!reaction_interfaces__srv__ChangePenColor_Response__rosidl_typesupport_introspection_c__ChangePenColor_Response_message_type_support_handle.typesupport_identifier) {
    reaction_interfaces__srv__ChangePenColor_Response__rosidl_typesupport_introspection_c__ChangePenColor_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &reaction_interfaces__srv__ChangePenColor_Response__rosidl_typesupport_introspection_c__ChangePenColor_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "reaction_interfaces/srv/detail/change_pen_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reaction_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reaction_interfaces/srv/detail/change_pen_color__functions.h"
// already included above
// #include "reaction_interfaces/srv/detail/change_pen_color__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "reaction_interfaces/srv/change_pen_color.h"
// Member `request`
// Member `response`
// already included above
// #include "reaction_interfaces/srv/detail/change_pen_color__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  reaction_interfaces__srv__ChangePenColor_Event__init(message_memory);
}

void reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_fini_function(void * message_memory)
{
  reaction_interfaces__srv__ChangePenColor_Event__fini(message_memory);
}

size_t reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__size_function__ChangePenColor_Event__request(
  const void * untyped_member)
{
  const reaction_interfaces__srv__ChangePenColor_Request__Sequence * member =
    (const reaction_interfaces__srv__ChangePenColor_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__get_const_function__ChangePenColor_Event__request(
  const void * untyped_member, size_t index)
{
  const reaction_interfaces__srv__ChangePenColor_Request__Sequence * member =
    (const reaction_interfaces__srv__ChangePenColor_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__get_function__ChangePenColor_Event__request(
  void * untyped_member, size_t index)
{
  reaction_interfaces__srv__ChangePenColor_Request__Sequence * member =
    (reaction_interfaces__srv__ChangePenColor_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__fetch_function__ChangePenColor_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const reaction_interfaces__srv__ChangePenColor_Request * item =
    ((const reaction_interfaces__srv__ChangePenColor_Request *)
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__get_const_function__ChangePenColor_Event__request(untyped_member, index));
  reaction_interfaces__srv__ChangePenColor_Request * value =
    (reaction_interfaces__srv__ChangePenColor_Request *)(untyped_value);
  *value = *item;
}

void reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__assign_function__ChangePenColor_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  reaction_interfaces__srv__ChangePenColor_Request * item =
    ((reaction_interfaces__srv__ChangePenColor_Request *)
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__get_function__ChangePenColor_Event__request(untyped_member, index));
  const reaction_interfaces__srv__ChangePenColor_Request * value =
    (const reaction_interfaces__srv__ChangePenColor_Request *)(untyped_value);
  *item = *value;
}

bool reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__resize_function__ChangePenColor_Event__request(
  void * untyped_member, size_t size)
{
  reaction_interfaces__srv__ChangePenColor_Request__Sequence * member =
    (reaction_interfaces__srv__ChangePenColor_Request__Sequence *)(untyped_member);
  reaction_interfaces__srv__ChangePenColor_Request__Sequence__fini(member);
  return reaction_interfaces__srv__ChangePenColor_Request__Sequence__init(member, size);
}

size_t reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__size_function__ChangePenColor_Event__response(
  const void * untyped_member)
{
  const reaction_interfaces__srv__ChangePenColor_Response__Sequence * member =
    (const reaction_interfaces__srv__ChangePenColor_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__get_const_function__ChangePenColor_Event__response(
  const void * untyped_member, size_t index)
{
  const reaction_interfaces__srv__ChangePenColor_Response__Sequence * member =
    (const reaction_interfaces__srv__ChangePenColor_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__get_function__ChangePenColor_Event__response(
  void * untyped_member, size_t index)
{
  reaction_interfaces__srv__ChangePenColor_Response__Sequence * member =
    (reaction_interfaces__srv__ChangePenColor_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__fetch_function__ChangePenColor_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const reaction_interfaces__srv__ChangePenColor_Response * item =
    ((const reaction_interfaces__srv__ChangePenColor_Response *)
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__get_const_function__ChangePenColor_Event__response(untyped_member, index));
  reaction_interfaces__srv__ChangePenColor_Response * value =
    (reaction_interfaces__srv__ChangePenColor_Response *)(untyped_value);
  *value = *item;
}

void reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__assign_function__ChangePenColor_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  reaction_interfaces__srv__ChangePenColor_Response * item =
    ((reaction_interfaces__srv__ChangePenColor_Response *)
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__get_function__ChangePenColor_Event__response(untyped_member, index));
  const reaction_interfaces__srv__ChangePenColor_Response * value =
    (const reaction_interfaces__srv__ChangePenColor_Response *)(untyped_value);
  *item = *value;
}

bool reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__resize_function__ChangePenColor_Event__response(
  void * untyped_member, size_t size)
{
  reaction_interfaces__srv__ChangePenColor_Response__Sequence * member =
    (reaction_interfaces__srv__ChangePenColor_Response__Sequence *)(untyped_member);
  reaction_interfaces__srv__ChangePenColor_Response__Sequence__fini(member);
  return reaction_interfaces__srv__ChangePenColor_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reaction_interfaces__srv__ChangePenColor_Event, info),  // bytes offset in struct
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
    offsetof(reaction_interfaces__srv__ChangePenColor_Event, request),  // bytes offset in struct
    NULL,  // default value
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__size_function__ChangePenColor_Event__request,  // size() function pointer
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__get_const_function__ChangePenColor_Event__request,  // get_const(index) function pointer
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__get_function__ChangePenColor_Event__request,  // get(index) function pointer
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__fetch_function__ChangePenColor_Event__request,  // fetch(index, &value) function pointer
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__assign_function__ChangePenColor_Event__request,  // assign(index, value) function pointer
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__resize_function__ChangePenColor_Event__request  // resize(index) function pointer
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
    offsetof(reaction_interfaces__srv__ChangePenColor_Event, response),  // bytes offset in struct
    NULL,  // default value
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__size_function__ChangePenColor_Event__response,  // size() function pointer
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__get_const_function__ChangePenColor_Event__response,  // get_const(index) function pointer
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__get_function__ChangePenColor_Event__response,  // get(index) function pointer
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__fetch_function__ChangePenColor_Event__response,  // fetch(index, &value) function pointer
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__assign_function__ChangePenColor_Event__response,  // assign(index, value) function pointer
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__resize_function__ChangePenColor_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_message_members = {
  "reaction_interfaces__srv",  // message namespace
  "ChangePenColor_Event",  // message name
  3,  // number of fields
  sizeof(reaction_interfaces__srv__ChangePenColor_Event),
  false,  // has_any_key_member_
  reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_message_member_array,  // message members
  reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_message_type_support_handle = {
  0,
  &reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_message_members,
  get_message_typesupport_handle_function,
  &reaction_interfaces__srv__ChangePenColor_Event__get_type_hash,
  &reaction_interfaces__srv__ChangePenColor_Event__get_type_description,
  &reaction_interfaces__srv__ChangePenColor_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reaction_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, srv, ChangePenColor_Event)() {
  reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, srv, ChangePenColor_Request)();
  reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, srv, ChangePenColor_Response)();
  if (!reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_message_type_support_handle.typesupport_identifier) {
    reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "reaction_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "reaction_interfaces/srv/detail/change_pen_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers reaction_interfaces__srv__detail__change_pen_color__rosidl_typesupport_introspection_c__ChangePenColor_service_members = {
  "reaction_interfaces__srv",  // service namespace
  "ChangePenColor",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // reaction_interfaces__srv__detail__change_pen_color__rosidl_typesupport_introspection_c__ChangePenColor_Request_message_type_support_handle,
  NULL,  // response message
  // reaction_interfaces__srv__detail__change_pen_color__rosidl_typesupport_introspection_c__ChangePenColor_Response_message_type_support_handle
  NULL  // event_message
  // reaction_interfaces__srv__detail__change_pen_color__rosidl_typesupport_introspection_c__ChangePenColor_Response_message_type_support_handle
};


static rosidl_service_type_support_t reaction_interfaces__srv__detail__change_pen_color__rosidl_typesupport_introspection_c__ChangePenColor_service_type_support_handle = {
  0,
  &reaction_interfaces__srv__detail__change_pen_color__rosidl_typesupport_introspection_c__ChangePenColor_service_members,
  get_service_typesupport_handle_function,
  &reaction_interfaces__srv__ChangePenColor_Request__rosidl_typesupport_introspection_c__ChangePenColor_Request_message_type_support_handle,
  &reaction_interfaces__srv__ChangePenColor_Response__rosidl_typesupport_introspection_c__ChangePenColor_Response_message_type_support_handle,
  &reaction_interfaces__srv__ChangePenColor_Event__rosidl_typesupport_introspection_c__ChangePenColor_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    reaction_interfaces,
    srv,
    ChangePenColor
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    reaction_interfaces,
    srv,
    ChangePenColor
  ),
  &reaction_interfaces__srv__ChangePenColor__get_type_hash,
  &reaction_interfaces__srv__ChangePenColor__get_type_description,
  &reaction_interfaces__srv__ChangePenColor__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, srv, ChangePenColor_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, srv, ChangePenColor_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, srv, ChangePenColor_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reaction_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, srv, ChangePenColor)(void) {
  if (!reaction_interfaces__srv__detail__change_pen_color__rosidl_typesupport_introspection_c__ChangePenColor_service_type_support_handle.typesupport_identifier) {
    reaction_interfaces__srv__detail__change_pen_color__rosidl_typesupport_introspection_c__ChangePenColor_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)reaction_interfaces__srv__detail__change_pen_color__rosidl_typesupport_introspection_c__ChangePenColor_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, srv, ChangePenColor_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, srv, ChangePenColor_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, srv, ChangePenColor_Event)()->data;
  }

  return &reaction_interfaces__srv__detail__change_pen_color__rosidl_typesupport_introspection_c__ChangePenColor_service_type_support_handle;
}
