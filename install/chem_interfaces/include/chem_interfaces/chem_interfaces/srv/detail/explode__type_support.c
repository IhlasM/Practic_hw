// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from chem_interfaces:srv/Explode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "chem_interfaces/srv/detail/explode__rosidl_typesupport_introspection_c.h"
#include "chem_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "chem_interfaces/srv/detail/explode__functions.h"
#include "chem_interfaces/srv/detail/explode__struct.h"


// Include directives for member types
// Member `turtles`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__Explode_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chem_interfaces__srv__Explode_Request__init(message_memory);
}

void chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__Explode_Request_fini_function(void * message_memory)
{
  chem_interfaces__srv__Explode_Request__fini(message_memory);
}

size_t chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__size_function__Explode_Request__turtles(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__get_const_function__Explode_Request__turtles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__get_function__Explode_Request__turtles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__fetch_function__Explode_Request__turtles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__get_const_function__Explode_Request__turtles(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__assign_function__Explode_Request__turtles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__get_function__Explode_Request__turtles(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__resize_function__Explode_Request__turtles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__Explode_Request_message_member_array[1] = {
  {
    "turtles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chem_interfaces__srv__Explode_Request, turtles),  // bytes offset in struct
    NULL,  // default value
    chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__size_function__Explode_Request__turtles,  // size() function pointer
    chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__get_const_function__Explode_Request__turtles,  // get_const(index) function pointer
    chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__get_function__Explode_Request__turtles,  // get(index) function pointer
    chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__fetch_function__Explode_Request__turtles,  // fetch(index, &value) function pointer
    chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__assign_function__Explode_Request__turtles,  // assign(index, value) function pointer
    chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__resize_function__Explode_Request__turtles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__Explode_Request_message_members = {
  "chem_interfaces__srv",  // message namespace
  "Explode_Request",  // message name
  1,  // number of fields
  sizeof(chem_interfaces__srv__Explode_Request),
  false,  // has_any_key_member_
  chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__Explode_Request_message_member_array,  // message members
  chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__Explode_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__Explode_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__Explode_Request_message_type_support_handle = {
  0,
  &chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__Explode_Request_message_members,
  get_message_typesupport_handle_function,
  &chem_interfaces__srv__Explode_Request__get_type_hash,
  &chem_interfaces__srv__Explode_Request__get_type_description,
  &chem_interfaces__srv__Explode_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chem_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chem_interfaces, srv, Explode_Request)() {
  if (!chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__Explode_Request_message_type_support_handle.typesupport_identifier) {
    chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__Explode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__Explode_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "chem_interfaces/srv/detail/explode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "chem_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "chem_interfaces/srv/detail/explode__functions.h"
// already included above
// #include "chem_interfaces/srv/detail/explode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void chem_interfaces__srv__Explode_Response__rosidl_typesupport_introspection_c__Explode_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chem_interfaces__srv__Explode_Response__init(message_memory);
}

void chem_interfaces__srv__Explode_Response__rosidl_typesupport_introspection_c__Explode_Response_fini_function(void * message_memory)
{
  chem_interfaces__srv__Explode_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember chem_interfaces__srv__Explode_Response__rosidl_typesupport_introspection_c__Explode_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chem_interfaces__srv__Explode_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "teleported",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chem_interfaces__srv__Explode_Response, teleported),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers chem_interfaces__srv__Explode_Response__rosidl_typesupport_introspection_c__Explode_Response_message_members = {
  "chem_interfaces__srv",  // message namespace
  "Explode_Response",  // message name
  2,  // number of fields
  sizeof(chem_interfaces__srv__Explode_Response),
  false,  // has_any_key_member_
  chem_interfaces__srv__Explode_Response__rosidl_typesupport_introspection_c__Explode_Response_message_member_array,  // message members
  chem_interfaces__srv__Explode_Response__rosidl_typesupport_introspection_c__Explode_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  chem_interfaces__srv__Explode_Response__rosidl_typesupport_introspection_c__Explode_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t chem_interfaces__srv__Explode_Response__rosidl_typesupport_introspection_c__Explode_Response_message_type_support_handle = {
  0,
  &chem_interfaces__srv__Explode_Response__rosidl_typesupport_introspection_c__Explode_Response_message_members,
  get_message_typesupport_handle_function,
  &chem_interfaces__srv__Explode_Response__get_type_hash,
  &chem_interfaces__srv__Explode_Response__get_type_description,
  &chem_interfaces__srv__Explode_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chem_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chem_interfaces, srv, Explode_Response)() {
  if (!chem_interfaces__srv__Explode_Response__rosidl_typesupport_introspection_c__Explode_Response_message_type_support_handle.typesupport_identifier) {
    chem_interfaces__srv__Explode_Response__rosidl_typesupport_introspection_c__Explode_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &chem_interfaces__srv__Explode_Response__rosidl_typesupport_introspection_c__Explode_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "chem_interfaces/srv/detail/explode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "chem_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "chem_interfaces/srv/detail/explode__functions.h"
// already included above
// #include "chem_interfaces/srv/detail/explode__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "chem_interfaces/srv/explode.h"
// Member `request`
// Member `response`
// already included above
// #include "chem_interfaces/srv/detail/explode__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chem_interfaces__srv__Explode_Event__init(message_memory);
}

void chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_fini_function(void * message_memory)
{
  chem_interfaces__srv__Explode_Event__fini(message_memory);
}

size_t chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__size_function__Explode_Event__request(
  const void * untyped_member)
{
  const chem_interfaces__srv__Explode_Request__Sequence * member =
    (const chem_interfaces__srv__Explode_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__get_const_function__Explode_Event__request(
  const void * untyped_member, size_t index)
{
  const chem_interfaces__srv__Explode_Request__Sequence * member =
    (const chem_interfaces__srv__Explode_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__get_function__Explode_Event__request(
  void * untyped_member, size_t index)
{
  chem_interfaces__srv__Explode_Request__Sequence * member =
    (chem_interfaces__srv__Explode_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__fetch_function__Explode_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const chem_interfaces__srv__Explode_Request * item =
    ((const chem_interfaces__srv__Explode_Request *)
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__get_const_function__Explode_Event__request(untyped_member, index));
  chem_interfaces__srv__Explode_Request * value =
    (chem_interfaces__srv__Explode_Request *)(untyped_value);
  *value = *item;
}

void chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__assign_function__Explode_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  chem_interfaces__srv__Explode_Request * item =
    ((chem_interfaces__srv__Explode_Request *)
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__get_function__Explode_Event__request(untyped_member, index));
  const chem_interfaces__srv__Explode_Request * value =
    (const chem_interfaces__srv__Explode_Request *)(untyped_value);
  *item = *value;
}

bool chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__resize_function__Explode_Event__request(
  void * untyped_member, size_t size)
{
  chem_interfaces__srv__Explode_Request__Sequence * member =
    (chem_interfaces__srv__Explode_Request__Sequence *)(untyped_member);
  chem_interfaces__srv__Explode_Request__Sequence__fini(member);
  return chem_interfaces__srv__Explode_Request__Sequence__init(member, size);
}

size_t chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__size_function__Explode_Event__response(
  const void * untyped_member)
{
  const chem_interfaces__srv__Explode_Response__Sequence * member =
    (const chem_interfaces__srv__Explode_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__get_const_function__Explode_Event__response(
  const void * untyped_member, size_t index)
{
  const chem_interfaces__srv__Explode_Response__Sequence * member =
    (const chem_interfaces__srv__Explode_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__get_function__Explode_Event__response(
  void * untyped_member, size_t index)
{
  chem_interfaces__srv__Explode_Response__Sequence * member =
    (chem_interfaces__srv__Explode_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__fetch_function__Explode_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const chem_interfaces__srv__Explode_Response * item =
    ((const chem_interfaces__srv__Explode_Response *)
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__get_const_function__Explode_Event__response(untyped_member, index));
  chem_interfaces__srv__Explode_Response * value =
    (chem_interfaces__srv__Explode_Response *)(untyped_value);
  *value = *item;
}

void chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__assign_function__Explode_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  chem_interfaces__srv__Explode_Response * item =
    ((chem_interfaces__srv__Explode_Response *)
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__get_function__Explode_Event__response(untyped_member, index));
  const chem_interfaces__srv__Explode_Response * value =
    (const chem_interfaces__srv__Explode_Response *)(untyped_value);
  *item = *value;
}

bool chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__resize_function__Explode_Event__response(
  void * untyped_member, size_t size)
{
  chem_interfaces__srv__Explode_Response__Sequence * member =
    (chem_interfaces__srv__Explode_Response__Sequence *)(untyped_member);
  chem_interfaces__srv__Explode_Response__Sequence__fini(member);
  return chem_interfaces__srv__Explode_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chem_interfaces__srv__Explode_Event, info),  // bytes offset in struct
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
    offsetof(chem_interfaces__srv__Explode_Event, request),  // bytes offset in struct
    NULL,  // default value
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__size_function__Explode_Event__request,  // size() function pointer
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__get_const_function__Explode_Event__request,  // get_const(index) function pointer
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__get_function__Explode_Event__request,  // get(index) function pointer
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__fetch_function__Explode_Event__request,  // fetch(index, &value) function pointer
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__assign_function__Explode_Event__request,  // assign(index, value) function pointer
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__resize_function__Explode_Event__request  // resize(index) function pointer
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
    offsetof(chem_interfaces__srv__Explode_Event, response),  // bytes offset in struct
    NULL,  // default value
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__size_function__Explode_Event__response,  // size() function pointer
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__get_const_function__Explode_Event__response,  // get_const(index) function pointer
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__get_function__Explode_Event__response,  // get(index) function pointer
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__fetch_function__Explode_Event__response,  // fetch(index, &value) function pointer
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__assign_function__Explode_Event__response,  // assign(index, value) function pointer
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__resize_function__Explode_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_message_members = {
  "chem_interfaces__srv",  // message namespace
  "Explode_Event",  // message name
  3,  // number of fields
  sizeof(chem_interfaces__srv__Explode_Event),
  false,  // has_any_key_member_
  chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_message_member_array,  // message members
  chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_message_type_support_handle = {
  0,
  &chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_message_members,
  get_message_typesupport_handle_function,
  &chem_interfaces__srv__Explode_Event__get_type_hash,
  &chem_interfaces__srv__Explode_Event__get_type_description,
  &chem_interfaces__srv__Explode_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chem_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chem_interfaces, srv, Explode_Event)() {
  chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chem_interfaces, srv, Explode_Request)();
  chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chem_interfaces, srv, Explode_Response)();
  if (!chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_message_type_support_handle.typesupport_identifier) {
    chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "chem_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "chem_interfaces/srv/detail/explode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers chem_interfaces__srv__detail__explode__rosidl_typesupport_introspection_c__Explode_service_members = {
  "chem_interfaces__srv",  // service namespace
  "Explode",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // chem_interfaces__srv__detail__explode__rosidl_typesupport_introspection_c__Explode_Request_message_type_support_handle,
  NULL,  // response message
  // chem_interfaces__srv__detail__explode__rosidl_typesupport_introspection_c__Explode_Response_message_type_support_handle
  NULL  // event_message
  // chem_interfaces__srv__detail__explode__rosidl_typesupport_introspection_c__Explode_Response_message_type_support_handle
};


static rosidl_service_type_support_t chem_interfaces__srv__detail__explode__rosidl_typesupport_introspection_c__Explode_service_type_support_handle = {
  0,
  &chem_interfaces__srv__detail__explode__rosidl_typesupport_introspection_c__Explode_service_members,
  get_service_typesupport_handle_function,
  &chem_interfaces__srv__Explode_Request__rosidl_typesupport_introspection_c__Explode_Request_message_type_support_handle,
  &chem_interfaces__srv__Explode_Response__rosidl_typesupport_introspection_c__Explode_Response_message_type_support_handle,
  &chem_interfaces__srv__Explode_Event__rosidl_typesupport_introspection_c__Explode_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    chem_interfaces,
    srv,
    Explode
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    chem_interfaces,
    srv,
    Explode
  ),
  &chem_interfaces__srv__Explode__get_type_hash,
  &chem_interfaces__srv__Explode__get_type_description,
  &chem_interfaces__srv__Explode__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chem_interfaces, srv, Explode_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chem_interfaces, srv, Explode_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chem_interfaces, srv, Explode_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chem_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chem_interfaces, srv, Explode)(void) {
  if (!chem_interfaces__srv__detail__explode__rosidl_typesupport_introspection_c__Explode_service_type_support_handle.typesupport_identifier) {
    chem_interfaces__srv__detail__explode__rosidl_typesupport_introspection_c__Explode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)chem_interfaces__srv__detail__explode__rosidl_typesupport_introspection_c__Explode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chem_interfaces, srv, Explode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chem_interfaces, srv, Explode_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chem_interfaces, srv, Explode_Event)()->data;
  }

  return &chem_interfaces__srv__detail__explode__rosidl_typesupport_introspection_c__Explode_service_type_support_handle;
}
