// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:action/SingleJointPosition.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__SINGLE_JOINT_POSITION__STRUCT_H_
#define CONTROL_MSGS__ACTION__DETAIL__SINGLE_JOINT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'min_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_Goal
{
  double position;
  builtin_interfaces__msg__Duration min_duration;
  double max_velocity;
} control_msgs__action__SingleJointPosition_Goal;

// Struct for a sequence of control_msgs__action__SingleJointPosition_Goal.
typedef struct control_msgs__action__SingleJointPosition_Goal__Sequence
{
  control_msgs__action__SingleJointPosition_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_Result
{
  uint8_t structure_needs_at_least_one_member;
} control_msgs__action__SingleJointPosition_Result;

// Struct for a sequence of control_msgs__action__SingleJointPosition_Result.
typedef struct control_msgs__action__SingleJointPosition_Result__Sequence
{
  control_msgs__action__SingleJointPosition_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_Feedback
{
  std_msgs__msg__Header header;
  double position;
  double velocity;
  double error;
} control_msgs__action__SingleJointPosition_Feedback;

// Struct for a sequence of control_msgs__action__SingleJointPosition_Feedback.
typedef struct control_msgs__action__SingleJointPosition_Feedback__Sequence
{
  control_msgs__action__SingleJointPosition_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "control_msgs/action/detail/single_joint_position__struct.h"

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__SingleJointPosition_Goal goal;
} control_msgs__action__SingleJointPosition_SendGoal_Request;

// Struct for a sequence of control_msgs__action__SingleJointPosition_SendGoal_Request.
typedef struct control_msgs__action__SingleJointPosition_SendGoal_Request__Sequence
{
  control_msgs__action__SingleJointPosition_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} control_msgs__action__SingleJointPosition_SendGoal_Response;

// Struct for a sequence of control_msgs__action__SingleJointPosition_SendGoal_Response.
typedef struct control_msgs__action__SingleJointPosition_SendGoal_Response__Sequence
{
  control_msgs__action__SingleJointPosition_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} control_msgs__action__SingleJointPosition_GetResult_Request;

// Struct for a sequence of control_msgs__action__SingleJointPosition_GetResult_Request.
typedef struct control_msgs__action__SingleJointPosition_GetResult_Request__Sequence
{
  control_msgs__action__SingleJointPosition_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/single_joint_position__struct.h"

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_GetResult_Response
{
  int8_t status;
  control_msgs__action__SingleJointPosition_Result result;
} control_msgs__action__SingleJointPosition_GetResult_Response;

// Struct for a sequence of control_msgs__action__SingleJointPosition_GetResult_Response.
typedef struct control_msgs__action__SingleJointPosition_GetResult_Response__Sequence
{
  control_msgs__action__SingleJointPosition_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "control_msgs/action/detail/single_joint_position__struct.h"

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__SingleJointPosition_Feedback feedback;
} control_msgs__action__SingleJointPosition_FeedbackMessage;

// Struct for a sequence of control_msgs__action__SingleJointPosition_FeedbackMessage.
typedef struct control_msgs__action__SingleJointPosition_FeedbackMessage__Sequence
{
  control_msgs__action__SingleJointPosition_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__ACTION__DETAIL__SINGLE_JOINT_POSITION__STRUCT_H_
