// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinova_gen3_control_interfaces:action/MoveArmEffector.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ARM_EFFECTOR__BUILDER_HPP_
#define KINOVA_GEN3_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ARM_EFFECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinova_gen3_control_interfaces/action/detail/move_arm_effector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kinova_gen3_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveArmEffector_Goal_goal_point
{
public:
  Init_MoveArmEffector_Goal_goal_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_Goal goal_point(::kinova_gen3_control_interfaces::action::MoveArmEffector_Goal::_goal_point_type arg)
  {
    msg_.goal_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_control_interfaces::action::MoveArmEffector_Goal>()
{
  return kinova_gen3_control_interfaces::action::builder::Init_MoveArmEffector_Goal_goal_point();
}

}  // namespace kinova_gen3_control_interfaces


namespace kinova_gen3_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveArmEffector_Result_success
{
public:
  Init_MoveArmEffector_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_Result success(::kinova_gen3_control_interfaces::action::MoveArmEffector_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_control_interfaces::action::MoveArmEffector_Result>()
{
  return kinova_gen3_control_interfaces::action::builder::Init_MoveArmEffector_Result_success();
}

}  // namespace kinova_gen3_control_interfaces


namespace kinova_gen3_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveArmEffector_Feedback_current_effector_position
{
public:
  explicit Init_MoveArmEffector_Feedback_current_effector_position(::kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback & msg)
  : msg_(msg)
  {}
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback current_effector_position(::kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback::_current_effector_position_type arg)
  {
    msg_.current_effector_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback msg_;
};

class Init_MoveArmEffector_Feedback_error
{
public:
  Init_MoveArmEffector_Feedback_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArmEffector_Feedback_current_effector_position error(::kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_MoveArmEffector_Feedback_current_effector_position(msg_);
  }

private:
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback>()
{
  return kinova_gen3_control_interfaces::action::builder::Init_MoveArmEffector_Feedback_error();
}

}  // namespace kinova_gen3_control_interfaces


namespace kinova_gen3_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveArmEffector_SendGoal_Request_goal
{
public:
  explicit Init_MoveArmEffector_SendGoal_Request_goal(::kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request goal(::kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request msg_;
};

class Init_MoveArmEffector_SendGoal_Request_goal_id
{
public:
  Init_MoveArmEffector_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArmEffector_SendGoal_Request_goal goal_id(::kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveArmEffector_SendGoal_Request_goal(msg_);
  }

private:
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request>()
{
  return kinova_gen3_control_interfaces::action::builder::Init_MoveArmEffector_SendGoal_Request_goal_id();
}

}  // namespace kinova_gen3_control_interfaces


namespace kinova_gen3_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveArmEffector_SendGoal_Response_stamp
{
public:
  explicit Init_MoveArmEffector_SendGoal_Response_stamp(::kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response stamp(::kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response msg_;
};

class Init_MoveArmEffector_SendGoal_Response_accepted
{
public:
  Init_MoveArmEffector_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArmEffector_SendGoal_Response_stamp accepted(::kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveArmEffector_SendGoal_Response_stamp(msg_);
  }

private:
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response>()
{
  return kinova_gen3_control_interfaces::action::builder::Init_MoveArmEffector_SendGoal_Response_accepted();
}

}  // namespace kinova_gen3_control_interfaces


namespace kinova_gen3_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveArmEffector_GetResult_Request_goal_id
{
public:
  Init_MoveArmEffector_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request goal_id(::kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request>()
{
  return kinova_gen3_control_interfaces::action::builder::Init_MoveArmEffector_GetResult_Request_goal_id();
}

}  // namespace kinova_gen3_control_interfaces


namespace kinova_gen3_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveArmEffector_GetResult_Response_result
{
public:
  explicit Init_MoveArmEffector_GetResult_Response_result(::kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response result(::kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response msg_;
};

class Init_MoveArmEffector_GetResult_Response_status
{
public:
  Init_MoveArmEffector_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArmEffector_GetResult_Response_result status(::kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveArmEffector_GetResult_Response_result(msg_);
  }

private:
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response>()
{
  return kinova_gen3_control_interfaces::action::builder::Init_MoveArmEffector_GetResult_Response_status();
}

}  // namespace kinova_gen3_control_interfaces


namespace kinova_gen3_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveArmEffector_FeedbackMessage_feedback
{
public:
  explicit Init_MoveArmEffector_FeedbackMessage_feedback(::kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage feedback(::kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage msg_;
};

class Init_MoveArmEffector_FeedbackMessage_goal_id
{
public:
  Init_MoveArmEffector_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArmEffector_FeedbackMessage_feedback goal_id(::kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveArmEffector_FeedbackMessage_feedback(msg_);
  }

private:
  ::kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage>()
{
  return kinova_gen3_control_interfaces::action::builder::Init_MoveArmEffector_FeedbackMessage_goal_id();
}

}  // namespace kinova_gen3_control_interfaces

#endif  // KINOVA_GEN3_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ARM_EFFECTOR__BUILDER_HPP_
