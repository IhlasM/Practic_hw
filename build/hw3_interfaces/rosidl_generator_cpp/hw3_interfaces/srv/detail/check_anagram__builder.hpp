// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hw3_interfaces:srv/CheckAnagram.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw3_interfaces/srv/check_anagram.hpp"


#ifndef HW3_INTERFACES__SRV__DETAIL__CHECK_ANAGRAM__BUILDER_HPP_
#define HW3_INTERFACES__SRV__DETAIL__CHECK_ANAGRAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hw3_interfaces/srv/detail/check_anagram__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hw3_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckAnagram_Request_second
{
public:
  explicit Init_CheckAnagram_Request_second(::hw3_interfaces::srv::CheckAnagram_Request & msg)
  : msg_(msg)
  {}
  ::hw3_interfaces::srv::CheckAnagram_Request second(::hw3_interfaces::srv::CheckAnagram_Request::_second_type arg)
  {
    msg_.second = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw3_interfaces::srv::CheckAnagram_Request msg_;
};

class Init_CheckAnagram_Request_first
{
public:
  Init_CheckAnagram_Request_first()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckAnagram_Request_second first(::hw3_interfaces::srv::CheckAnagram_Request::_first_type arg)
  {
    msg_.first = std::move(arg);
    return Init_CheckAnagram_Request_second(msg_);
  }

private:
  ::hw3_interfaces::srv::CheckAnagram_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw3_interfaces::srv::CheckAnagram_Request>()
{
  return hw3_interfaces::srv::builder::Init_CheckAnagram_Request_first();
}

}  // namespace hw3_interfaces


namespace hw3_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckAnagram_Response_is_anagram
{
public:
  Init_CheckAnagram_Response_is_anagram()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw3_interfaces::srv::CheckAnagram_Response is_anagram(::hw3_interfaces::srv::CheckAnagram_Response::_is_anagram_type arg)
  {
    msg_.is_anagram = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw3_interfaces::srv::CheckAnagram_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw3_interfaces::srv::CheckAnagram_Response>()
{
  return hw3_interfaces::srv::builder::Init_CheckAnagram_Response_is_anagram();
}

}  // namespace hw3_interfaces


namespace hw3_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckAnagram_Event_response
{
public:
  explicit Init_CheckAnagram_Event_response(::hw3_interfaces::srv::CheckAnagram_Event & msg)
  : msg_(msg)
  {}
  ::hw3_interfaces::srv::CheckAnagram_Event response(::hw3_interfaces::srv::CheckAnagram_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw3_interfaces::srv::CheckAnagram_Event msg_;
};

class Init_CheckAnagram_Event_request
{
public:
  explicit Init_CheckAnagram_Event_request(::hw3_interfaces::srv::CheckAnagram_Event & msg)
  : msg_(msg)
  {}
  Init_CheckAnagram_Event_response request(::hw3_interfaces::srv::CheckAnagram_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CheckAnagram_Event_response(msg_);
  }

private:
  ::hw3_interfaces::srv::CheckAnagram_Event msg_;
};

class Init_CheckAnagram_Event_info
{
public:
  Init_CheckAnagram_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckAnagram_Event_request info(::hw3_interfaces::srv::CheckAnagram_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CheckAnagram_Event_request(msg_);
  }

private:
  ::hw3_interfaces::srv::CheckAnagram_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw3_interfaces::srv::CheckAnagram_Event>()
{
  return hw3_interfaces::srv::builder::Init_CheckAnagram_Event_info();
}

}  // namespace hw3_interfaces

#endif  // HW3_INTERFACES__SRV__DETAIL__CHECK_ANAGRAM__BUILDER_HPP_
