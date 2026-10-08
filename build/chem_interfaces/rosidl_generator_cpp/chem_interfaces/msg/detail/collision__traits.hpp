// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chem_interfaces:msg/Collision.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chem_interfaces/msg/collision.hpp"


#ifndef CHEM_INTERFACES__MSG__DETAIL__COLLISION__TRAITS_HPP_
#define CHEM_INTERFACES__MSG__DETAIL__COLLISION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chem_interfaces/msg/detail/collision__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace chem_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Collision & msg,
  std::ostream & out)
{
  out << "{";
  // member: kind
  {
    out << "kind: ";
    rosidl_generator_traits::value_to_yaml(msg.kind, out);
    out << ", ";
  }

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
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Collision & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kind: ";
    rosidl_generator_traits::value_to_yaml(msg.kind, out);
    out << "\n";
  }

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

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Collision & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace chem_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use chem_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chem_interfaces::msg::Collision & msg,
  std::ostream & out, size_t indentation = 0)
{
  chem_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chem_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const chem_interfaces::msg::Collision & msg)
{
  return chem_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<chem_interfaces::msg::Collision>()
{
  return "chem_interfaces::msg::Collision";
}

template<>
inline const char * name<chem_interfaces::msg::Collision>()
{
  return "chem_interfaces/msg/Collision";
}

template<>
struct has_fixed_size<chem_interfaces::msg::Collision>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<chem_interfaces::msg::Collision>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<chem_interfaces::msg::Collision>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CHEM_INTERFACES__MSG__DETAIL__COLLISION__TRAITS_HPP_
