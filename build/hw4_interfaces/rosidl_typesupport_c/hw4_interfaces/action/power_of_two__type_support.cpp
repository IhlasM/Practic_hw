// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from hw4_interfaces:action/PowerOfTwo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hw4_interfaces/action/detail/power_of_two__struct.h"
#include "hw4_interfaces/action/detail/power_of_two__type_support.h"
#include "hw4_interfaces/action/detail/power_of_two__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PowerOfTwo_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PowerOfTwo_Goal_type_support_ids_t;

static const _PowerOfTwo_Goal_type_support_ids_t _PowerOfTwo_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PowerOfTwo_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PowerOfTwo_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PowerOfTwo_Goal_type_support_symbol_names_t _PowerOfTwo_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw4_interfaces, action, PowerOfTwo_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_Goal)),
  }
};

typedef struct _PowerOfTwo_Goal_type_support_data_t
{
  void * data[2];
} _PowerOfTwo_Goal_type_support_data_t;

static _PowerOfTwo_Goal_type_support_data_t _PowerOfTwo_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PowerOfTwo_Goal_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_PowerOfTwo_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PowerOfTwo_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PowerOfTwo_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PowerOfTwo_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PowerOfTwo_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_Goal__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_Goal__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hw4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_Goal)() {
  return &::hw4_interfaces::action::rosidl_typesupport_c::PowerOfTwo_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__type_support.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PowerOfTwo_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PowerOfTwo_Result_type_support_ids_t;

static const _PowerOfTwo_Result_type_support_ids_t _PowerOfTwo_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PowerOfTwo_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PowerOfTwo_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PowerOfTwo_Result_type_support_symbol_names_t _PowerOfTwo_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw4_interfaces, action, PowerOfTwo_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_Result)),
  }
};

typedef struct _PowerOfTwo_Result_type_support_data_t
{
  void * data[2];
} _PowerOfTwo_Result_type_support_data_t;

static _PowerOfTwo_Result_type_support_data_t _PowerOfTwo_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PowerOfTwo_Result_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_PowerOfTwo_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PowerOfTwo_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PowerOfTwo_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PowerOfTwo_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PowerOfTwo_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_Result__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_Result__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hw4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_Result)() {
  return &::hw4_interfaces::action::rosidl_typesupport_c::PowerOfTwo_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__type_support.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PowerOfTwo_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PowerOfTwo_Feedback_type_support_ids_t;

static const _PowerOfTwo_Feedback_type_support_ids_t _PowerOfTwo_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PowerOfTwo_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PowerOfTwo_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PowerOfTwo_Feedback_type_support_symbol_names_t _PowerOfTwo_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw4_interfaces, action, PowerOfTwo_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_Feedback)),
  }
};

typedef struct _PowerOfTwo_Feedback_type_support_data_t
{
  void * data[2];
} _PowerOfTwo_Feedback_type_support_data_t;

static _PowerOfTwo_Feedback_type_support_data_t _PowerOfTwo_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PowerOfTwo_Feedback_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_PowerOfTwo_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PowerOfTwo_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PowerOfTwo_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PowerOfTwo_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PowerOfTwo_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_Feedback__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_Feedback__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hw4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_Feedback)() {
  return &::hw4_interfaces::action::rosidl_typesupport_c::PowerOfTwo_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__type_support.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PowerOfTwo_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PowerOfTwo_SendGoal_Request_type_support_ids_t;

static const _PowerOfTwo_SendGoal_Request_type_support_ids_t _PowerOfTwo_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PowerOfTwo_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PowerOfTwo_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PowerOfTwo_SendGoal_Request_type_support_symbol_names_t _PowerOfTwo_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Request)),
  }
};

typedef struct _PowerOfTwo_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PowerOfTwo_SendGoal_Request_type_support_data_t;

static _PowerOfTwo_SendGoal_Request_type_support_data_t _PowerOfTwo_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PowerOfTwo_SendGoal_Request_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_PowerOfTwo_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PowerOfTwo_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PowerOfTwo_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PowerOfTwo_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PowerOfTwo_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Request__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Request__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hw4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Request)() {
  return &::hw4_interfaces::action::rosidl_typesupport_c::PowerOfTwo_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__type_support.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PowerOfTwo_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PowerOfTwo_SendGoal_Response_type_support_ids_t;

static const _PowerOfTwo_SendGoal_Response_type_support_ids_t _PowerOfTwo_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PowerOfTwo_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PowerOfTwo_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PowerOfTwo_SendGoal_Response_type_support_symbol_names_t _PowerOfTwo_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Response)),
  }
};

