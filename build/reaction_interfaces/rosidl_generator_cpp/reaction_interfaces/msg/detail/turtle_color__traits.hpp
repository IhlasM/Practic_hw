// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from reaction_interfaces:msg/TurtleColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "reaction_interfaces/msg/turtle_color.hpp"


#ifndef REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__TRAITS_HPP_
#define REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "reaction_interfaces/msg/detail/turtle_color__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace reaction_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TurtleColor & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleColor & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleColor & msg, bool use_flow_style = false)
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

}  // namespace reaction_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use reaction_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const reaction_interfaces::msg::TurtleColor & msg,
  std::ostream & out, size_t indentation = 0)
{
  reaction_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use reaction_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const reaction_interfaces::msg::TurtleColor & msg)
{
  return reaction_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<reaction_interfaces::msg::TurtleColor>()
{
  return "reaction_interfaces::msg::TurtleColor";
}

template<>
inline const char * name<reaction_interfaces::msg::TurtleColor>()
{
  return "reaction_interfaces/msg/TurtleColor";
}

template<>
struct has_fixed_size<reaction_interfaces::msg::TurtleColor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<reaction_interfaces::msg::TurtleColor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<reaction_interfaces::msg::TurtleColor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__TRAITS_HPP_
