// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from reaction_interfaces:action/RandomWalk.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "reaction_interfaces/action/detail/random_walk__functions.h"
#include "reaction_interfaces/action/detail/random_walk__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RandomWalk_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_Goal_type_support_ids_t;

static const _RandomWalk_Goal_type_support_ids_t _RandomWalk_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RandomWalk_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RandomWalk_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RandomWalk_Goal_type_support_symbol_names_t _RandomWalk_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, reaction_interfaces, action, RandomWalk_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, reaction_interfaces, action, RandomWalk_Goal)),
  }
};

typedef struct _RandomWalk_Goal_type_support_data_t
{
  void * data[2];
} _RandomWalk_Goal_type_support_data_t;

static _RandomWalk_Goal_type_support_data_t _RandomWalk_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RandomWalk_Goal_message_typesupport_map = {
  2,
  "reaction_interfaces",
  &_RandomWalk_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_RandomWalk_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_RandomWalk_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RandomWalk_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_Goal__get_type_hash,
  &reaction_interfaces__action__RandomWalk_Goal__get_type_description,
  &reaction_interfaces__action__RandomWalk_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace reaction_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<reaction_interfaces::action::RandomWalk_Goal>()
{
  return &::reaction_interfaces::action::rosidl_typesupport_cpp::RandomWalk_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, reaction_interfaces, action, RandomWalk_Goal)() {
  return get_message_type_support_handle<reaction_interfaces::action::RandomWalk_Goal>();
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
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.hpp"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RandomWalk_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_Result_type_support_ids_t;

static const _RandomWalk_Result_type_support_ids_t _RandomWalk_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RandomWalk_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RandomWalk_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RandomWalk_Result_type_support_symbol_names_t _RandomWalk_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, reaction_interfaces, action, RandomWalk_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, reaction_interfaces, action, RandomWalk_Result)),
  }
};

typedef struct _RandomWalk_Result_type_support_data_t
{
  void * data[2];
} _RandomWalk_Result_type_support_data_t;

static _RandomWalk_Result_type_support_data_t _RandomWalk_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RandomWalk_Result_message_typesupport_map = {
  2,
  "reaction_interfaces",
  &_RandomWalk_Result_message_typesupport_ids.typesupport_identifier[0],
  &_RandomWalk_Result_message_typesupport_symbol_names.symbol_name[0],
  &_RandomWalk_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RandomWalk_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_Result__get_type_hash,
  &reaction_interfaces__action__RandomWalk_Result__get_type_description,
  &reaction_interfaces__action__RandomWalk_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace reaction_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<reaction_interfaces::action::RandomWalk_Result>()
{
  return &::reaction_interfaces::action::rosidl_typesupport_cpp::RandomWalk_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, reaction_interfaces, action, RandomWalk_Result)() {
  return get_message_type_support_handle<reaction_interfaces::action::RandomWalk_Result>();
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
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.hpp"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RandomWalk_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_Feedback_type_support_ids_t;

static const _RandomWalk_Feedback_type_support_ids_t _RandomWalk_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RandomWalk_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RandomWalk_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RandomWalk_Feedback_type_support_symbol_names_t _RandomWalk_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, reaction_interfaces, action, RandomWalk_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, reaction_interfaces, action, RandomWalk_Feedback)),
  }
};

typedef struct _RandomWalk_Feedback_type_support_data_t
{
  void * data[2];
} _RandomWalk_Feedback_type_support_data_t;

static _RandomWalk_Feedback_type_support_data_t _RandomWalk_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RandomWalk_Feedback_message_typesupport_map = {
  2,
  "reaction_interfaces",
  &_RandomWalk_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_RandomWalk_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_RandomWalk_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RandomWalk_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_Feedback__get_type_hash,
  &reaction_interfaces__action__RandomWalk_Feedback__get_type_description,
  &reaction_interfaces__action__RandomWalk_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace reaction_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<reaction_interfaces::action::RandomWalk_Feedback>()
{
  return &::reaction_interfaces::action::rosidl_typesupport_cpp::RandomWalk_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, reaction_interfaces, action, RandomWalk_Feedback)() {
  return get_message_type_support_handle<reaction_interfaces::action::RandomWalk_Feedback>();
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
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.hpp"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RandomWalk_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_SendGoal_Request_type_support_ids_t;

static const _RandomWalk_SendGoal_Request_type_support_ids_t _RandomWalk_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RandomWalk_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RandomWalk_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RandomWalk_SendGoal_Request_type_support_symbol_names_t _RandomWalk_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, reaction_interfaces, action, RandomWalk_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, reaction_interfaces, action, RandomWalk_SendGoal_Request)),
  }
};