typedef struct _PowerOfTwo_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PowerOfTwo_SendGoal_Response_type_support_data_t;

static _PowerOfTwo_SendGoal_Response_type_support_data_t _PowerOfTwo_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PowerOfTwo_SendGoal_Response_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_PowerOfTwo_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PowerOfTwo_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PowerOfTwo_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PowerOfTwo_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PowerOfTwo_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Response__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Response__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hw4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Response)() {
  return &::hw4_interfaces::action::rosidl_typesupport_c::PowerOfTwo_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__type_support.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PowerOfTwo_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PowerOfTwo_SendGoal_Event_type_support_ids_t;

static const _PowerOfTwo_SendGoal_Event_type_support_ids_t _PowerOfTwo_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PowerOfTwo_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PowerOfTwo_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PowerOfTwo_SendGoal_Event_type_support_symbol_names_t _PowerOfTwo_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Event)),
  }
};

typedef struct _PowerOfTwo_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _PowerOfTwo_SendGoal_Event_type_support_data_t;

static _PowerOfTwo_SendGoal_Event_type_support_data_t _PowerOfTwo_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PowerOfTwo_SendGoal_Event_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_PowerOfTwo_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PowerOfTwo_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PowerOfTwo_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PowerOfTwo_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PowerOfTwo_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Event__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Event__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hw4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_SendGoal_Event)() {
  return &::hw4_interfaces::action::rosidl_typesupport_c::PowerOfTwo_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _PowerOfTwo_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PowerOfTwo_SendGoal_type_support_ids_t;

static const _PowerOfTwo_SendGoal_type_support_ids_t _PowerOfTwo_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PowerOfTwo_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PowerOfTwo_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PowerOfTwo_SendGoal_type_support_symbol_names_t _PowerOfTwo_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw4_interfaces, action, PowerOfTwo_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_SendGoal)),
  }
};

typedef struct _PowerOfTwo_SendGoal_type_support_data_t
{
  void * data[2];
} _PowerOfTwo_SendGoal_type_support_data_t;

static _PowerOfTwo_SendGoal_type_support_data_t _PowerOfTwo_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PowerOfTwo_SendGoal_service_typesupport_map = {
  2,
  "hw4_interfaces",
  &_PowerOfTwo_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PowerOfTwo_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PowerOfTwo_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PowerOfTwo_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PowerOfTwo_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &PowerOfTwo_SendGoal_Request_message_type_support_handle,
  &PowerOfTwo_SendGoal_Response_message_type_support_handle,
  &PowerOfTwo_SendGoal_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hw4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_SendGoal)() {
  return &::hw4_interfaces::action::rosidl_typesupport_c::PowerOfTwo_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__type_support.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PowerOfTwo_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PowerOfTwo_GetResult_Request_type_support_ids_t;

static const _PowerOfTwo_GetResult_Request_type_support_ids_t _PowerOfTwo_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PowerOfTwo_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PowerOfTwo_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PowerOfTwo_GetResult_Request_type_support_symbol_names_t _PowerOfTwo_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw4_interfaces, action, PowerOfTwo_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult_Request)),
  }
};

typedef struct _PowerOfTwo_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PowerOfTwo_GetResult_Request_type_support_data_t;

static _PowerOfTwo_GetResult_Request_type_support_data_t _PowerOfTwo_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PowerOfTwo_GetResult_Request_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_PowerOfTwo_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PowerOfTwo_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PowerOfTwo_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PowerOfTwo_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PowerOfTwo_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Request__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Request__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hw4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_GetResult_Request)() {
  return &::hw4_interfaces::action::rosidl_typesupport_c::PowerOfTwo_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__type_support.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PowerOfTwo_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PowerOfTwo_GetResult_Response_type_support_ids_t;

static const _PowerOfTwo_GetResult_Response_type_support_ids_t _PowerOfTwo_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PowerOfTwo_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PowerOfTwo_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PowerOfTwo_GetResult_Response_type_support_symbol_names_t _PowerOfTwo_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw4_interfaces, action, PowerOfTwo_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult_Response)),
  }
};

typedef struct _PowerOfTwo_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PowerOfTwo_GetResult_Response_type_support_data_t;

