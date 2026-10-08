// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from reaction_interfaces:action/RandomWalk.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "reaction_interfaces/action/random_walk.hpp"


#ifndef REACTION_INTERFACES__ACTION__DETAIL__RANDOM_WALK__BUILDER_HPP_
#define REACTION_INTERFACES__ACTION__DETAIL__RANDOM_WALK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "reaction_interfaces/action/detail/random_walk__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace reaction_interfaces
{

namespace action
{

namespace builder
{

class Init_RandomWalk_Goal_duration
{
public:
  explicit Init_RandomWalk_Goal_duration(::reaction_interfaces::action::RandomWalk_Goal & msg)
  : msg_(msg)
  {}
  ::reaction_interfaces::action::RandomWalk_Goal duration(::reaction_interfaces::action::RandomWalk_Goal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_Goal msg_;
};

class Init_RandomWalk_Goal_name
{
public:
  Init_RandomWalk_Goal_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RandomWalk_Goal_duration name(::reaction_interfaces::action::RandomWalk_Goal::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RandomWalk_Goal_duration(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reaction_interfaces::action::RandomWalk_Goal>()
{
  return reaction_interfaces::action::builder::Init_RandomWalk_Goal_name();
}

}  // namespace reaction_interfaces


namespace reaction_interfaces
{

namespace action
{

namespace builder
{

class Init_RandomWalk_Result_completed
{
public:
  Init_RandomWalk_Result_completed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::reaction_interfaces::action::RandomWalk_Result completed(::reaction_interfaces::action::RandomWalk_Result::_completed_type arg)
  {
    msg_.completed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reaction_interfaces::action::RandomWalk_Result>()
{
  return reaction_interfaces::action::builder::Init_RandomWalk_Result_completed();
}

}  // namespace reaction_interfaces


namespace reaction_interfaces
{

namespace action
{

namespace builder
{

class Init_RandomWalk_Feedback_time_left
{
public:
  Init_RandomWalk_Feedback_time_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::reaction_interfaces::action::RandomWalk_Feedback time_left(::reaction_interfaces::action::RandomWalk_Feedback::_time_left_type arg)
  {
    msg_.time_left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reaction_interfaces::action::RandomWalk_Feedback>()
{
  return reaction_interfaces::action::builder::Init_RandomWalk_Feedback_time_left();
}

}  // namespace reaction_interfaces


namespace reaction_interfaces
{

namespace action
{

namespace builder
{

class Init_RandomWalk_SendGoal_Request_goal
{
public:
  explicit Init_RandomWalk_SendGoal_Request_goal(::reaction_interfaces::action::RandomWalk_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::reaction_interfaces::action::RandomWalk_SendGoal_Request goal(::reaction_interfaces::action::RandomWalk_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_SendGoal_Request msg_;
};

class Init_RandomWalk_SendGoal_Request_goal_id
{
public:
  Init_RandomWalk_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RandomWalk_SendGoal_Request_goal goal_id(::reaction_interfaces::action::RandomWalk_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RandomWalk_SendGoal_Request_goal(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reaction_interfaces::action::RandomWalk_SendGoal_Request>()
{
  return reaction_interfaces::action::builder::Init_RandomWalk_SendGoal_Request_goal_id();
}

}  // namespace reaction_interfaces


namespace reaction_interfaces
{

namespace action
{

namespace builder
{

class Init_RandomWalk_SendGoal_Response_stamp
{
public:
  explicit Init_RandomWalk_SendGoal_Response_stamp(::reaction_interfaces::action::RandomWalk_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::reaction_interfaces::action::RandomWalk_SendGoal_Response stamp(::reaction_interfaces::action::RandomWalk_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_SendGoal_Response msg_;
};

class Init_RandomWalk_SendGoal_Response_accepted
{
public:
  Init_RandomWalk_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RandomWalk_SendGoal_Response_stamp accepted(::reaction_interfaces::action::RandomWalk_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RandomWalk_SendGoal_Response_stamp(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reaction_interfaces::action::RandomWalk_SendGoal_Response>()
{
  return reaction_interfaces::action::builder::Init_RandomWalk_SendGoal_Response_accepted();
}

}  // namespace reaction_interfaces


namespace reaction_interfaces
{

namespace action
{

namespace builder
{

class Init_RandomWalk_SendGoal_Event_response
{
public:
  explicit Init_RandomWalk_SendGoal_Event_response(::reaction_interfaces::action::RandomWalk_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::reaction_interfaces::action::RandomWalk_SendGoal_Event response(::reaction_interfaces::action::RandomWalk_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_SendGoal_Event msg_;
};

class Init_RandomWalk_SendGoal_Event_request
{
public:
  explicit Init_RandomWalk_SendGoal_Event_request(::reaction_interfaces::action::RandomWalk_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_RandomWalk_SendGoal_Event_response request(::reaction_interfaces::action::RandomWalk_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RandomWalk_SendGoal_Event_response(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_SendGoal_Event msg_;
};

class Init_RandomWalk_SendGoal_Event_info
{
public:
  Init_RandomWalk_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RandomWalk_SendGoal_Event_request info(::reaction_interfaces::action::RandomWalk_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RandomWalk_SendGoal_Event_request(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reaction_interfaces::action::RandomWalk_SendGoal_Event>()
{
  return reaction_interfaces::action::builder::Init_RandomWalk_SendGoal_Event_info();
}

}  // namespace reaction_interfaces


namespace reaction_interfaces
{

namespace action
{

namespace builder
{

class Init_RandomWalk_GetResult_Request_goal_id
{
public:
  Init_RandomWalk_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::reaction_interfaces::action::RandomWalk_GetResult_Request goal_id(::reaction_interfaces::action::RandomWalk_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reaction_interfaces::action::RandomWalk_GetResult_Request>()
{
  return reaction_interfaces::action::builder::Init_RandomWalk_GetResult_Request_goal_id();
}

}  // namespace reaction_interfaces


namespace reaction_interfaces
{

namespace action
{

namespace builder
{

class Init_RandomWalk_GetResult_Response_result
{
public:
  explicit Init_RandomWalk_GetResult_Response_result(::reaction_interfaces::action::RandomWalk_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::reaction_interfaces::action::RandomWalk_GetResult_Response result(::reaction_interfaces::action::RandomWalk_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_GetResult_Response msg_;
};

class Init_RandomWalk_GetResult_Response_status
{
public:
  Init_RandomWalk_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RandomWalk_GetResult_Response_result status(::reaction_interfaces::action::RandomWalk_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RandomWalk_GetResult_Response_result(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reaction_interfaces::action::RandomWalk_GetResult_Response>()
{
  return reaction_interfaces::action::builder::Init_RandomWalk_GetResult_Response_status();
}

}  // namespace reaction_interfaces


namespace reaction_interfaces
{

namespace action
{

namespace builder
{

class Init_RandomWalk_GetResult_Event_response
{
public:
  explicit Init_RandomWalk_GetResult_Event_response(::reaction_interfaces::action::RandomWalk_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::reaction_interfaces::action::RandomWalk_GetResult_Event response(::reaction_interfaces::action::RandomWalk_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_GetResult_Event msg_;
};

class Init_RandomWalk_GetResult_Event_request
{
public:
  explicit Init_RandomWalk_GetResult_Event_request(::reaction_interfaces::action::RandomWalk_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_RandomWalk_GetResult_Event_response request(::reaction_interfaces::action::RandomWalk_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RandomWalk_GetResult_Event_response(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_GetResult_Event msg_;
};

class Init_RandomWalk_GetResult_Event_info
{
public:
  Init_RandomWalk_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RandomWalk_GetResult_Event_request info(::reaction_interfaces::action::RandomWalk_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RandomWalk_GetResult_Event_request(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reaction_interfaces::action::RandomWalk_GetResult_Event>()
{
  return reaction_interfaces::action::builder::Init_RandomWalk_GetResult_Event_info();
}

}  // namespace reaction_interfaces


namespace reaction_interfaces
{

namespace action
{

namespace builder
{

class Init_RandomWalk_FeedbackMessage_feedback
{
public:
  explicit Init_RandomWalk_FeedbackMessage_feedback(::reaction_interfaces::action::RandomWalk_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::reaction_interfaces::action::RandomWalk_FeedbackMessage feedback(::reaction_interfaces::action::RandomWalk_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_FeedbackMessage msg_;
};

class Init_RandomWalk_FeedbackMessage_goal_id
{
public:
  Init_RandomWalk_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RandomWalk_FeedbackMessage_feedback goal_id(::reaction_interfaces::action::RandomWalk_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RandomWalk_FeedbackMessage_feedback(msg_);
  }

private:
  ::reaction_interfaces::action::RandomWalk_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reaction_interfaces::action::RandomWalk_FeedbackMessage>()
{
  return reaction_interfaces::action::builder::Init_RandomWalk_FeedbackMessage_goal_id();
}

}  // namespace reaction_interfaces

#endif  // REACTION_INTERFACES__ACTION__DETAIL__RANDOM_WALK__BUILDER_HPP_
