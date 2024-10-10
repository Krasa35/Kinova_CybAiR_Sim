// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinova_gen3_control_interfaces:action/MoveArmEffector.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ARM_EFFECTOR__STRUCT_H_
#define KINOVA_GEN3_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ARM_EFFECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/MoveArmEffector in the package kinova_gen3_control_interfaces.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_Goal
{
  geometry_msgs__msg__Point goal_point;
} kinova_gen3_control_interfaces__action__MoveArmEffector_Goal;

// Struct for a sequence of kinova_gen3_control_interfaces__action__MoveArmEffector_Goal.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence
{
  kinova_gen3_control_interfaces__action__MoveArmEffector_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinova_gen3_control_interfaces__action__MoveArmEffector_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveArmEffector in the package kinova_gen3_control_interfaces.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_Result
{
  bool success;
} kinova_gen3_control_interfaces__action__MoveArmEffector_Result;

// Struct for a sequence of kinova_gen3_control_interfaces__action__MoveArmEffector_Result.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence
{
  kinova_gen3_control_interfaces__action__MoveArmEffector_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinova_gen3_control_interfaces__action__MoveArmEffector_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error'
#include "rosidl_runtime_c/string.h"
// Member 'current_effector_position'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/MoveArmEffector in the package kinova_gen3_control_interfaces.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback
{
  rosidl_runtime_c__String error;
  geometry_msgs__msg__Point current_effector_position;
} kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback;

// Struct for a sequence of kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence
{
  kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "kinova_gen3_control_interfaces/action/detail/move_arm_effector__struct.h"

/// Struct defined in action/MoveArmEffector in the package kinova_gen3_control_interfaces.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  kinova_gen3_control_interfaces__action__MoveArmEffector_Goal goal;
} kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request;

// Struct for a sequence of kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence
{
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveArmEffector in the package kinova_gen3_control_interfaces.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response;

// Struct for a sequence of kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence
{
  kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinova_gen3_control_interfaces__action__MoveArmEffector_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveArmEffector in the package kinova_gen3_control_interfaces.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request;

// Struct for a sequence of kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence
{
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "kinova_gen3_control_interfaces/action/detail/move_arm_effector__struct.h"

/// Struct defined in action/MoveArmEffector in the package kinova_gen3_control_interfaces.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response
{
  int8_t status;
  kinova_gen3_control_interfaces__action__MoveArmEffector_Result result;
} kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response;

// Struct for a sequence of kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence
{
  kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinova_gen3_control_interfaces__action__MoveArmEffector_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "kinova_gen3_control_interfaces/action/detail/move_arm_effector__struct.h"

/// Struct defined in action/MoveArmEffector in the package kinova_gen3_control_interfaces.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  kinova_gen3_control_interfaces__action__MoveArmEffector_Feedback feedback;
} kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage;

// Struct for a sequence of kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage.
typedef struct kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence
{
  kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinova_gen3_control_interfaces__action__MoveArmEffector_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINOVA_GEN3_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ARM_EFFECTOR__STRUCT_H_
