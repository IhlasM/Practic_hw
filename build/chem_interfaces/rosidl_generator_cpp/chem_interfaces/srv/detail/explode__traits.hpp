// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chem_interfaces:srv/Explode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chem_interfaces/srv/explode.hpp"


#ifndef CHEM_INTERFACES__SRV__DETAIL__EXPLODE__TRAITS_HPP_
#define CHEM_INTERFACES__SRV__DETAIL__EXPLODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chem_interfaces/srv/detail/explode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace chem_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Explode_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: turtles
  {
    if (msg.turtles.size() == 0) {
      out << "turtles: []";
    } else {
      out << "turtles: [";
      size_t pending_items = msg.turtles.size();
      for (auto item : msg.turtles) {
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
  const Explode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turtles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.turtles.size() == 0) {
      out << "turtles: []\n";
    } else {
      out << "turtles:\n";
      for (auto item : msg.turtles) {
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

inline std::string to_yaml(const Explode_Request & msg, bool use_flow_style = false)
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

}  // namespace chem_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use chem_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chem_interfaces::srv::Explode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  chem_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chem_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const chem_interfaces::srv::Explode_Request & msg)
{
  return chem_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<chem_interfaces::srv::Explode_Request>()
{
  return "chem_interfaces::srv::Explode_Request";
}

template<>
inline const char * name<chem_interfaces::srv::Explode_Request>()
{
  return "chem_interfaces/srv/Explode_Request";
}

template<>
struct has_fixed_size<chem_interfaces::srv::Explode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<chem_interfaces::srv::Explode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<chem_interfaces::srv::Explode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace chem_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Explode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: teleported
  {
    out << "teleported: ";
    rosidl_generator_traits::value_to_yaml(msg.teleported, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Explode_Response & msg,
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

  // member: teleported
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "teleported: ";
    rosidl_generator_traits::value_to_yaml(msg.teleported, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Explode_Response & msg, bool use_flow_style = false)
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

}  // namespace chem_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use chem_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chem_interfaces::srv::Explode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  chem_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chem_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const chem_interfaces::srv::Explode_Response & msg)
{
  return chem_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<chem_interfaces::srv::Explode_Response>()
{
  return "chem_interfaces::srv::Explode_Response";
}

template<>
inline const char * name<chem_interfaces::srv::Explode_Response>()
{
  return "chem_interfaces/srv/Explode_Response";
}

template<>
struct has_fixed_size<chem_interfaces::srv::Explode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<chem_interfaces::srv::Explode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<chem_interfaces::srv::Explode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace chem_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Explode_Event & msg,
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
  const Explode_Event & msg,
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

inline std::string to_yaml(const Explode_Event & msg, bool use_flow_style = false)
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

}  // namespace chem_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use chem_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chem_interfaces::srv::Explode_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  chem_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chem_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const chem_interfaces::srv::Explode_Event & msg)
{
  return chem_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<chem_interfaces::srv::Explode_Event>()
{
  return "chem_interfaces::srv::Explode_Event";
}

template<>
inline const char * name<chem_interfaces::srv::Explode_Event>()
{
  return "chem_interfaces/srv/Explode_Event";
}

template<>
struct has_fixed_size<chem_interfaces::srv::Explode_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<chem_interfaces::srv::Explode_Event>
  : std::integral_constant<bool, has_bounded_size<chem_interfaces::srv::Explode_Request>::value && has_bounded_size<chem_interfaces::srv::Explode_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<chem_interfaces::srv::Explode_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chem_interfaces::srv::Explode>()
{
  return "chem_interfaces::srv::Explode";
}

template<>
inline const char * name<chem_interfaces::srv::Explode>()
{
  return "chem_interfaces/srv/Explode";
}

template<>
struct has_fixed_size<chem_interfaces::srv::Explode>
  : std::integral_constant<
    bool,
    has_fixed_size<chem_interfaces::srv::Explode_Request>::value &&
    has_fixed_size<chem_interfaces::srv::Explode_Response>::value
  >
{
};

template<>
struct has_bounded_size<chem_interfaces::srv::Explode>
  : std::integral_constant<
    bool,
    has_bounded_size<chem_interfaces::srv::Explode_Request>::value &&
    has_bounded_size<chem_interfaces::srv::Explode_Response>::value
  >
{
};

template<>
struct is_service<chem_interfaces::srv::Explode>
  : std::true_type
{
};

template<>
struct is_service_request<chem_interfaces::srv::Explode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<chem_interfaces::srv::Explode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CHEM_INTERFACES__SRV__DETAIL__EXPLODE__TRAITS_HPP_
