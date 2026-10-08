// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hw4_interfaces:action/PowerOfTwo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw4_interfaces/action/power_of_two.hpp"


#ifndef HW4_INTERFACES__ACTION__DETAIL__POWER_OF_TWO__TRAITS_HPP_
#define HW4_INTERFACES__ACTION__DETAIL__POWER_OF_TWO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hw4_interfaces/action/detail/power_of_two__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hw4_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PowerOfTwo_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: numbers
  {
    if (msg.numbers.size() == 0) {
      out << "numbers: []";
    } else {
      out << "numbers: [";
      size_t pending_items = msg.numbers.size();
      for (auto item : msg.numbers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerOfTwo_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: numbers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.numbers.size() == 0) {
      out << "numbers: []\n";
    } else {
      out << "numbers:\n";
      for (auto item : msg.numbers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerOfTwo_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hw4_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw4_interfaces::action::PowerOfTwo_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw4_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw4_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hw4_interfaces::action::PowerOfTwo_Goal & msg)
{
  return hw4_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hw4_interfaces::action::PowerOfTwo_Goal>()
{
  return "hw4_interfaces::action::PowerOfTwo_Goal";
}

template<>
inline const char * name<hw4_interfaces::action::PowerOfTwo_Goal>()
{
  return "hw4_interfaces/action/PowerOfTwo_Goal";
}

template<>
struct has_fixed_size<hw4_interfaces::action::PowerOfTwo_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hw4_interfaces::action::PowerOfTwo_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hw4_interfaces::action::PowerOfTwo_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hw4_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PowerOfTwo_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: powers
  {
    if (msg.powers.size() == 0) {
      out << "powers: []";
    } else {
      out << "powers: [";
      size_t pending_items = msg.powers.size();
      for (auto item : msg.powers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerOfTwo_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: powers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.powers.size() == 0) {
      out << "powers: []\n";
    } else {
      out << "powers:\n";
      for (auto item : msg.powers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerOfTwo_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hw4_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw4_interfaces::action::PowerOfTwo_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw4_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw4_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hw4_interfaces::action::PowerOfTwo_Result & msg)
{
  return hw4_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hw4_interfaces::action::PowerOfTwo_Result>()
{
  return "hw4_interfaces::action::PowerOfTwo_Result";
}

template<>
inline const char * name<hw4_interfaces::action::PowerOfTwo_Result>()
{
  return "hw4_interfaces/action/PowerOfTwo_Result";
}

template<>
struct has_fixed_size<hw4_interfaces::action::PowerOfTwo_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hw4_interfaces::action::PowerOfTwo_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hw4_interfaces::action::PowerOfTwo_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hw4_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PowerOfTwo_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << ", ";
  }

  // member: power
  {
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerOfTwo_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }

  // member: power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerOfTwo_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hw4_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw4_interfaces::action::PowerOfTwo_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw4_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw4_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hw4_interfaces::action::PowerOfTwo_Feedback & msg)
{
  return hw4_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hw4_interfaces::action::PowerOfTwo_Feedback>()
{
  return "hw4_interfaces::action::PowerOfTwo_Feedback";
}

template<>
inline const char * name<hw4_interfaces::action::PowerOfTwo_Feedback>()
{
  return "hw4_interfaces/action/PowerOfTwo_Feedback";
}

template<>
struct has_fixed_size<hw4_interfaces::action::PowerOfTwo_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hw4_interfaces::action::PowerOfTwo_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hw4_interfaces::action::PowerOfTwo_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "hw4_interfaces/action/detail/power_of_two__traits.hpp"

namespace hw4_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PowerOfTwo_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerOfTwo_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerOfTwo_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hw4_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw4_interfaces::action::PowerOfTwo_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw4_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw4_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hw4_interfaces::action::PowerOfTwo_SendGoal_Request & msg)
{
  return hw4_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hw4_interfaces::action::PowerOfTwo_SendGoal_Request>()
{
  return "hw4_interfaces::action::PowerOfTwo_SendGoal_Request";
}

template<>
inline const char * name<hw4_interfaces::action::PowerOfTwo_SendGoal_Request>()
{
  return "hw4_interfaces/action/PowerOfTwo_SendGoal_Request";
}

template<>
struct has_fixed_size<hw4_interfaces::action::PowerOfTwo_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<hw4_interfaces::action::PowerOfTwo_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hw4_interfaces::action::PowerOfTwo_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<hw4_interfaces::action::PowerOfTwo_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hw4_interfaces::action::PowerOfTwo_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace hw4_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PowerOfTwo_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerOfTwo_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerOfTwo_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hw4_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw4_interfaces::action::PowerOfTwo_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw4_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw4_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hw4_interfaces::action::PowerOfTwo_SendGoal_Response & msg)
{
  return hw4_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hw4_interfaces::action::PowerOfTwo_SendGoal_Response>()
{
  return "hw4_interfaces::action::PowerOfTwo_SendGoal_Response";
}

template<>
inline const char * name<hw4_interfaces::action::PowerOfTwo_SendGoal_Response>()
{
  return "hw4_interfaces/action/PowerOfTwo_SendGoal_Response";
}

template<>
struct has_fixed_size<hw4_interfaces::action::PowerOfTwo_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<hw4_interfaces::action::PowerOfTwo_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<hw4_interfaces::action::PowerOfTwo_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace hw4_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PowerOfTwo_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerOfTwo_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerOfTwo_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hw4_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw4_interfaces::action::PowerOfTwo_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw4_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw4_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hw4_interfaces::action::PowerOfTwo_SendGoal_Event & msg)
{
  return hw4_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hw4_interfaces::action::PowerOfTwo_SendGoal_Event>()
{
  return "hw4_interfaces::action::PowerOfTwo_SendGoal_Event";
}

template<>
inline const char * name<hw4_interfaces::action::PowerOfTwo_SendGoal_Event>()
{
  return "hw4_interfaces/action/PowerOfTwo_SendGoal_Event";
}

template<>
struct has_fixed_size<hw4_interfaces::action::PowerOfTwo_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hw4_interfaces::action::PowerOfTwo_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<hw4_interfaces::action::PowerOfTwo_SendGoal_Request>::value && has_bounded_size<hw4_interfaces::action::PowerOfTwo_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<hw4_interfaces::action::PowerOfTwo_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hw4_interfaces::action::PowerOfTwo_SendGoal>()
{
  return "hw4_interfaces::action::PowerOfTwo_SendGoal";
}

template<>
inline const char * name<hw4_interfaces::action::PowerOfTwo_SendGoal>()
{
  return "hw4_interfaces/action/PowerOfTwo_SendGoal";
}

template<>
struct has_fixed_size<hw4_interfaces::action::PowerOfTwo_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<hw4_interfaces::action::PowerOfTwo_SendGoal_Request>::value &&
    has_fixed_size<hw4_interfaces::action::PowerOfTwo_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<hw4_interfaces::action::PowerOfTwo_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<hw4_interfaces::action::PowerOfTwo_SendGoal_Request>::value &&
    has_bounded_size<hw4_interfaces::action::PowerOfTwo_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<hw4_interfaces::action::PowerOfTwo_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<hw4_interfaces::action::PowerOfTwo_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hw4_interfaces::action::PowerOfTwo_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace hw4_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PowerOfTwo_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerOfTwo_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerOfTwo_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hw4_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw4_interfaces::action::PowerOfTwo_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw4_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw4_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hw4_interfaces::action::PowerOfTwo_GetResult_Request & msg)
{
  return hw4_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hw4_interfaces::action::PowerOfTwo_GetResult_Request>()
{
  return "hw4_interfaces::action::PowerOfTwo_GetResult_Request";
}

template<>
inline const char * name<hw4_interfaces::action::PowerOfTwo_GetResult_Request>()
{
  return "hw4_interfaces/action/PowerOfTwo_GetResult_Request";
}

template<>
struct has_fixed_size<hw4_interfaces::action::PowerOfTwo_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hw4_interfaces::action::PowerOfTwo_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hw4_interfaces::action::PowerOfTwo_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__traits.hpp"

namespace hw4_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PowerOfTwo_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerOfTwo_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerOfTwo_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hw4_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw4_interfaces::action::PowerOfTwo_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw4_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw4_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hw4_interfaces::action::PowerOfTwo_GetResult_Response & msg)
{
  return hw4_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hw4_interfaces::action::PowerOfTwo_GetResult_Response>()
{
  return "hw4_interfaces::action::PowerOfTwo_GetResult_Response";
}

template<>
inline const char * name<hw4_interfaces::action::PowerOfTwo_GetResult_Response>()
{
  return "hw4_interfaces/action/PowerOfTwo_GetResult_Response";
}

template<>
struct has_fixed_size<hw4_interfaces::action::PowerOfTwo_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<hw4_interfaces::action::PowerOfTwo_Result>::value> {};

template<>
struct has_bounded_size<hw4_interfaces::action::PowerOfTwo_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<hw4_interfaces::action::PowerOfTwo_Result>::value> {};

template<>
struct is_message<hw4_interfaces::action::PowerOfTwo_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace hw4_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PowerOfTwo_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerOfTwo_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerOfTwo_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hw4_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw4_interfaces::action::PowerOfTwo_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw4_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw4_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hw4_interfaces::action::PowerOfTwo_GetResult_Event & msg)
{
  return hw4_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hw4_interfaces::action::PowerOfTwo_GetResult_Event>()
{
  return "hw4_interfaces::action::PowerOfTwo_GetResult_Event";
}

template<>
inline const char * name<hw4_interfaces::action::PowerOfTwo_GetResult_Event>()
{
  return "hw4_interfaces/action/PowerOfTwo_GetResult_Event";
}

template<>
struct has_fixed_size<hw4_interfaces::action::PowerOfTwo_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hw4_interfaces::action::PowerOfTwo_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<hw4_interfaces::action::PowerOfTwo_GetResult_Request>::value && has_bounded_size<hw4_interfaces::action::PowerOfTwo_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<hw4_interfaces::action::PowerOfTwo_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hw4_interfaces::action::PowerOfTwo_GetResult>()
{
  return "hw4_interfaces::action::PowerOfTwo_GetResult";
}

template<>
inline const char * name<hw4_interfaces::action::PowerOfTwo_GetResult>()
{
  return "hw4_interfaces/action/PowerOfTwo_GetResult";
}

template<>
struct has_fixed_size<hw4_interfaces::action::PowerOfTwo_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<hw4_interfaces::action::PowerOfTwo_GetResult_Request>::value &&
    has_fixed_size<hw4_interfaces::action::PowerOfTwo_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<hw4_interfaces::action::PowerOfTwo_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<hw4_interfaces::action::PowerOfTwo_GetResult_Request>::value &&
    has_bounded_size<hw4_interfaces::action::PowerOfTwo_GetResult_Response>::value
  >
{
};

template<>
struct is_service<hw4_interfaces::action::PowerOfTwo_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<hw4_interfaces::action::PowerOfTwo_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hw4_interfaces::action::PowerOfTwo_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "hw4_interfaces/action/detail/power_of_two__traits.hpp"

namespace hw4_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PowerOfTwo_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerOfTwo_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerOfTwo_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hw4_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw4_interfaces::action::PowerOfTwo_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw4_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw4_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const hw4_interfaces::action::PowerOfTwo_FeedbackMessage & msg)
{
  return hw4_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<hw4_interfaces::action::PowerOfTwo_FeedbackMessage>()
{
  return "hw4_interfaces::action::PowerOfTwo_FeedbackMessage";
}

template<>
inline const char * name<hw4_interfaces::action::PowerOfTwo_FeedbackMessage>()
{
  return "hw4_interfaces/action/PowerOfTwo_FeedbackMessage";
}

template<>
struct has_fixed_size<hw4_interfaces::action::PowerOfTwo_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<hw4_interfaces::action::PowerOfTwo_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hw4_interfaces::action::PowerOfTwo_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<hw4_interfaces::action::PowerOfTwo_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hw4_interfaces::action::PowerOfTwo_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<hw4_interfaces::action::PowerOfTwo>
  : std::true_type
{
};

template<>
struct is_action_goal<hw4_interfaces::action::PowerOfTwo_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<hw4_interfaces::action::PowerOfTwo_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<hw4_interfaces::action::PowerOfTwo_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // HW4_INTERFACES__ACTION__DETAIL__POWER_OF_TWO__TRAITS_HPP_
