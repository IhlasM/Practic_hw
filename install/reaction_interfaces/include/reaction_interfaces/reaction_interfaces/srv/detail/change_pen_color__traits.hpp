// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from reaction_interfaces:srv/ChangePenColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "reaction_interfaces/srv/change_pen_color.hpp"


#ifndef REACTION_INTERFACES__SRV__DETAIL__CHANGE_PEN_COLOR__TRAITS_HPP_
#define REACTION_INTERFACES__SRV__DETAIL__CHANGE_PEN_COLOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "reaction_interfaces/srv/detail/change_pen_color__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace reaction_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangePenColor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: r
  {
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << ", ";
  }

  // member: g
  {
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangePenColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangePenColor_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace reaction_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use reaction_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const reaction_interfaces::srv::ChangePenColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  reaction_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use reaction_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const reaction_interfaces::srv::ChangePenColor_Request & msg)
{
  return reaction_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<reaction_interfaces::srv::ChangePenColor_Request>()
{
  return "reaction_interfaces::srv::ChangePenColor_Request";
}

template<>
inline const char * name<reaction_interfaces::srv::ChangePenColor_Request>()
{
  return "reaction_interfaces/srv/ChangePenColor_Request";
}

template<>
struct has_fixed_size<reaction_interfaces::srv::ChangePenColor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<reaction_interfaces::srv::ChangePenColor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<reaction_interfaces::srv::ChangePenColor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace reaction_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangePenColor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangePenColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangePenColor_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace reaction_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use reaction_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const reaction_interfaces::srv::ChangePenColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  reaction_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use reaction_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const reaction_interfaces::srv::ChangePenColor_Response & msg)
{
  return reaction_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<reaction_interfaces::srv::ChangePenColor_Response>()
{
  return "reaction_interfaces::srv::ChangePenColor_Response";
}

template<>
inline const char * name<reaction_interfaces::srv::ChangePenColor_Response>()
{
  return "reaction_interfaces/srv/ChangePenColor_Response";
}

template<>
struct has_fixed_size<reaction_interfaces::srv::ChangePenColor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<reaction_interfaces::srv::ChangePenColor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<reaction_interfaces::srv::ChangePenColor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace reaction_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangePenColor_Event & msg,
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
  const ChangePenColor_Event & msg,
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

inline std::string to_yaml(const ChangePenColor_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace reaction_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use reaction_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const reaction_interfaces::srv::ChangePenColor_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  reaction_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use reaction_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const reaction_interfaces::srv::ChangePenColor_Event & msg)
{
  return reaction_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<reaction_interfaces::srv::ChangePenColor_Event>()
{
  return "reaction_interfaces::srv::ChangePenColor_Event";
}

template<>
inline const char * name<reaction_interfaces::srv::ChangePenColor_Event>()
{
  return "reaction_interfaces/srv/ChangePenColor_Event";
}

template<>
struct has_fixed_size<reaction_interfaces::srv::ChangePenColor_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<reaction_interfaces::srv::ChangePenColor_Event>
  : std::integral_constant<bool, has_bounded_size<reaction_interfaces::srv::ChangePenColor_Request>::value && has_bounded_size<reaction_interfaces::srv::ChangePenColor_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<reaction_interfaces::srv::ChangePenColor_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<reaction_interfaces::srv::ChangePenColor>()
{
  return "reaction_interfaces::srv::ChangePenColor";
}

template<>
inline const char * name<reaction_interfaces::srv::ChangePenColor>()
{
  return "reaction_interfaces/srv/ChangePenColor";
}

template<>
struct has_fixed_size<reaction_interfaces::srv::ChangePenColor>
  : std::integral_constant<
    bool,
    has_fixed_size<reaction_interfaces::srv::ChangePenColor_Request>::value &&
    has_fixed_size<reaction_interfaces::srv::ChangePenColor_Response>::value
  >
{
};

template<>
struct has_bounded_size<reaction_interfaces::srv::ChangePenColor>
  : std::integral_constant<
    bool,
    has_bounded_size<reaction_interfaces::srv::ChangePenColor_Request>::value &&
    has_bounded_size<reaction_interfaces::srv::ChangePenColor_Response>::value
  >
{
};

template<>
struct is_service<reaction_interfaces::srv::ChangePenColor>
  : std::true_type
{
};

template<>
struct is_service_request<reaction_interfaces::srv::ChangePenColor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<reaction_interfaces::srv::ChangePenColor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // REACTION_INTERFACES__SRV__DETAIL__CHANGE_PEN_COLOR__TRAITS_HPP_
