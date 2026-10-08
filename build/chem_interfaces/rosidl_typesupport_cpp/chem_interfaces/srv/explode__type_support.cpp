// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from chem_interfaces:srv/Explode.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "chem_interfaces/srv/detail/explode__functions.h"
#include "chem_interfaces/srv/detail/explode__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace chem_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Explode_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Explode_Request_type_support_ids_t;

static const _Explode_Request_type_support_ids_t _Explode_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Explode_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Explode_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Explode_Request_type_support_symbol_names_t _Explode_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chem_interfaces, srv, Explode_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chem_interfaces, srv, Explode_Request)),
  }
};

typedef struct _Explode_Request_type_support_data_t
{
  void * data[2];
} _Explode_Request_type_support_data_t;

static _Explode_Request_type_support_data_t _Explode_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Explode_Request_message_typesupport_map = {
  2,
  "chem_interfaces",
  &_Explode_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Explode_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Explode_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Explode_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Explode_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &chem_interfaces__srv__Explode_Request__get_type_hash,
  &chem_interfaces__srv__Explode_Request__get_type_description,
  &chem_interfaces__srv__Explode_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chem_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chem_interfaces::srv::Explode_Request>()
{
  return &::chem_interfaces::srv::rosidl_typesupport_cpp::Explode_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, chem_interfaces, srv, Explode_Request)() {
  return get_message_type_support_handle<chem_interfaces::srv::Explode_Request>();
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
// #include "chem_interfaces/srv/detail/explode__functions.h"
// already included above
// #include "chem_interfaces/srv/detail/explode__struct.hpp"
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

namespace chem_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Explode_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Explode_Response_type_support_ids_t;

static const _Explode_Response_type_support_ids_t _Explode_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Explode_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Explode_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Explode_Response_type_support_symbol_names_t _Explode_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chem_interfaces, srv, Explode_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chem_interfaces, srv, Explode_Response)),
  }
};

typedef struct _Explode_Response_type_support_data_t
{
  void * data[2];
} _Explode_Response_type_support_data_t;

static _Explode_Response_type_support_data_t _Explode_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Explode_Response_message_typesupport_map = {
  2,
  "chem_interfaces",
  &_Explode_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Explode_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Explode_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Explode_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Explode_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &chem_interfaces__srv__Explode_Response__get_type_hash,
  &chem_interfaces__srv__Explode_Response__get_type_description,
  &chem_interfaces__srv__Explode_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chem_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chem_interfaces::srv::Explode_Response>()
{
  return &::chem_interfaces::srv::rosidl_typesupport_cpp::Explode_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, chem_interfaces, srv, Explode_Response)() {
  return get_message_type_support_handle<chem_interfaces::srv::Explode_Response>();
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
// #include "chem_interfaces/srv/detail/explode__functions.h"
// already included above
// #include "chem_interfaces/srv/detail/explode__struct.hpp"
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

namespace chem_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Explode_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Explode_Event_type_support_ids_t;

static const _Explode_Event_type_support_ids_t _Explode_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Explode_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Explode_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Explode_Event_type_support_symbol_names_t _Explode_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chem_interfaces, srv, Explode_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chem_interfaces, srv, Explode_Event)),
  }
};

typedef struct _Explode_Event_type_support_data_t
{
  void * data[2];
} _Explode_Event_type_support_data_t;

static _Explode_Event_type_support_data_t _Explode_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Explode_Event_message_typesupport_map = {
  2,
  "chem_interfaces",
  &_Explode_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Explode_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Explode_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Explode_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Explode_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &chem_interfaces__srv__Explode_Event__get_type_hash,
  &chem_interfaces__srv__Explode_Event__get_type_description,
  &chem_interfaces__srv__Explode_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chem_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chem_interfaces::srv::Explode_Event>()
{
  return &::chem_interfaces::srv::rosidl_typesupport_cpp::Explode_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, chem_interfaces, srv, Explode_Event)() {
  return get_message_type_support_handle<chem_interfaces::srv::Explode_Event>();
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
// #include "chem_interfaces/srv/detail/explode__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace chem_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Explode_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Explode_type_support_ids_t;

static const _Explode_type_support_ids_t _Explode_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Explode_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Explode_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Explode_type_support_symbol_names_t _Explode_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chem_interfaces, srv, Explode)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chem_interfaces, srv, Explode)),
  }
};

typedef struct _Explode_type_support_data_t
{
  void * data[2];
} _Explode_type_support_data_t;

static _Explode_type_support_data_t _Explode_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Explode_service_typesupport_map = {
  2,
  "chem_interfaces",
  &_Explode_service_typesupport_ids.typesupport_identifier[0],
  &_Explode_service_typesupport_symbol_names.symbol_name[0],
  &_Explode_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Explode_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Explode_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<chem_interfaces::srv::Explode_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<chem_interfaces::srv::Explode_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<chem_interfaces::srv::Explode_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<chem_interfaces::srv::Explode>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<chem_interfaces::srv::Explode>,
  &chem_interfaces__srv__Explode__get_type_hash,
  &chem_interfaces__srv__Explode__get_type_description,
  &chem_interfaces__srv__Explode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chem_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<chem_interfaces::srv::Explode>()
{
  return &::chem_interfaces::srv::rosidl_typesupport_cpp::Explode_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, chem_interfaces, srv, Explode)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<chem_interfaces::srv::Explode>();
}

#ifdef __cplusplus
}
#endif
