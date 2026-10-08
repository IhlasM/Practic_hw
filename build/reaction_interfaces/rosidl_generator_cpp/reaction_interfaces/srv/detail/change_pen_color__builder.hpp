// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from reaction_interfaces:srv/ChangePenColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "reaction_interfaces/srv/change_pen_color.hpp"


#ifndef REACTION_INTERFACES__SRV__DETAIL__CHANGE_PEN_COLOR__BUILDER_HPP_
#define REACTION_INTERFACES__SRV__DETAIL__CHANGE_PEN_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "reaction_interfaces/srv/detail/change_pen_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace reaction_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangePenColor_Request_width
{
public:
  explicit Init_ChangePenColor_Request_width(::reaction_interfaces::srv::ChangePenColor_Request & msg)
  : msg_(msg)
  {}
  ::reaction_interfaces::srv::ChangePenColor_Request width(::reaction_interfaces::srv::ChangePenColor_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reaction_interfaces::srv::ChangePenColor_Request msg_;
};

class Init_ChangePenColor_Request_b
{
public:
  explicit Init_ChangePenColor_Request_b(::reaction_interfaces::srv::ChangePenColor_Request & msg)
  : msg_(msg)
  {}
  Init_ChangePenColor_Request_width b(::reaction_interfaces::srv::ChangePenColor_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_ChangePenColor_Request_width(msg_);
  }

private:
  ::reaction_interfaces::srv::ChangePenColor_Request msg_;
};

class Init_ChangePenColor_Request_g
{
public:
  explicit Init_ChangePenColor_Request_g(::reaction_interfaces::srv::ChangePenColor_Request & msg)
  : msg_(msg)
  {}
  Init_ChangePenColor_Request_b g(::reaction_interfaces::srv::ChangePenColor_Request::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_ChangePenColor_Request_b(msg_);
  }

private:
  ::reaction_interfaces::srv::ChangePenColor_Request msg_;
};

class Init_ChangePenColor_Request_r
{
public:
  explicit Init_ChangePenColor_Request_r(::reaction_interfaces::srv::ChangePenColor_Request & msg)
  : msg_(msg)
  {}
  Init_ChangePenColor_Request_g r(::reaction_interfaces::srv::ChangePenColor_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_ChangePenColor_Request_g(msg_);
  }

private:
  ::reaction_interfaces::srv::ChangePenColor_Request msg_;
};

class Init_ChangePenColor_Request_name
{
public:
  Init_ChangePenColor_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangePenColor_Request_r name(::reaction_interfaces::srv::ChangePenColor_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ChangePenColor_Request_r(msg_);
  }

private:
  ::reaction_interfaces::srv::ChangePenColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::reaction_interfaces::srv::ChangePenColor_Request>()
{
  return reaction_interfaces::srv::builder::Init_ChangePenColor_Request_name();
}

}  // namespace reaction_interfaces


namespace reaction_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangePenColor_Response_success
{
public:
  Init_ChangePenColor_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::reaction_interfaces::srv::ChangePenColor_Response success(::reaction_interfaces::srv::ChangePenColor_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reaction_interfaces::srv::ChangePenColor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::reaction_interfaces::srv::ChangePenColor_Response>()
{
  return reaction_interfaces::srv::builder::Init_ChangePenColor_Response_success();
}

}  // namespace reaction_interfaces


namespace reaction_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangePenColor_Event_response
{
public:
  explicit Init_ChangePenColor_Event_response(::reaction_interfaces::srv::ChangePenColor_Event & msg)
  : msg_(msg)
  {}
  ::reaction_interfaces::srv::ChangePenColor_Event response(::reaction_interfaces::srv::ChangePenColor_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reaction_interfaces::srv::ChangePenColor_Event msg_;
};

class Init_ChangePenColor_Event_request
{
public:
  explicit Init_ChangePenColor_Event_request(::reaction_interfaces::srv::ChangePenColor_Event & msg)
  : msg_(msg)
  {}
  Init_ChangePenColor_Event_response request(::reaction_interfaces::srv::ChangePenColor_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ChangePenColor_Event_response(msg_);
  }

private:
  ::reaction_interfaces::srv::ChangePenColor_Event msg_;
};

class Init_ChangePenColor_Event_info
{
public:
  Init_ChangePenColor_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangePenColor_Event_request info(::reaction_interfaces::srv::ChangePenColor_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ChangePenColor_Event_request(msg_);
  }

private:
  ::reaction_interfaces::srv::ChangePenColor_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::reaction_interfaces::srv::ChangePenColor_Event>()
{
  return reaction_interfaces::srv::builder::Init_ChangePenColor_Event_info();
}

}  // namespace reaction_interfaces

#endif  // REACTION_INTERFACES__SRV__DETAIL__CHANGE_PEN_COLOR__BUILDER_HPP_
