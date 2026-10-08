// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chem_interfaces:srv/Explode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chem_interfaces/srv/explode.hpp"


#ifndef CHEM_INTERFACES__SRV__DETAIL__EXPLODE__BUILDER_HPP_
#define CHEM_INTERFACES__SRV__DETAIL__EXPLODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chem_interfaces/srv/detail/explode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chem_interfaces
{

namespace srv
{

namespace builder
{

class Init_Explode_Request_turtles
{
public:
  Init_Explode_Request_turtles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chem_interfaces::srv::Explode_Request turtles(::chem_interfaces::srv::Explode_Request::_turtles_type arg)
  {
    msg_.turtles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chem_interfaces::srv::Explode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chem_interfaces::srv::Explode_Request>()
{
  return chem_interfaces::srv::builder::Init_Explode_Request_turtles();
}

}  // namespace chem_interfaces


namespace chem_interfaces
{

namespace srv
{

namespace builder
{

class Init_Explode_Response_teleported
{
public:
  explicit Init_Explode_Response_teleported(::chem_interfaces::srv::Explode_Response & msg)
  : msg_(msg)
  {}
  ::chem_interfaces::srv::Explode_Response teleported(::chem_interfaces::srv::Explode_Response::_teleported_type arg)
  {
    msg_.teleported = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chem_interfaces::srv::Explode_Response msg_;
};

class Init_Explode_Response_success
{
public:
  Init_Explode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Explode_Response_teleported success(::chem_interfaces::srv::Explode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Explode_Response_teleported(msg_);
  }

private:
  ::chem_interfaces::srv::Explode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chem_interfaces::srv::Explode_Response>()
{
  return chem_interfaces::srv::builder::Init_Explode_Response_success();
}

}  // namespace chem_interfaces


namespace chem_interfaces
{

namespace srv
{

namespace builder
{

class Init_Explode_Event_response
{
public:
  explicit Init_Explode_Event_response(::chem_interfaces::srv::Explode_Event & msg)
  : msg_(msg)
  {}
  ::chem_interfaces::srv::Explode_Event response(::chem_interfaces::srv::Explode_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chem_interfaces::srv::Explode_Event msg_;
};

class Init_Explode_Event_request
{
public:
  explicit Init_Explode_Event_request(::chem_interfaces::srv::Explode_Event & msg)
  : msg_(msg)
  {}
  Init_Explode_Event_response request(::chem_interfaces::srv::Explode_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Explode_Event_response(msg_);
  }

private:
  ::chem_interfaces::srv::Explode_Event msg_;
};

class Init_Explode_Event_info
{
public:
  Init_Explode_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Explode_Event_request info(::chem_interfaces::srv::Explode_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Explode_Event_request(msg_);
  }

private:
  ::chem_interfaces::srv::Explode_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chem_interfaces::srv::Explode_Event>()
{
  return chem_interfaces::srv::builder::Init_Explode_Event_info();
}

}  // namespace chem_interfaces

#endif  // CHEM_INTERFACES__SRV__DETAIL__EXPLODE__BUILDER_HPP_
