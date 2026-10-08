// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from hw3_interfaces:srv/CheckAnagram.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hw3_interfaces/srv/detail/check_anagram__functions.h"
#include "hw3_interfaces/srv/detail/check_anagram__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CheckAnagram_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckAnagram_Request_type_support_ids_t;

static const _CheckAnagram_Request_type_support_ids_t _CheckAnagram_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw3_interfaces, srv, CheckAnagram_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw3_interfaces, srv, CheckAnagram_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckAnagram_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw3_interfaces__srv__CheckAnagram_Request__get_type_hash,
  &hw3_interfaces__srv__CheckAnagram_Request__get_type_description,
  &hw3_interfaces__srv__CheckAnagram_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace hw3_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw3_interfaces::srv::CheckAnagram_Request>()
{
  return &::hw3_interfaces::srv::rosidl_typesupport_cpp::CheckAnagram_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw3_interfaces, srv, CheckAnagram_Request)() {
  return get_message_type_support_handle<hw3_interfaces::srv::CheckAnagram_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw3_interfaces/srv/detail/check_anagram__functions.h"
// already included above
// #include "hw3_interfaces/srv/detail/check_anagram__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CheckAnagram_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckAnagram_Response_type_support_ids_t;

static const _CheckAnagram_Response_type_support_ids_t _CheckAnagram_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw3_interfaces, srv, CheckAnagram_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw3_interfaces, srv, CheckAnagram_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckAnagram_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw3_interfaces__srv__CheckAnagram_Response__get_type_hash,
  &hw3_interfaces__srv__CheckAnagram_Response__get_type_description,
  &hw3_interfaces__srv__CheckAnagram_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace hw3_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw3_interfaces::srv::CheckAnagram_Response>()
{
  return &::hw3_interfaces::srv::rosidl_typesupport_cpp::CheckAnagram_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw3_interfaces, srv, CheckAnagram_Response)() {
  return get_message_type_support_handle<hw3_interfaces::srv::CheckAnagram_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw3_interfaces/srv/detail/check_anagram__functions.h"
// already included above
// #include "hw3_interfaces/srv/detail/check_anagram__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CheckAnagram_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckAnagram_Event_type_support_ids_t;

static const _CheckAnagram_Event_type_support_ids_t _CheckAnagram_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw3_interfaces, srv, CheckAnagram_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw3_interfaces, srv, CheckAnagram_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckAnagram_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw3_interfaces__srv__CheckAnagram_Event__get_type_hash,
  &hw3_interfaces__srv__CheckAnagram_Event__get_type_description,
  &hw3_interfaces__srv__CheckAnagram_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace hw3_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw3_interfaces::srv::CheckAnagram_Event>()
{
  return &::hw3_interfaces::srv::rosidl_typesupport_cpp::CheckAnagram_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw3_interfaces, srv, CheckAnagram_Event)() {
  return get_message_type_support_handle<hw3_interfaces::srv::CheckAnagram_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "hw3_interfaces/srv/detail/check_anagram__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CheckAnagram_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckAnagram_type_support_ids_t;

static const _CheckAnagram_type_support_ids_t _CheckAnagram_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw3_interfaces, srv, CheckAnagram)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw3_interfaces, srv, CheckAnagram)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckAnagram_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hw3_interfaces::srv::CheckAnagram_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hw3_interfaces::srv::CheckAnagram_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hw3_interfaces::srv::CheckAnagram_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<hw3_interfaces::srv::CheckAnagram>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<hw3_interfaces::srv::CheckAnagram>,
  &hw3_interfaces__srv__CheckAnagram__get_type_hash,
  &hw3_interfaces__srv__CheckAnagram__get_type_description,
  &hw3_interfaces__srv__CheckAnagram__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace hw3_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<hw3_interfaces::srv::CheckAnagram>()
{
  return &::hw3_interfaces::srv::rosidl_typesupport_cpp::CheckAnagram_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, hw3_interfaces, srv, CheckAnagram)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<hw3_interfaces::srv::CheckAnagram>();
}

#ifdef __cplusplus
}
#endif