typedef struct _RandomWalk_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _RandomWalk_SendGoal_Request_type_support_data_t;

static _RandomWalk_SendGoal_Request_type_support_data_t _RandomWalk_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RandomWalk_SendGoal_Request_message_typesupport_map = {
  2,
  "reaction_interfaces",
  &_RandomWalk_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RandomWalk_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RandomWalk_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RandomWalk_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_SendGoal_Request__get_type_hash,
  &reaction_interfaces__action__RandomWalk_SendGoal_Request__get_type_description,
  &reaction_interfaces__action__RandomWalk_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace reaction_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<reaction_interfaces::action::RandomWalk_SendGoal_Request>()
{
  return &::reaction_interfaces::action::rosidl_typesupport_cpp::RandomWalk_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, reaction_interfaces, action, RandomWalk_SendGoal_Request)() {
  return get_message_type_support_handle<reaction_interfaces::action::RandomWalk_SendGoal_Request>();
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
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.hpp"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RandomWalk_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_SendGoal_Response_type_support_ids_t;

static const _RandomWalk_SendGoal_Response_type_support_ids_t _RandomWalk_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RandomWalk_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RandomWalk_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RandomWalk_SendGoal_Response_type_support_symbol_names_t _RandomWalk_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, reaction_interfaces, action, RandomWalk_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, reaction_interfaces, action, RandomWalk_SendGoal_Response)),
  }
};

typedef struct _RandomWalk_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _RandomWalk_SendGoal_Response_type_support_data_t;

static _RandomWalk_SendGoal_Response_type_support_data_t _RandomWalk_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RandomWalk_SendGoal_Response_message_typesupport_map = {
  2,
  "reaction_interfaces",
  &_RandomWalk_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RandomWalk_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RandomWalk_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RandomWalk_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_SendGoal_Response__get_type_hash,
  &reaction_interfaces__action__RandomWalk_SendGoal_Response__get_type_description,
  &reaction_interfaces__action__RandomWalk_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace reaction_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<reaction_interfaces::action::RandomWalk_SendGoal_Response>()
{
  return &::reaction_interfaces::action::rosidl_typesupport_cpp::RandomWalk_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, reaction_interfaces, action, RandomWalk_SendGoal_Response)() {
  return get_message_type_support_handle<reaction_interfaces::action::RandomWalk_SendGoal_Response>();
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
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.hpp"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RandomWalk_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_SendGoal_Event_type_support_ids_t;

static const _RandomWalk_SendGoal_Event_type_support_ids_t _RandomWalk_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RandomWalk_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RandomWalk_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RandomWalk_SendGoal_Event_type_support_symbol_names_t _RandomWalk_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, reaction_interfaces, action, RandomWalk_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, reaction_interfaces, action, RandomWalk_SendGoal_Event)),
  }
};

typedef struct _RandomWalk_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _RandomWalk_SendGoal_Event_type_support_data_t;

static _RandomWalk_SendGoal_Event_type_support_data_t _RandomWalk_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RandomWalk_SendGoal_Event_message_typesupport_map = {
  2,
  "reaction_interfaces",
  &_RandomWalk_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_RandomWalk_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_RandomWalk_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RandomWalk_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_SendGoal_Event__get_type_hash,
  &reaction_interfaces__action__RandomWalk_SendGoal_Event__get_type_description,
  &reaction_interfaces__action__RandomWalk_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace reaction_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<reaction_interfaces::action::RandomWalk_SendGoal_Event>()
{
  return &::reaction_interfaces::action::rosidl_typesupport_cpp::RandomWalk_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, reaction_interfaces, action, RandomWalk_SendGoal_Event)() {
  return get_message_type_support_handle<reaction_interfaces::action::RandomWalk_SendGoal_Event>();
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
// #include "reaction_interfaces/action/detail/random_walk__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RandomWalk_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_SendGoal_type_support_ids_t;

static const _RandomWalk_SendGoal_type_support_ids_t _RandomWalk_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RandomWalk_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RandomWalk_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RandomWalk_SendGoal_type_support_symbol_names_t _RandomWalk_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, reaction_interfaces, action, RandomWalk_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, reaction_interfaces, action, RandomWalk_SendGoal)),
  }
};

typedef struct _RandomWalk_SendGoal_type_support_data_t
{
  void * data[2];
} _RandomWalk_SendGoal_type_support_data_t;

