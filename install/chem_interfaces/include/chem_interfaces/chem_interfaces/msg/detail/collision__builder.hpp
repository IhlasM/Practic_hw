// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chem_interfaces:msg/Collision.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chem_interfaces/msg/collision.hpp"


#ifndef CHEM_INTERFACES__MSG__DETAIL__COLLISION__BUILDER_HPP_
#define CHEM_INTERFACES__MSG__DETAIL__COLLISION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chem_interfaces/msg/detail/collision__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chem_interfaces
{

namespace msg
{

namespace builder
{

class Init_Collision_y
{
public:
  explicit Init_Collision_y(::chem_interfaces::msg::Collision & msg)
  : msg_(msg)
  {}
  ::chem_interfaces::msg::Collision y(::chem_interfaces::msg::Collision::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chem_interfaces::msg::Collision msg_;
};

class Init_Collision_x
{
public:
  explicit Init_Collision_x(::chem_interfaces::msg::Collision & msg)
  : msg_(msg)
  {}
  Init_Collision_y x(::chem_interfaces::msg::Collision::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Collision_y(msg_);
  }

private:
  ::chem_interfaces::msg::Collision msg_;
};

class Init_Collision_turtles
{
public:
  explicit Init_Collision_turtles(::chem_interfaces::msg::Collision & msg)
  : msg_(msg)
  {}
  Init_Collision_x turtles(::chem_interfaces::msg::Collision::_turtles_type arg)
  {
    msg_.turtles = std::move(arg);
    return Init_Collision_x(msg_);
  }

private:
  ::chem_interfaces::msg::Collision msg_;
};

class Init_Collision_kind
{
public:
  Init_Collision_kind()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Collision_turtles kind(::chem_interfaces::msg::Collision::_kind_type arg)
  {
    msg_.kind = std::move(arg);
    return Init_Collision_turtles(msg_);
  }

private:
  ::chem_interfaces::msg::Collision msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::chem_interfaces::msg::Collision>()
{
  return chem_interfaces::msg::builder::Init_Collision_kind();
}

}  // namespace chem_interfaces

#endif  // CHEM_INTERFACES__MSG__DETAIL__COLLISION__BUILDER_HPP_
