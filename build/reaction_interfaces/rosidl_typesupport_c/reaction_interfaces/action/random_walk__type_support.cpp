// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from reaction_interfaces:action/RandomWalk.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "reaction_interfaces/action/detail/random_walk__struct.h"
#include "reaction_interfaces/action/detail/random_walk__type_support.h"
#include "reaction_interfaces/action/detail/random_walk__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RandomWalk_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_Goal_type_support_ids_t;

static const _RandomWalk_Goal_type_support_ids_t _RandomWalk_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reaction_interfaces, action, RandomWalk_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, action, RandomWalk_Goal)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_Goal__get_type_hash,
  &reaction_interfaces__action__RandomWalk_Goal__get_type_description,
  &reaction_interfaces__action__RandomWalk_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace reaction_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_Goal)() {
  return &::reaction_interfaces::action::rosidl_typesupport_c::RandomWalk_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__type_support.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RandomWalk_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_Result_type_support_ids_t;

static const _RandomWalk_Result_type_support_ids_t _RandomWalk_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reaction_interfaces, action, RandomWalk_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, action, RandomWalk_Result)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_Result__get_type_hash,
  &reaction_interfaces__action__RandomWalk_Result__get_type_description,
  &reaction_interfaces__action__RandomWalk_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace reaction_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_Result)() {
  return &::reaction_interfaces::action::rosidl_typesupport_c::RandomWalk_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__type_support.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RandomWalk_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_Feedback_type_support_ids_t;

static const _RandomWalk_Feedback_type_support_ids_t _RandomWalk_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reaction_interfaces, action, RandomWalk_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, action, RandomWalk_Feedback)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_Feedback__get_type_hash,
  &reaction_interfaces__action__RandomWalk_Feedback__get_type_description,
  &reaction_interfaces__action__RandomWalk_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace reaction_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_Feedback)() {
  return &::reaction_interfaces::action::rosidl_typesupport_c::RandomWalk_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__type_support.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RandomWalk_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_SendGoal_Request_type_support_ids_t;

static const _RandomWalk_SendGoal_Request_type_support_ids_t _RandomWalk_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reaction_interfaces, action, RandomWalk_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, action, RandomWalk_SendGoal_Request)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_SendGoal_Request__get_type_hash,
  &reaction_interfaces__action__RandomWalk_SendGoal_Request__get_type_description,
  &reaction_interfaces__action__RandomWalk_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace reaction_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_SendGoal_Request)() {
  return &::reaction_interfaces::action::rosidl_typesupport_c::RandomWalk_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__type_support.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RandomWalk_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_SendGoal_Response_type_support_ids_t;

static const _RandomWalk_SendGoal_Response_type_support_ids_t _RandomWalk_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reaction_interfaces, action, RandomWalk_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, action, RandomWalk_SendGoal_Response)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_SendGoal_Response__get_type_hash,
  &reaction_interfaces__action__RandomWalk_SendGoal_Response__get_type_description,
  &reaction_interfaces__action__RandomWalk_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace reaction_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_SendGoal_Response)() {
  return &::reaction_interfaces::action::rosidl_typesupport_c::RandomWalk_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__type_support.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RandomWalk_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_SendGoal_Event_type_support_ids_t;

static const _RandomWalk_SendGoal_Event_type_support_ids_t _RandomWalk_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reaction_interfaces, action, RandomWalk_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, action, RandomWalk_SendGoal_Event)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_SendGoal_Event__get_type_hash,
  &reaction_interfaces__action__RandomWalk_SendGoal_Event__get_type_description,
  &reaction_interfaces__action__RandomWalk_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace reaction_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_SendGoal_Event)() {
  return &::reaction_interfaces::action::rosidl_typesupport_c::RandomWalk_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _RandomWalk_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_SendGoal_type_support_ids_t;

static const _RandomWalk_SendGoal_type_support_ids_t _RandomWalk_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reaction_interfaces, action, RandomWalk_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, action, RandomWalk_SendGoal)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &RandomWalk_SendGoal_Request_message_type_support_handle,
  &RandomWalk_SendGoal_Response_message_type_support_handle,
  &RandomWalk_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    reaction_interfaces,
    action,
    RandomWalk_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    reaction_interfaces,
    action,
    RandomWalk_SendGoal
  ),
  &reaction_interfaces__action__RandomWalk_SendGoal__get_type_hash,
  &reaction_interfaces__action__RandomWalk_SendGoal__get_type_description,
  &reaction_interfaces__action__RandomWalk_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace reaction_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_SendGoal)() {
  return &::reaction_interfaces::action::rosidl_typesupport_c::RandomWalk_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__type_support.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RandomWalk_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_GetResult_Request_type_support_ids_t;

static const _RandomWalk_GetResult_Request_type_support_ids_t _RandomWalk_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reaction_interfaces, action, RandomWalk_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, action, RandomWalk_GetResult_Request)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_GetResult_Request__get_type_hash,
  &reaction_interfaces__action__RandomWalk_GetResult_Request__get_type_description,
  &reaction_interfaces__action__RandomWalk_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace reaction_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_GetResult_Request)() {
  return &::reaction_interfaces::action::rosidl_typesupport_c::RandomWalk_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__type_support.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RandomWalk_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_GetResult_Response_type_support_ids_t;

static const _RandomWalk_GetResult_Response_type_support_ids_t _RandomWalk_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reaction_interfaces, action, RandomWalk_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, action, RandomWalk_GetResult_Response)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_GetResult_Response__get_type_hash,
  &reaction_interfaces__action__RandomWalk_GetResult_Response__get_type_description,
  &reaction_interfaces__action__RandomWalk_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace reaction_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_GetResult_Response)() {
  return &::reaction_interfaces::action::rosidl_typesupport_c::RandomWalk_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__type_support.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RandomWalk_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_GetResult_Event_type_support_ids_t;

static const _RandomWalk_GetResult_Event_type_support_ids_t _RandomWalk_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reaction_interfaces, action, RandomWalk_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, action, RandomWalk_GetResult_Event)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_GetResult_Event__get_type_hash,
  &reaction_interfaces__action__RandomWalk_GetResult_Event__get_type_description,
  &reaction_interfaces__action__RandomWalk_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace reaction_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_GetResult_Event)() {
  return &::reaction_interfaces::action::rosidl_typesupport_c::RandomWalk_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _RandomWalk_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_GetResult_type_support_ids_t;

static const _RandomWalk_GetResult_type_support_ids_t _RandomWalk_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reaction_interfaces, action, RandomWalk_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, action, RandomWalk_GetResult)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &RandomWalk_GetResult_Request_message_type_support_handle,
  &RandomWalk_GetResult_Response_message_type_support_handle,
  &RandomWalk_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    reaction_interfaces,
    action,
    RandomWalk_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    reaction_interfaces,
    action,
    RandomWalk_GetResult
  ),
  &reaction_interfaces__action__RandomWalk_GetResult__get_type_hash,
  &reaction_interfaces__action__RandomWalk_GetResult__get_type_description,
  &reaction_interfaces__action__RandomWalk_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace reaction_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_GetResult)() {
  return &::reaction_interfaces::action::rosidl_typesupport_c::RandomWalk_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__struct.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__type_support.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__functions.h"
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

namespace reaction_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RandomWalk_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RandomWalk_FeedbackMessage_type_support_ids_t;

static const _RandomWalk_FeedbackMessage_type_support_ids_t _RandomWalk_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reaction_interfaces, action, RandomWalk_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reaction_interfaces, action, RandomWalk_FeedbackMessage)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RandomWalk_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &reaction_interfaces__action__RandomWalk_FeedbackMessage__get_type_hash,
  &reaction_interfaces__action__RandomWalk_FeedbackMessage__get_type_description,
  &reaction_interfaces__action__RandomWalk_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace reaction_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_FeedbackMessage)() {
  return &::reaction_interfaces::action::rosidl_typesupport_c::RandomWalk_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "reaction_interfaces/action/random_walk.h"
// already included above
// #include "reaction_interfaces/action/detail/random_walk__type_support.h"

static rosidl_action_type_support_t _reaction_interfaces__action__RandomWalk__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &reaction_interfaces__action__RandomWalk__get_type_hash,
  &reaction_interfaces__action__RandomWalk__get_type_description,
  &reaction_interfaces__action__RandomWalk__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, reaction_interfaces, action, RandomWalk)()
{
  // Thread-safe by always writing the same values to the static struct
  _reaction_interfaces__action__RandomWalk__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_SendGoal)();
  _reaction_interfaces__action__RandomWalk__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_GetResult)();
  _reaction_interfaces__action__RandomWalk__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _reaction_interfaces__action__RandomWalk__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, reaction_interfaces, action, RandomWalk_FeedbackMessage)();
  _reaction_interfaces__action__RandomWalk__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_reaction_interfaces__action__RandomWalk__typesupport_c;
}

#ifdef __cplusplus
}
#endif