static _RandomWalk_SendGoal_type_support_data_t _RandomWalk_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RandomWalk_SendGoal_service_typesupport_map = {
  2,
  "reaction_interfaces",
  &_RandomWalk_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_RandomWalk_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_RandomWalk_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RandomWalk_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<reaction_interfaces::action::RandomWalk_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<reaction_interfaces::action::RandomWalk_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<reaction_interfaces::action::RandomWalk_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<reaction_interfaces::action::RandomWalk_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<reaction_interfaces::action::RandomWalk_SendGoal>,
  &reaction_interfaces__action__RandomWalk_SendGoal__get_type_hash,
  &reaction_interfaces__action__RandomWalk_SendGoal__get_type_description,
  &reaction_interfaces__action__RandomWalk_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace reaction_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<reaction_interfaces::action::RandomWalk_SendGoal>()
{
  return &::reaction_interfaces::action::rosidl_typesupport_cpp::RandomWalk_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, reaction_interfaces, action, RandomWalk_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<reaction_interfaces::action::RandomWalk_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.hpp"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RandomWalk_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_GetResult_Request_type_support_ids_t;

static const _RandomWalk_GetResult_Request_type_support_ids_t _RandomWalk_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RandomWalk_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RandomWalk_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RandomWalk_GetResult_Request_type_support_symbol_names_t _RandomWalk_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, reaction_interfaces, action, RandomWalk_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, reaction_interfaces, action, RandomWalk_GetResult_Request)),
  }
};

typedef struct _RandomWalk_GetResult_Request_type_support_data_t
{
  void * data[2];
} _RandomWalk_GetResult_Request_type_support_data_t;

static _RandomWalk_GetResult_Request_type_support_data_t _RandomWalk_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RandomWalk_GetResult_Request_message_typesupport_map = {
  2,
  "reaction_interfaces",
  &_RandomWalk_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RandomWalk_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RandomWalk_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RandomWalk_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_GetResult_Request__get_type_hash,
  &reaction_interfaces__action__RandomWalk_GetResult_Request__get_type_description,
  &reaction_interfaces__action__RandomWalk_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace reaction_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<reaction_interfaces::action::RandomWalk_GetResult_Request>()
{
  return &::reaction_interfaces::action::rosidl_typesupport_cpp::RandomWalk_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, reaction_interfaces, action, RandomWalk_GetResult_Request)() {
  return get_message_type_support_handle<reaction_interfaces::action::RandomWalk_GetResult_Request>();
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
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.hpp"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RandomWalk_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_GetResult_Response_type_support_ids_t;

static const _RandomWalk_GetResult_Response_type_support_ids_t _RandomWalk_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RandomWalk_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RandomWalk_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RandomWalk_GetResult_Response_type_support_symbol_names_t _RandomWalk_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, reaction_interfaces, action, RandomWalk_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, reaction_interfaces, action, RandomWalk_GetResult_Response)),
  }
};

typedef struct _RandomWalk_GetResult_Response_type_support_data_t
{
  void * data[2];
} _RandomWalk_GetResult_Response_type_support_data_t;

static _RandomWalk_GetResult_Response_type_support_data_t _RandomWalk_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RandomWalk_GetResult_Response_message_typesupport_map = {
  2,
  "reaction_interfaces",
  &_RandomWalk_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RandomWalk_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RandomWalk_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RandomWalk_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_GetResult_Response__get_type_hash,
  &reaction_interfaces__action__RandomWalk_GetResult_Response__get_type_description,
  &reaction_interfaces__action__RandomWalk_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace reaction_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<reaction_interfaces::action::RandomWalk_GetResult_Response>()
{
  return &::reaction_interfaces::action::rosidl_typesupport_cpp::RandomWalk_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, reaction_interfaces, action, RandomWalk_GetResult_Response)() {
  return get_message_type_support_handle<reaction_interfaces::action::RandomWalk_GetResult_Response>();
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
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.hpp"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RandomWalk_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_GetResult_Event_type_support_ids_t;

static const _RandomWalk_GetResult_Event_type_support_ids_t _RandomWalk_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RandomWalk_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RandomWalk_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RandomWalk_GetResult_Event_type_support_symbol_names_t _RandomWalk_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, reaction_interfaces, action, RandomWalk_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, reaction_interfaces, action, RandomWalk_GetResult_Event)),
  }
};

typedef struct _RandomWalk_GetResult_Event_type_support_data_t
{
  void * data[2];
} _RandomWalk_GetResult_Event_type_support_data_t;

