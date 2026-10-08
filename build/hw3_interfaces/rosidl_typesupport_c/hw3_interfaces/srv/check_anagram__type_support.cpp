// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from hw3_interfaces:srv/CheckAnagram.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hw3_interfaces/srv/detail/check_anagram__struct.h"
#include "hw3_interfaces/srv/detail/check_anagram__type_support.h"
#include "hw3_interfaces/srv/detail/check_anagram__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CheckAnagram_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckAnagram_Request_type_support_ids_t;

static const _CheckAnagram_Request_type_support_ids_t _CheckAnagram_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CheckAnagram_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckAnagram_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckAnagram_Request_type_support_symbol_names_t _CheckAnagram_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw3_interfaces, srv, CheckAnagram_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, CheckAnagram_Request)),
  }
};

typedef struct _CheckAnagram_Request_type_support_data_t
{
  void * data[2];
} _CheckAnagram_Request_type_support_data_t;

static _CheckAnagram_Request_type_support_data_t _CheckAnagram_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckAnagram_Request_message_typesupport_map = {
  2,
  "hw3_interfaces",
  &_CheckAnagram_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CheckAnagram_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CheckAnagram_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CheckAnagram_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckAnagram_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw3_interfaces__srv__CheckAnagram_Request__get_type_hash,
  &hw3_interfaces__srv__CheckAnagram_Request__get_type_description,
  &hw3_interfaces__srv__CheckAnagram_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hw3_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw3_interfaces, srv, CheckAnagram_Request)() {
  return &::hw3_interfaces::srv::rosidl_typesupport_c::CheckAnagram_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw3_interfaces/srv/detail/check_anagram__struct.h"
// already included above
// #include "hw3_interfaces/srv/detail/check_anagram__type_support.h"
// already included above
// #include "hw3_interfaces/srv/detail/check_anagram__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CheckAnagram_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckAnagram_Response_type_support_ids_t;

static const _CheckAnagram_Response_type_support_ids_t _CheckAnagram_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CheckAnagram_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckAnagram_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckAnagram_Response_type_support_symbol_names_t _CheckAnagram_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw3_interfaces, srv, CheckAnagram_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, CheckAnagram_Response)),
  }
};

typedef struct _CheckAnagram_Response_type_support_data_t
{
  void * data[2];
} _CheckAnagram_Response_type_support_data_t;

static _CheckAnagram_Response_type_support_data_t _CheckAnagram_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckAnagram_Response_message_typesupport_map = {
  2,
  "hw3_interfaces",
  &_CheckAnagram_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CheckAnagram_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CheckAnagram_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CheckAnagram_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckAnagram_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw3_interfaces__srv__CheckAnagram_Response__get_type_hash,
  &hw3_interfaces__srv__CheckAnagram_Response__get_type_description,
  &hw3_interfaces__srv__CheckAnagram_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hw3_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw3_interfaces, srv, CheckAnagram_Response)() {
  return &::hw3_interfaces::srv::rosidl_typesupport_c::CheckAnagram_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw3_interfaces/srv/detail/check_anagram__struct.h"
// already included above
// #include "hw3_interfaces/srv/detail/check_anagram__type_support.h"
// already included above
// #include "hw3_interfaces/srv/detail/check_anagram__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CheckAnagram_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckAnagram_Event_type_support_ids_t;

static const _CheckAnagram_Event_type_support_ids_t _CheckAnagram_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CheckAnagram_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckAnagram_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckAnagram_Event_type_support_symbol_names_t _CheckAnagram_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw3_interfaces, srv, CheckAnagram_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, CheckAnagram_Event)),
  }
};

typedef struct _CheckAnagram_Event_type_support_data_t
{
  void * data[2];
} _CheckAnagram_Event_type_support_data_t;

static _CheckAnagram_Event_type_support_data_t _CheckAnagram_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckAnagram_Event_message_typesupport_map = {
  2,
  "hw3_interfaces",
  &_CheckAnagram_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CheckAnagram_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CheckAnagram_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CheckAnagram_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckAnagram_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw3_interfaces__srv__CheckAnagram_Event__get_type_hash,
  &hw3_interfaces__srv__CheckAnagram_Event__get_type_description,
  &hw3_interfaces__srv__CheckAnagram_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hw3_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw3_interfaces, srv, CheckAnagram_Event)() {
  return &::hw3_interfaces::srv::rosidl_typesupport_c::CheckAnagram_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hw3_interfaces/srv/detail/check_anagram__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _CheckAnagram_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckAnagram_type_support_ids_t;

static const _CheckAnagram_type_support_ids_t _CheckAnagram_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CheckAnagram_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckAnagram_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckAnagram_type_support_symbol_names_t _CheckAnagram_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw3_interfaces, srv, CheckAnagram)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, CheckAnagram)),
  }
};

typedef struct _CheckAnagram_type_support_data_t
{
  void * data[2];
} _CheckAnagram_type_support_data_t;

static _CheckAnagram_type_support_data_t _CheckAnagram_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckAnagram_service_typesupport_map = {
  2,
  "hw3_interfaces",
  &_CheckAnagram_service_typesupport_ids.typesupport_identifier[0],
  &_CheckAnagram_service_typesupport_symbol_names.symbol_name[0],
  &_CheckAnagram_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CheckAnagram_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckAnagram_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &CheckAnagram_Request_message_type_support_handle,
  &CheckAnagram_Response_message_type_support_handle,
  &CheckAnagram_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hw3_interfaces,
    srv,
    CheckAnagram
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hw3_interfaces,
    srv,
    CheckAnagram
  ),
  &hw3_interfaces__srv__CheckAnagram__get_type_hash,
  &hw3_interfaces__srv__CheckAnagram__get_type_description,
  &hw3_interfaces__srv__CheckAnagram__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hw3_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, hw3_interfaces, srv, CheckAnagram)() {
  return &::hw3_interfaces::srv::rosidl_typesupport_c::CheckAnagram_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
