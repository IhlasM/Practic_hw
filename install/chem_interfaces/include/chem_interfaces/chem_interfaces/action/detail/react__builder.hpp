// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chem_interfaces:action/React.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chem_interfaces/action/react.hpp"


#ifndef CHEM_INTERFACES__ACTION__DETAIL__REACT__BUILDER_HPP_
#define CHEM_INTERFACES__ACTION__DETAIL__REACT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chem_interfaces/action/detail/react__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chem_interfaces
{

namespace action
{

namespace builder
{

class Init_React_Goal_turtles
{
public:
  Init_React_Goal_turtles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chem_interfaces::action::React_Goal turtles(::chem_interfaces::action::React_Goal::_turtles_type arg)
  {
    msg_.turtles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chem_interfaces::action::React_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chem_interfaces::action::React_Goal>()
{
  return chem_interfaces::action::builder::Init_React_Goal_turtles();
}

}  // namespace chem_interfaces


namespace chem_interfaces
{

namespace action
{

namespace builder
{

class Init_React_Result_success
{
public:
  Init_React_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chem_interfaces::action::React_Result success(::chem_interfaces::action::React_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chem_interfaces::action::React_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chem_interfaces::action::React_Result>()
{
  return chem_interfaces::action::builder::Init_React_Result_success();
}

}  // namespace chem_interfaces


namespace chem_interfaces
{

namespace action
{

namespace builder
{

class Init_React_Feedback_progress
{
public:
  explicit Init_React_Feedback_progress(::chem_interfaces::action::React_Feedback & msg)
  : msg_(msg)
  {}
  ::chem_interfaces::action::React_Feedback progress(::chem_interfaces::action::React_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chem_interfaces::action::React_Feedback msg_;
};

class Init_React_Feedback_stage
{
public:
  Init_React_Feedback_stage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_React_Feedback_progress stage(::chem_interfaces::action::React_Feedback::_stage_type arg)
  {
    msg_.stage = std::move(arg);
    return Init_React_Feedback_progress(msg_);
  }

private:
  ::chem_interfaces::action::React_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chem_interfaces::action::React_Feedback>()
{
  return chem_interfaces::action::builder::Init_React_Feedback_stage();
}

}  // namespace chem_interfaces


namespace chem_interfaces
{

namespace action
{

namespace builder
{

class Init_React_SendGoal_Request_goal
{
public:
  explicit Init_React_SendGoal_Request_goal(::chem_interfaces::action::React_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::chem_interfaces::action::React_SendGoal_Request goal(::chem_interfaces::action::React_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chem_interfaces::action::React_SendGoal_Request msg_;
};

class Init_React_SendGoal_Request_goal_id
{
public:
  Init_React_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_React_SendGoal_Request_goal goal_id(::chem_interfaces::action::React_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_React_SendGoal_Request_goal(msg_);
  }

private:
  ::chem_interfaces::action::React_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chem_interfaces::action::React_SendGoal_Request>()
{
  return chem_interfaces::action::builder::Init_React_SendGoal_Request_goal_id();
}

}  // namespace chem_interfaces


namespace chem_interfaces
{

namespace action
{

namespace builder
{

class Init_React_SendGoal_Response_stamp
{
public:
  explicit Init_React_SendGoal_Response_stamp(::chem_interfaces::action::React_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::chem_interfaces::action::React_SendGoal_Response stamp(::chem_interfaces::action::React_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chem_interfaces::action::React_SendGoal_Response msg_;
};

class Init_React_SendGoal_Response_accepted
{
public:
  Init_React_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_React_SendGoal_Response_stamp accepted(::chem_interfaces::action::React_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_React_SendGoal_Response_stamp(msg_);
  }

private:
  ::chem_interfaces::action::React_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chem_interfaces::action::React_SendGoal_Response>()
{
  return chem_interfaces::action::builder::Init_React_SendGoal_Response_accepted();
}

}  // namespace chem_interfaces


namespace chem_interfaces
{

namespace action
{

namespace builder
{

class Init_React_SendGoal_Event_response
{
public:
  explicit Init_React_SendGoal_Event_response(::chem_interfaces::action::React_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::chem_interfaces::action::React_SendGoal_Event response(::chem_interfaces::action::React_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chem_interfaces::action::React_SendGoal_Event msg_;
};

class Init_React_SendGoal_Event_request
{
public:
  explicit Init_React_SendGoal_Event_request(::chem_interfaces::action::React_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_React_SendGoal_Event_response request(::chem_interfaces::action::React_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_React_SendGoal_Event_response(msg_);
  }

private:
  ::chem_interfaces::action::React_SendGoal_Event msg_;
};

class Init_React_SendGoal_Event_info
{
public:
  Init_React_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_React_SendGoal_Event_request info(::chem_interfaces::action::React_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_React_SendGoal_Event_request(msg_);
  }

private:
  ::chem_interfaces::action::React_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chem_interfaces::action::React_SendGoal_Event>()
{
  return chem_interfaces::action::builder::Init_React_SendGoal_Event_info();
}

}  // namespace chem_interfaces


namespace chem_interfaces
{

namespace action
{

namespace builder
{

class Init_React_GetResult_Request_goal_id
{
public:
  Init_React_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chem_interfaces::action::React_GetResult_Request goal_id(::chem_interfaces::action::React_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chem_interfaces::action::React_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chem_interfaces::action::React_GetResult_Request>()
{
  return chem_interfaces::action::builder::Init_React_GetResult_Request_goal_id();
}

}  // namespace chem_interfaces


namespace chem_interfaces
{

namespace action
{

namespace builder
{

class Init_React_GetResult_Response_result
{
public:
  explicit Init_React_GetResult_Response_result(::chem_interfaces::action::React_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::chem_interfaces::action::React_GetResult_Response result(::chem_interfaces::action::React_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chem_interfaces::action::React_GetResult_Response msg_;
};

class Init_React_GetResult_Response_status
{
public:
  Init_React_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_React_GetResult_Response_result status(::chem_interfaces::action::React_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_React_GetResult_Response_result(msg_);
  }

private:
  ::chem_interfaces::action::React_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chem_interfaces::action::React_GetResult_Response>()
{
  return chem_interfaces::action::builder::Init_React_GetResult_Response_status();
}

}  // namespace chem_interfaces


namespace chem_interfaces
{

namespace action
{

namespace builder
{

class Init_React_GetResult_Event_response
{
public:
  explicit Init_React_GetResult_Event_response(::chem_interfaces::action::React_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::chem_interfaces::action::React_GetResult_Event response(::chem_interfaces::action::React_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chem_interfaces::action::React_GetResult_Event msg_;
};

class Init_React_GetResult_Event_request
{
public:
  explicit Init_React_GetResult_Event_request(::chem_interfaces::action::React_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_React_GetResult_Event_response request(::chem_interfaces::action::React_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_React_GetResult_Event_response(msg_);
  }

private:
  ::chem_interfaces::action::React_GetResult_Event msg_;
};

class Init_React_GetResult_Event_info
{
public:
  Init_React_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_React_GetResult_Event_request info(::chem_interfaces::action::React_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_React_GetResult_Event_request(msg_);
  }

private:
  ::chem_interfaces::action::React_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chem_interfaces::action::React_GetResult_Event>()
{
  return chem_interfaces::action::builder::Init_React_GetResult_Event_info();
}

}  // namespace chem_interfaces


namespace chem_interfaces
{

namespace action
{

namespace builder
{

class Init_React_FeedbackMessage_feedback
{
public:
  explicit Init_React_FeedbackMessage_feedback(::chem_interfaces::action::React_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::chem_interfaces::action::React_FeedbackMessage feedback(::chem_interfaces::action::React_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chem_interfaces::action::React_FeedbackMessage msg_;
};

class Init_React_FeedbackMessage_goal_id
{
public:
  Init_React_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_React_FeedbackMessage_feedback goal_id(::chem_interfaces::action::React_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_React_FeedbackMessage_feedback(msg_);
  }

private:
  ::chem_interfaces::action::React_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chem_interfaces::action::React_FeedbackMessage>()
{
  return chem_interfaces::action::builder::Init_React_FeedbackMessage_goal_id();
}

}  // namespace chem_interfaces

#endif  // CHEM_INTERFACES__ACTION__DETAIL__REACT__BUILDER_HPP_
