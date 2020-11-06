// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:action/FollowJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__FOLLOW_JOINT_TRAJECTORY__STRUCT_H_
#define CONTROL_MSGS__ACTION__DETAIL__FOLLOW_JOINT_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"
// Member 'path_tolerance'
// Member 'goal_tolerance'
#include "control_msgs/msg/detail/joint_tolerance__struct.h"
// Member 'goal_time_tolerance'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in action/FollowJointTrajectory in the package control_msgs.
typedef struct control_msgs__action__FollowJointTrajectory_Goal
{
  trajectory_msgs__msg__JointTrajectory trajectory;
  control_msgs__msg__JointTolerance__Sequence path_tolerance;
  control_msgs__msg__JointTolerance__Sequence goal_tolerance;
  builtin_interfaces__msg__Duration goal_time_tolerance;
} control_msgs__action__FollowJointTrajectory_Goal;

// Struct for a sequence of control_msgs__action__FollowJointTrajectory_Goal.
typedef struct control_msgs__action__FollowJointTrajectory_Goal__Sequence
{
  control_msgs__action__FollowJointTrajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__FollowJointTrajectory_Goal__Sequence;


// Constants defined in the message

/// Constant 'SUCCESSFUL'.
enum
{
  control_msgs__action__FollowJointTrajectory_Result__SUCCESSFUL = 0l
};

/// Constant 'INVALID_GOAL'.
enum
{
  control_msgs__action__FollowJointTrajectory_Result__INVALID_GOAL = -1l
};

/// Constant 'INVALID_JOINTS'.
enum
{
  control_msgs__action__FollowJointTrajectory_Result__INVALID_JOINTS = -2l
};

/// Constant 'OLD_HEADER_TIMESTAMP'.
enum
{
  control_msgs__action__FollowJointTrajectory_Result__OLD_HEADER_TIMESTAMP = -3l
};

/// Constant 'PATH_TOLERANCE_VIOLATED'.
enum
{
  control_msgs__action__FollowJointTrajectory_Result__PATH_TOLERANCE_VIOLATED = -4l
};

/// Constant 'GOAL_TOLERANCE_VIOLATED'.
enum
{
  control_msgs__action__FollowJointTrajectory_Result__GOAL_TOLERANCE_VIOLATED = -5l
};

// Include directives for member types
// Member 'error_string'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/FollowJointTrajectory in the package control_msgs.
typedef struct control_msgs__action__FollowJointTrajectory_Result
{
  int32_t error_code;
  rosidl_runtime_c__String error_string;
} control_msgs__action__FollowJointTrajectory_Result;

// Struct for a sequence of control_msgs__action__FollowJointTrajectory_Result.
typedef struct control_msgs__action__FollowJointTrajectory_Result__Sequence
{
  control_msgs__action__FollowJointTrajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__FollowJointTrajectory_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'joint_names'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"

// Struct defined in action/FollowJointTrajectory in the package control_msgs.
typedef struct control_msgs__action__FollowJointTrajectory_Feedback
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence joint_names;
  trajectory_msgs__msg__JointTrajectoryPoint desired;
  trajectory_msgs__msg__JointTrajectoryPoint actual;
  trajectory_msgs__msg__JointTrajectoryPoint error;
} control_msgs__action__FollowJointTrajectory_Feedback;

// Struct for a sequence of control_msgs__action__FollowJointTrajectory_Feedback.
typedef struct control_msgs__action__FollowJointTrajectory_Feedback__Sequence
{
  control_msgs__action__FollowJointTrajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__FollowJointTrajectory_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "control_msgs/action/detail/follow_joint_trajectory__struct.h"

// Struct defined in action/FollowJointTrajectory in the package control_msgs.
typedef struct control_msgs__action__FollowJointTrajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__FollowJointTrajectory_Goal goal;
} control_msgs__action__FollowJointTrajectory_SendGoal_Request;

// Struct for a sequence of control_msgs__action__FollowJointTrajectory_SendGoal_Request.
typedef struct control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence
{
  control_msgs__action__FollowJointTrajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/FollowJointTrajectory in the package control_msgs.
typedef struct control_msgs__action__FollowJointTrajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} control_msgs__action__FollowJointTrajectory_SendGoal_Response;

// Struct for a sequence of control_msgs__action__FollowJointTrajectory_SendGoal_Response.
typedef struct control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence
{
  control_msgs__action__FollowJointTrajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/FollowJointTrajectory in the package control_msgs.
typedef struct control_msgs__action__FollowJointTrajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} control_msgs__action__FollowJointTrajectory_GetResult_Request;

// Struct for a sequence of control_msgs__action__FollowJointTrajectory_GetResult_Request.
typedef struct control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence
{
  control_msgs__action__FollowJointTrajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"

// Struct defined in action/FollowJointTrajectory in the package control_msgs.
typedef struct control_msgs__action__FollowJointTrajectory_GetResult_Response
{
  int8_t status;
  control_msgs__action__FollowJointTrajectory_Result result;
} control_msgs__action__FollowJointTrajectory_GetResult_Response;

// Struct for a sequence of control_msgs__action__FollowJointTrajectory_GetResult_Response.
typedef struct control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence
{
  control_msgs__action__FollowJointTrajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"

// Struct defined in action/FollowJointTrajectory in the package control_msgs.
typedef struct control_msgs__action__FollowJointTrajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__FollowJointTrajectory_Feedback feedback;
} control_msgs__action__FollowJointTrajectory_FeedbackMessage;

// Struct for a sequence of control_msgs__action__FollowJointTrajectory_FeedbackMessage.
typedef struct control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence
{
  control_msgs__action__FollowJointTrajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__ACTION__DETAIL__FOLLOW_JOINT_TRAJECTORY__STRUCT_H_