static _PowerOfTwo_GetResult_Response_type_support_data_t _PowerOfTwo_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PowerOfTwo_GetResult_Response_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_PowerOfTwo_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PowerOfTwo_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PowerOfTwo_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PowerOfTwo_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PowerOfTwo_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Response__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Response__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hw4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_GetResult_Response)() {
  return &::hw4_interfaces::action::rosidl_typesupport_c::PowerOfTwo_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__type_support.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PowerOfTwo_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PowerOfTwo_GetResult_Event_type_support_ids_t;

static const _PowerOfTwo_GetResult_Event_type_support_ids_t _PowerOfTwo_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PowerOfTwo_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PowerOfTwo_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PowerOfTwo_GetResult_Event_type_support_symbol_names_t _PowerOfTwo_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw4_interfaces, action, PowerOfTwo_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult_Event)),
  }
};

typedef struct _PowerOfTwo_GetResult_Event_type_support_data_t
{
  void * data[2];
} _PowerOfTwo_GetResult_Event_type_support_data_t;

static _PowerOfTwo_GetResult_Event_type_support_data_t _PowerOfTwo_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PowerOfTwo_GetResult_Event_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_PowerOfTwo_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PowerOfTwo_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PowerOfTwo_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PowerOfTwo_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PowerOfTwo_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Event__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Event__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hw4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_GetResult_Event)() {
  return &::hw4_interfaces::action::rosidl_typesupport_c::PowerOfTwo_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__type_support.h"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _PowerOfTwo_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PowerOfTwo_GetResult_type_support_ids_t;

static const _PowerOfTwo_GetResult_type_support_ids_t _PowerOfTwo_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PowerOfTwo_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PowerOfTwo_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PowerOfTwo_GetResult_type_support_symbol_names_t _PowerOfTwo_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw4_interfaces, action, PowerOfTwo_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_GetResult)),
  }
};

typedef struct _PowerOfTwo_GetResult_type_support_data_t
{
  void * data[2];
} _PowerOfTwo_GetResult_type_support_data_t;

static _PowerOfTwo_GetResult_type_support_data_t _PowerOfTwo_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PowerOfTwo_GetResult_service_typesupport_map = {
  2,
  "hw4_interfaces",
  &_PowerOfTwo_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PowerOfTwo_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PowerOfTwo_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PowerOfTwo_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PowerOfTwo_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &PowerOfTwo_GetResult_Request_message_type_support_handle,
  &PowerOfTwo_GetResult_Response_message_type_support_handle,
  &PowerOfTwo_GetResult_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hw4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_GetResult)() {
  return &::hw4_interfaces::action::rosidl_typesupport_c::PowerOfTwo_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__struct.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__type_support.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__functions.h"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PowerOfTwo_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PowerOfTwo_FeedbackMessage_type_support_ids_t;

static const _PowerOfTwo_FeedbackMessage_type_support_ids_t _PowerOfTwo_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PowerOfTwo_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PowerOfTwo_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PowerOfTwo_FeedbackMessage_type_support_symbol_names_t _PowerOfTwo_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw4_interfaces, action, PowerOfTwo_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interfaces, action, PowerOfTwo_FeedbackMessage)),
  }
};

typedef struct _PowerOfTwo_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PowerOfTwo_FeedbackMessage_type_support_data_t;

static _PowerOfTwo_FeedbackMessage_type_support_data_t _PowerOfTwo_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PowerOfTwo_FeedbackMessage_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_PowerOfTwo_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PowerOfTwo_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PowerOfTwo_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PowerOfTwo_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PowerOfTwo_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw4_interfaces__action__PowerOfTwo_FeedbackMessage__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo_FeedbackMessage__get_type_description,
  &hw4_interfaces__action__PowerOfTwo_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace hw4_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_FeedbackMessage)() {
  return &::hw4_interfaces::action::rosidl_typesupport_c::PowerOfTwo_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "hw4_interfaces/action/power_of_two.h"
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__type_support.h"

static rosidl_action_type_support_t _hw4_interfaces__action__PowerOfTwo__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &hw4_interfaces__action__PowerOfTwo__get_type_hash,
  &hw4_interfaces__action__PowerOfTwo__get_type_description,
  &hw4_interfaces__action__PowerOfTwo__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo)()
{
  // Thread-safe by always writing the same values to the static struct
  _hw4_interfaces__action__PowerOfTwo__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_SendGoal)();
  _hw4_interfaces__action__PowerOfTwo__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_GetResult)();
  _hw4_interfaces__action__PowerOfTwo__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _hw4_interfaces__action__PowerOfTwo__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, hw4_interfaces, action, PowerOfTwo_FeedbackMessage)();
  _hw4_interfaces__action__PowerOfTwo__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_hw4_interfaces__action__PowerOfTwo__typesupport_c;
}

#ifdef __cplusplus
}
#endif