static _RandomWalk_GetResult_Event_type_support_data_t _RandomWalk_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RandomWalk_GetResult_Event_message_typesupport_map = {
  2,
  "reaction_interfaces",
  &_RandomWalk_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_RandomWalk_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_RandomWalk_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RandomWalk_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_GetResult_Event__get_type_hash,
  &reaction_interfaces__action__RandomWalk_GetResult_Event__get_type_description,
  &reaction_interfaces__action__RandomWalk_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace reaction_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<reaction_interfaces::action::RandomWalk_GetResult_Event>()
{
  return &::reaction_interfaces::action::rosidl_typesupport_cpp::RandomWalk_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, reaction_interfaces, action, RandomWalk_GetResult_Event)() {
  return get_message_type_support_handle<reaction_interfaces::action::RandomWalk_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RandomWalk_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_GetResult_type_support_ids_t;

static const _RandomWalk_GetResult_type_support_ids_t _RandomWalk_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RandomWalk_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RandomWalk_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RandomWalk_GetResult_type_support_symbol_names_t _RandomWalk_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, reaction_interfaces, action, RandomWalk_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, reaction_interfaces, action, RandomWalk_GetResult)),
  }
};

typedef struct _RandomWalk_GetResult_type_support_data_t
{
  void * data[2];
} _RandomWalk_GetResult_type_support_data_t;

static _RandomWalk_GetResult_type_support_data_t _RandomWalk_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RandomWalk_GetResult_service_typesupport_map = {
  2,
  "reaction_interfaces",
  &_RandomWalk_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_RandomWalk_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_RandomWalk_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RandomWalk_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<reaction_interfaces::action::RandomWalk_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<reaction_interfaces::action::RandomWalk_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<reaction_interfaces::action::RandomWalk_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<reaction_interfaces::action::RandomWalk_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<reaction_interfaces::action::RandomWalk_GetResult>,
  &reaction_interfaces__action__RandomWalk_GetResult__get_type_hash,
  &reaction_interfaces__action__RandomWalk_GetResult__get_type_description,
  &reaction_interfaces__action__RandomWalk_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace reaction_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<reaction_interfaces::action::RandomWalk_GetResult>()
{
  return &::reaction_interfaces::action::rosidl_typesupport_cpp::RandomWalk_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, reaction_interfaces, action, RandomWalk_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<reaction_interfaces::action::RandomWalk_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.hpp"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RandomWalk_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_FeedbackMessage_type_support_ids_t;

static const _RandomWalk_FeedbackMessage_type_support_ids_t _RandomWalk_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RandomWalk_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RandomWalk_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RandomWalk_FeedbackMessage_type_support_symbol_names_t _RandomWalk_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, reaction_interfaces, action, RandomWalk_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, reaction_interfaces, action, RandomWalk_FeedbackMessage)),
  }
};

typedef struct _RandomWalk_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _RandomWalk_FeedbackMessage_type_support_data_t;

static _RandomWalk_FeedbackMessage_type_support_data_t _RandomWalk_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RandomWalk_FeedbackMessage_message_typesupport_map = {
  2,
  "reaction_interfaces",
  &_RandomWalk_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_RandomWalk_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_RandomWalk_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RandomWalk_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_FeedbackMessage__get_type_hash,
  &reaction_interfaces__action__RandomWalk_FeedbackMessage__get_type_description,
  &reaction_interfaces__action__RandomWalk_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace reaction_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<reaction_interfaces::action::RandomWalk_FeedbackMessage>()
{
  return &::reaction_interfaces::action::rosidl_typesupport_cpp::RandomWalk_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, reaction_interfaces, action, RandomWalk_FeedbackMessage)() {
  return get_message_type_support_handle<reaction_interfaces::action::RandomWalk_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t RandomWalk_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &reaction_interfaces__action__RandomWalk__get_type_hash,
  &reaction_interfaces__action__RandomWalk__get_type_description,
  &reaction_interfaces__action__RandomWalk__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace reaction_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<reaction_interfaces::action::RandomWalk>()
{
  using ::reaction_interfaces::action::rosidl_typesupport_cpp::RandomWalk_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  RandomWalk_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::reaction_interfaces::action::RandomWalk::Impl::SendGoalService>();
  RandomWalk_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::reaction_interfaces::action::RandomWalk::Impl::GetResultService>();
  RandomWalk_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::reaction_interfaces::action::RandomWalk::Impl::CancelGoalService>();
  RandomWalk_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::reaction_interfaces::action::RandomWalk::Impl::FeedbackMessage>();
  RandomWalk_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::reaction_interfaces::action::RandomWalk::Impl::GoalStatusMessage>();
  return &RandomWalk_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, reaction_interfaces, action, RandomWalk)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<reaction_interfaces::action::RandomWalk>();
}

#ifdef __cplusplus
}
#endif
