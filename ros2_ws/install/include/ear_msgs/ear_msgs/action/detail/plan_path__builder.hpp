// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ear_msgs:action/PlanPath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ear_msgs/action/plan_path.hpp"


#ifndef EAR_MSGS__ACTION__DETAIL__PLAN_PATH__BUILDER_HPP_
#define EAR_MSGS__ACTION__DETAIL__PLAN_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ear_msgs/action/detail/plan_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ear_msgs
{

namespace action
{

namespace builder
{

class Init_PlanPath_Goal_safety_margin_mm
{
public:
  explicit Init_PlanPath_Goal_safety_margin_mm(::ear_msgs::action::PlanPath_Goal & msg)
  : msg_(msg)
  {}
  ::ear_msgs::action::PlanPath_Goal safety_margin_mm(::ear_msgs::action::PlanPath_Goal::_safety_margin_mm_type arg)
  {
    msg_.safety_margin_mm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_Goal msg_;
};

class Init_PlanPath_Goal_tool_diam_mm
{
public:
  explicit Init_PlanPath_Goal_tool_diam_mm(::ear_msgs::action::PlanPath_Goal & msg)
  : msg_(msg)
  {}
  Init_PlanPath_Goal_safety_margin_mm tool_diam_mm(::ear_msgs::action::PlanPath_Goal::_tool_diam_mm_type arg)
  {
    msg_.tool_diam_mm = std::move(arg);
    return Init_PlanPath_Goal_safety_margin_mm(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_Goal msg_;
};

class Init_PlanPath_Goal_target
{
public:
  explicit Init_PlanPath_Goal_target(::ear_msgs::action::PlanPath_Goal & msg)
  : msg_(msg)
  {}
  Init_PlanPath_Goal_tool_diam_mm target(::ear_msgs::action::PlanPath_Goal::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_PlanPath_Goal_tool_diam_mm(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_Goal msg_;
};

class Init_PlanPath_Goal_entry
{
public:
  Init_PlanPath_Goal_entry()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPath_Goal_target entry(::ear_msgs::action::PlanPath_Goal::_entry_type arg)
  {
    msg_.entry = std::move(arg);
    return Init_PlanPath_Goal_target(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::action::PlanPath_Goal>()
{
  return ear_msgs::action::builder::Init_PlanPath_Goal_entry();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace action
{

namespace builder
{

class Init_PlanPath_Result_est_time_s
{
public:
  explicit Init_PlanPath_Result_est_time_s(::ear_msgs::action::PlanPath_Result & msg)
  : msg_(msg)
  {}
  ::ear_msgs::action::PlanPath_Result est_time_s(::ear_msgs::action::PlanPath_Result::_est_time_s_type arg)
  {
    msg_.est_time_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_Result msg_;
};

class Init_PlanPath_Result_min_clearance_mm
{
public:
  explicit Init_PlanPath_Result_min_clearance_mm(::ear_msgs::action::PlanPath_Result & msg)
  : msg_(msg)
  {}
  Init_PlanPath_Result_est_time_s min_clearance_mm(::ear_msgs::action::PlanPath_Result::_min_clearance_mm_type arg)
  {
    msg_.min_clearance_mm = std::move(arg);
    return Init_PlanPath_Result_est_time_s(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_Result msg_;
};

class Init_PlanPath_Result_path
{
public:
  Init_PlanPath_Result_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPath_Result_min_clearance_mm path(::ear_msgs::action::PlanPath_Result::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_PlanPath_Result_min_clearance_mm(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::action::PlanPath_Result>()
{
  return ear_msgs::action::builder::Init_PlanPath_Result_path();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace action
{

namespace builder
{

class Init_PlanPath_Feedback_progress
{
public:
  Init_PlanPath_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ear_msgs::action::PlanPath_Feedback progress(::ear_msgs::action::PlanPath_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::action::PlanPath_Feedback>()
{
  return ear_msgs::action::builder::Init_PlanPath_Feedback_progress();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace action
{

namespace builder
{

class Init_PlanPath_SendGoal_Request_goal
{
public:
  explicit Init_PlanPath_SendGoal_Request_goal(::ear_msgs::action::PlanPath_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ear_msgs::action::PlanPath_SendGoal_Request goal(::ear_msgs::action::PlanPath_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_SendGoal_Request msg_;
};

class Init_PlanPath_SendGoal_Request_goal_id
{
public:
  Init_PlanPath_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPath_SendGoal_Request_goal goal_id(::ear_msgs::action::PlanPath_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PlanPath_SendGoal_Request_goal(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::action::PlanPath_SendGoal_Request>()
{
  return ear_msgs::action::builder::Init_PlanPath_SendGoal_Request_goal_id();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace action
{

namespace builder
{

class Init_PlanPath_SendGoal_Response_stamp
{
public:
  explicit Init_PlanPath_SendGoal_Response_stamp(::ear_msgs::action::PlanPath_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ear_msgs::action::PlanPath_SendGoal_Response stamp(::ear_msgs::action::PlanPath_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_SendGoal_Response msg_;
};

class Init_PlanPath_SendGoal_Response_accepted
{
public:
  Init_PlanPath_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPath_SendGoal_Response_stamp accepted(::ear_msgs::action::PlanPath_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PlanPath_SendGoal_Response_stamp(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::action::PlanPath_SendGoal_Response>()
{
  return ear_msgs::action::builder::Init_PlanPath_SendGoal_Response_accepted();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace action
{

namespace builder
{

class Init_PlanPath_SendGoal_Event_response
{
public:
  explicit Init_PlanPath_SendGoal_Event_response(::ear_msgs::action::PlanPath_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::ear_msgs::action::PlanPath_SendGoal_Event response(::ear_msgs::action::PlanPath_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_SendGoal_Event msg_;
};

class Init_PlanPath_SendGoal_Event_request
{
public:
  explicit Init_PlanPath_SendGoal_Event_request(::ear_msgs::action::PlanPath_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_PlanPath_SendGoal_Event_response request(::ear_msgs::action::PlanPath_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PlanPath_SendGoal_Event_response(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_SendGoal_Event msg_;
};

class Init_PlanPath_SendGoal_Event_info
{
public:
  Init_PlanPath_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPath_SendGoal_Event_request info(::ear_msgs::action::PlanPath_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PlanPath_SendGoal_Event_request(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::action::PlanPath_SendGoal_Event>()
{
  return ear_msgs::action::builder::Init_PlanPath_SendGoal_Event_info();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace action
{

namespace builder
{

class Init_PlanPath_GetResult_Request_goal_id
{
public:
  Init_PlanPath_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ear_msgs::action::PlanPath_GetResult_Request goal_id(::ear_msgs::action::PlanPath_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::action::PlanPath_GetResult_Request>()
{
  return ear_msgs::action::builder::Init_PlanPath_GetResult_Request_goal_id();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace action
{

namespace builder
{

class Init_PlanPath_GetResult_Response_result
{
public:
  explicit Init_PlanPath_GetResult_Response_result(::ear_msgs::action::PlanPath_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ear_msgs::action::PlanPath_GetResult_Response result(::ear_msgs::action::PlanPath_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_GetResult_Response msg_;
};

class Init_PlanPath_GetResult_Response_status
{
public:
  Init_PlanPath_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPath_GetResult_Response_result status(::ear_msgs::action::PlanPath_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PlanPath_GetResult_Response_result(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::action::PlanPath_GetResult_Response>()
{
  return ear_msgs::action::builder::Init_PlanPath_GetResult_Response_status();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace action
{

namespace builder
{

class Init_PlanPath_GetResult_Event_response
{
public:
  explicit Init_PlanPath_GetResult_Event_response(::ear_msgs::action::PlanPath_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::ear_msgs::action::PlanPath_GetResult_Event response(::ear_msgs::action::PlanPath_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_GetResult_Event msg_;
};

class Init_PlanPath_GetResult_Event_request
{
public:
  explicit Init_PlanPath_GetResult_Event_request(::ear_msgs::action::PlanPath_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_PlanPath_GetResult_Event_response request(::ear_msgs::action::PlanPath_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PlanPath_GetResult_Event_response(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_GetResult_Event msg_;
};

class Init_PlanPath_GetResult_Event_info
{
public:
  Init_PlanPath_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPath_GetResult_Event_request info(::ear_msgs::action::PlanPath_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PlanPath_GetResult_Event_request(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::action::PlanPath_GetResult_Event>()
{
  return ear_msgs::action::builder::Init_PlanPath_GetResult_Event_info();
}

}  // namespace ear_msgs


namespace ear_msgs
{

namespace action
{

namespace builder
{

class Init_PlanPath_FeedbackMessage_feedback
{
public:
  explicit Init_PlanPath_FeedbackMessage_feedback(::ear_msgs::action::PlanPath_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ear_msgs::action::PlanPath_FeedbackMessage feedback(::ear_msgs::action::PlanPath_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_FeedbackMessage msg_;
};

class Init_PlanPath_FeedbackMessage_goal_id
{
public:
  Init_PlanPath_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPath_FeedbackMessage_feedback goal_id(::ear_msgs::action::PlanPath_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PlanPath_FeedbackMessage_feedback(msg_);
  }

private:
  ::ear_msgs::action::PlanPath_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ear_msgs::action::PlanPath_FeedbackMessage>()
{
  return ear_msgs::action::builder::Init_PlanPath_FeedbackMessage_goal_id();
}

}  // namespace ear_msgs

#endif  // EAR_MSGS__ACTION__DETAIL__PLAN_PATH__BUILDER_HPP_
