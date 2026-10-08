// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from reaction_interfaces:msg/TurtleColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "reaction_interfaces/msg/turtle_color.hpp"


#ifndef REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__BUILDER_HPP_
#define REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "reaction_interfaces/msg/detail/turtle_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace reaction_interfaces
{

namespace msg
{

namespace builder
{

class Init_TurtleColor_b
{
public:
  explicit Init_TurtleColor_b(::reaction_interfaces::msg::TurtleColor & msg)
  : msg_(msg)
  {}
  ::reaction_interfaces::msg::TurtleColor b(::reaction_interfaces::msg::TurtleColor::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reaction_interfaces::msg::TurtleColor msg_;
};

class Init_TurtleColor_g
{
public:
  explicit Init_TurtleColor_g(::reaction_interfaces::msg::TurtleColor & msg)
  : msg_(msg)
  {}
  Init_TurtleColor_b g(::reaction_interfaces::msg::TurtleColor::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_TurtleColor_b(msg_);
  }

private:
  ::reaction_interfaces::msg::TurtleColor msg_;
};

class Init_TurtleColor_r
{
public:
  explicit Init_TurtleColor_r(::reaction_interfaces::msg::TurtleColor & msg)
  : msg_(msg)
  {}
  Init_TurtleColor_g r(::reaction_interfaces::msg::TurtleColor::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_TurtleColor_g(msg_);
  }

private:
  ::reaction_interfaces::msg::TurtleColor msg_;
};

class Init_TurtleColor_name
{
public:
  Init_TurtleColor_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleColor_r name(::reaction_interfaces::msg::TurtleColor::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TurtleColor_r(msg_);
  }

private:
  ::reaction_interfaces::msg::TurtleColor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::reaction_interfaces::msg::TurtleColor>()
{
  return reaction_interfaces::msg::builder::Init_TurtleColor_name();
}

}  // namespace reaction_interfaces

#endif  // REACTION_INTERFACES__MSG__DETAIL__TURTLE_COLOR__BUILDER_HPP_
