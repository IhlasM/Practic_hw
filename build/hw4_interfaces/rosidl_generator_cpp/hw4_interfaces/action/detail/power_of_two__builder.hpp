// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hw4_interfaces:action/PowerOfTwo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw4_interfaces/action/power_of_two.hpp"


#ifndef HW4_INTERFACES__ACTION__DETAIL__POWER_OF_TWO__BUILDER_HPP_
#define HW4_INTERFACES__ACTION__DETAIL__POWER_OF_TWO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hw4_interfaces/action/detail/power_of_two__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_PowerOfTwo_Goal_numbers
{
public:
  Init_PowerOfTwo_Goal_numbers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw4_interfaces::action::PowerOfTwo_Goal numbers(::hw4_interfaces::action::PowerOfTwo_Goal::_numbers_type arg)
  {
    msg_.numbers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::PowerOfTwo_Goal>()
{
  return hw4_interfaces::action::builder::Init_PowerOfTwo_Goal_numbers();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_PowerOfTwo_Result_powers
{
public:
  Init_PowerOfTwo_Result_powers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw4_interfaces::action::PowerOfTwo_Result powers(::hw4_interfaces::action::PowerOfTwo_Result::_powers_type arg)
  {
    msg_.powers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::PowerOfTwo_Result>()
{
  return hw4_interfaces::action::builder::Init_PowerOfTwo_Result_powers();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_PowerOfTwo_Feedback_power
{
public:
  explicit Init_PowerOfTwo_Feedback_power(::hw4_interfaces::action::PowerOfTwo_Feedback & msg)
  : msg_(msg)
  {}
  ::hw4_interfaces::action::PowerOfTwo_Feedback power(::hw4_interfaces::action::PowerOfTwo_Feedback::_power_type arg)
  {
    msg_.power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_Feedback msg_;
};

class Init_PowerOfTwo_Feedback_number
{
public:
  Init_PowerOfTwo_Feedback_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerOfTwo_Feedback_power number(::hw4_interfaces::action::PowerOfTwo_Feedback::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_PowerOfTwo_Feedback_power(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::PowerOfTwo_Feedback>()
{
  return hw4_interfaces::action::builder::Init_PowerOfTwo_Feedback_number();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_PowerOfTwo_SendGoal_Request_goal
{
public:
  explicit Init_PowerOfTwo_SendGoal_Request_goal(::hw4_interfaces::action::PowerOfTwo_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::hw4_interfaces::action::PowerOfTwo_SendGoal_Request goal(::hw4_interfaces::action::PowerOfTwo_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_SendGoal_Request msg_;
};

class Init_PowerOfTwo_SendGoal_Request_goal_id
{
public:
  Init_PowerOfTwo_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerOfTwo_SendGoal_Request_goal goal_id(::hw4_interfaces::action::PowerOfTwo_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PowerOfTwo_SendGoal_Request_goal(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::PowerOfTwo_SendGoal_Request>()
{
  return hw4_interfaces::action::builder::Init_PowerOfTwo_SendGoal_Request_goal_id();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_PowerOfTwo_SendGoal_Response_stamp
{
public:
  explicit Init_PowerOfTwo_SendGoal_Response_stamp(::hw4_interfaces::action::PowerOfTwo_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::hw4_interfaces::action::PowerOfTwo_SendGoal_Response stamp(::hw4_interfaces::action::PowerOfTwo_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_SendGoal_Response msg_;
};

class Init_PowerOfTwo_SendGoal_Response_accepted
{
public:
  Init_PowerOfTwo_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerOfTwo_SendGoal_Response_stamp accepted(::hw4_interfaces::action::PowerOfTwo_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PowerOfTwo_SendGoal_Response_stamp(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::PowerOfTwo_SendGoal_Response>()
{
  return hw4_interfaces::action::builder::Init_PowerOfTwo_SendGoal_Response_accepted();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_PowerOfTwo_SendGoal_Event_response
{
public:
  explicit Init_PowerOfTwo_SendGoal_Event_response(::hw4_interfaces::action::PowerOfTwo_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::hw4_interfaces::action::PowerOfTwo_SendGoal_Event response(::hw4_interfaces::action::PowerOfTwo_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_SendGoal_Event msg_;
};

class Init_PowerOfTwo_SendGoal_Event_request
{
public:
  explicit Init_PowerOfTwo_SendGoal_Event_request(::hw4_interfaces::action::PowerOfTwo_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_PowerOfTwo_SendGoal_Event_response request(::hw4_interfaces::action::PowerOfTwo_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PowerOfTwo_SendGoal_Event_response(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_SendGoal_Event msg_;
};

class Init_PowerOfTwo_SendGoal_Event_info
{
public:
  Init_PowerOfTwo_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerOfTwo_SendGoal_Event_request info(::hw4_interfaces::action::PowerOfTwo_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PowerOfTwo_SendGoal_Event_request(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::PowerOfTwo_SendGoal_Event>()
{
  return hw4_interfaces::action::builder::Init_PowerOfTwo_SendGoal_Event_info();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_PowerOfTwo_GetResult_Request_goal_id
{
public:
  Init_PowerOfTwo_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw4_interfaces::action::PowerOfTwo_GetResult_Request goal_id(::hw4_interfaces::action::PowerOfTwo_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::PowerOfTwo_GetResult_Request>()
{
  return hw4_interfaces::action::builder::Init_PowerOfTwo_GetResult_Request_goal_id();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_PowerOfTwo_GetResult_Response_result
{
public:
  explicit Init_PowerOfTwo_GetResult_Response_result(::hw4_interfaces::action::PowerOfTwo_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::hw4_interfaces::action::PowerOfTwo_GetResult_Response result(::hw4_interfaces::action::PowerOfTwo_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_GetResult_Response msg_;
};

class Init_PowerOfTwo_GetResult_Response_status
{
public:
  Init_PowerOfTwo_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerOfTwo_GetResult_Response_result status(::hw4_interfaces::action::PowerOfTwo_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PowerOfTwo_GetResult_Response_result(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::PowerOfTwo_GetResult_Response>()
{
  return hw4_interfaces::action::builder::Init_PowerOfTwo_GetResult_Response_status();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_PowerOfTwo_GetResult_Event_response
{
public:
  explicit Init_PowerOfTwo_GetResult_Event_response(::hw4_interfaces::action::PowerOfTwo_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::hw4_interfaces::action::PowerOfTwo_GetResult_Event response(::hw4_interfaces::action::PowerOfTwo_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_GetResult_Event msg_;
};

class Init_PowerOfTwo_GetResult_Event_request
{
public:
  explicit Init_PowerOfTwo_GetResult_Event_request(::hw4_interfaces::action::PowerOfTwo_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_PowerOfTwo_GetResult_Event_response request(::hw4_interfaces::action::PowerOfTwo_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PowerOfTwo_GetResult_Event_response(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_GetResult_Event msg_;
};

class Init_PowerOfTwo_GetResult_Event_info
{
public:
  Init_PowerOfTwo_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerOfTwo_GetResult_Event_request info(::hw4_interfaces::action::PowerOfTwo_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PowerOfTwo_GetResult_Event_request(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::PowerOfTwo_GetResult_Event>()
{
  return hw4_interfaces::action::builder::Init_PowerOfTwo_GetResult_Event_info();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_PowerOfTwo_FeedbackMessage_feedback
{
public:
  explicit Init_PowerOfTwo_FeedbackMessage_feedback(::hw4_interfaces::action::PowerOfTwo_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::hw4_interfaces::action::PowerOfTwo_FeedbackMessage feedback(::hw4_interfaces::action::PowerOfTwo_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_FeedbackMessage msg_;
};

class Init_PowerOfTwo_FeedbackMessage_goal_id
{
public:
  Init_PowerOfTwo_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerOfTwo_FeedbackMessage_feedback goal_id(::hw4_interfaces::action::PowerOfTwo_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PowerOfTwo_FeedbackMessage_feedback(msg_);
  }

private:
  ::hw4_interfaces::action::PowerOfTwo_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::PowerOfTwo_FeedbackMessage>()
{
  return hw4_interfaces::action::builder::Init_PowerOfTwo_FeedbackMessage_goal_id();
}

}  // namespace hw4_interfaces

#endif  // HW4_INTERFACES__ACTION__DETAIL__POWER_OF_TWO__BUILDER_HPP_
