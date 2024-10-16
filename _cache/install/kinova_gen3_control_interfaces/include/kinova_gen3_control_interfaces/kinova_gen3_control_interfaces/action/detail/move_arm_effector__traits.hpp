// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kinova_gen3_control_interfaces:action/MoveArmEffector.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ARM_EFFECTOR__TRAITS_HPP_
#define KINOVA_GEN3_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ARM_EFFECTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kinova_gen3_control_interfaces/action/detail/move_arm_effector__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goal_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace kinova_gen3_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveArmEffector_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_point
  {
    out << "goal_point: ";
    to_flow_style_yaml(msg.goal_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveArmEffector_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_point:\n";
    to_block_style_yaml(msg.goal_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveArmEffector_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kinova_gen3_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kinova_gen3_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinova_gen3_control_interfaces::action::MoveArmEffector_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinova_gen3_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinova_gen3_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kinova_gen3_control_interfaces::action::MoveArmEffector_Goal & msg)
{
  return kinova_gen3_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kinova_gen3_control_interfaces::action::MoveArmEffector_Goal>()
{
  return "kinova_gen3_control_interfaces::action::MoveArmEffector_Goal";
}

template<>
inline const char * name<kinova_gen3_control_interfaces::action::MoveArmEffector_Goal>()
{
  return "kinova_gen3_control_interfaces/action/MoveArmEffector_Goal";
}

template<>
struct has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<kinova_gen3_control_interfaces::action::MoveArmEffector_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace kinova_gen3_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveArmEffector_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveArmEffector_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveArmEffector_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kinova_gen3_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kinova_gen3_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinova_gen3_control_interfaces::action::MoveArmEffector_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinova_gen3_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinova_gen3_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kinova_gen3_control_interfaces::action::MoveArmEffector_Result & msg)
{
  return kinova_gen3_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kinova_gen3_control_interfaces::action::MoveArmEffector_Result>()
{
  return "kinova_gen3_control_interfaces::action::MoveArmEffector_Result";
}

template<>
inline const char * name<kinova_gen3_control_interfaces::action::MoveArmEffector_Result>()
{
  return "kinova_gen3_control_interfaces/action/MoveArmEffector_Result";
}

template<>
struct has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kinova_gen3_control_interfaces::action::MoveArmEffector_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'current_effector_position'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"

namespace kinova_gen3_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveArmEffector_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: current_effector_position
  {
    out << "current_effector_position: ";
    to_flow_style_yaml(msg.current_effector_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveArmEffector_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }

  // member: current_effector_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_effector_position:\n";
    to_block_style_yaml(msg.current_effector_position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveArmEffector_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kinova_gen3_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kinova_gen3_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinova_gen3_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinova_gen3_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback & msg)
{
  return kinova_gen3_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback>()
{
  return "kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback";
}

template<>
inline const char * name<kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback>()
{
  return "kinova_gen3_control_interfaces/action/MoveArmEffector_Feedback";
}

template<>
struct has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "kinova_gen3_control_interfaces/action/detail/move_arm_effector__traits.hpp"

namespace kinova_gen3_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveArmEffector_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveArmEffector_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveArmEffector_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kinova_gen3_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kinova_gen3_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinova_gen3_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinova_gen3_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request & msg)
{
  return kinova_gen3_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request>()
{
  return "kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request";
}

template<>
inline const char * name<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request>()
{
  return "kinova_gen3_control_interfaces/action/MoveArmEffector_SendGoal_Request";
}

template<>
struct has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace kinova_gen3_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveArmEffector_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveArmEffector_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveArmEffector_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kinova_gen3_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kinova_gen3_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinova_gen3_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinova_gen3_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response & msg)
{
  return kinova_gen3_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response>()
{
  return "kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response";
}

template<>
inline const char * name<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response>()
{
  return "kinova_gen3_control_interfaces/action/MoveArmEffector_SendGoal_Response";
}

template<>
struct has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal>()
{
  return "kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal";
}

template<>
inline const char * name<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal>()
{
  return "kinova_gen3_control_interfaces/action/MoveArmEffector_SendGoal";
}

template<>
struct has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request>::value &&
    has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request>::value &&
    has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kinova_gen3_control_interfaces::action::MoveArmEffector_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace kinova_gen3_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveArmEffector_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveArmEffector_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveArmEffector_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kinova_gen3_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kinova_gen3_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinova_gen3_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinova_gen3_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request & msg)
{
  return kinova_gen3_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request>()
{
  return "kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request";
}

template<>
inline const char * name<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request>()
{
  return "kinova_gen3_control_interfaces/action/MoveArmEffector_GetResult_Request";
}

template<>
struct has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "kinova_gen3_control_interfaces/action/detail/move_arm_effector__traits.hpp"

namespace kinova_gen3_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveArmEffector_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveArmEffector_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveArmEffector_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kinova_gen3_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kinova_gen3_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinova_gen3_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinova_gen3_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response & msg)
{
  return kinova_gen3_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response>()
{
  return "kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response";
}

template<>
inline const char * name<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response>()
{
  return "kinova_gen3_control_interfaces/action/MoveArmEffector_GetResult_Response";
}

template<>
struct has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_Result>::value> {};

template<>
struct has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_Result>::value> {};

template<>
struct is_message<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult>()
{
  return "kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult";
}

template<>
inline const char * name<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult>()
{
  return "kinova_gen3_control_interfaces/action/MoveArmEffector_GetResult";
}

template<>
struct has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request>::value &&
    has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request>::value &&
    has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response>::value
  >
{
};

template<>
struct is_service<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kinova_gen3_control_interfaces::action::MoveArmEffector_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "kinova_gen3_control_interfaces/action/detail/move_arm_effector__traits.hpp"

namespace kinova_gen3_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveArmEffector_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveArmEffector_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveArmEffector_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kinova_gen3_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kinova_gen3_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinova_gen3_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinova_gen3_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage & msg)
{
  return kinova_gen3_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage>()
{
  return "kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage";
}

template<>
inline const char * name<kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage>()
{
  return "kinova_gen3_control_interfaces/action/MoveArmEffector_FeedbackMessage";
}

template<>
struct has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<kinova_gen3_control_interfaces::action::MoveArmEffector_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<kinova_gen3_control_interfaces::action::MoveArmEffector>
  : std::true_type
{
};

template<>
struct is_action_goal<kinova_gen3_control_interfaces::action::MoveArmEffector_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<kinova_gen3_control_interfaces::action::MoveArmEffector_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<kinova_gen3_control_interfaces::action::MoveArmEffector_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // KINOVA_GEN3_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ARM_EFFECTOR__TRAITS_HPP_
