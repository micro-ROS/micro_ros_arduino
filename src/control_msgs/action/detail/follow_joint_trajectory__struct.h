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
// Member 'multi_dof_trajectory'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__struct.h"
// Member 'path_tolerance'
// Member 'goal_tolerance'
#include "control_msgs/msg/detail/joint_tolerance__struct.h"
// Member 'component_path_tolerance'
// Member 'component_goal_tolerance'
#include "control_msgs/msg/detail/joint_component_tolerance__struct.h"
// Member 'goal_time_tolerance'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/FollowJointTrajectory in the package control_msgs.
typedef struct control_msgs__action__FollowJointTrajectory_Goal
{
  trajectory_msgs__msg__JointTrajectory trajectory;
  /// The trajectory for all planar or floating joints (i.e. individual joints with more than one DOF)
  trajectory_msgs__msg__MultiDOFJointTrajectory multi_dof_trajectory;
  /// Tolerances for the trajectory.  If the measured joint values fall
  /// outside the tolerances the trajectory goal is aborted.  Any
  /// tolerances that are not specified (by being omitted or set to 0) are
  /// set to the defaults for the action server (often taken from the
  /// parameter server).
  /// Tolerances applied to the joints as the trajectory is executed.  If
  /// violated, the goal aborts with error_code set to
  /// PATH_TOLERANCE_VIOLATED.
  control_msgs__msg__JointTolerance__Sequence path_tolerance;
  control_msgs__msg__JointComponentTolerance__Sequence component_path_tolerance;
  /// To report success, the joints must be within goal_tolerance of the
  /// final trajectory value.  The goal must be achieved by time the
  /// trajectory ends plus goal_time_tolerance.  (goal_time_tolerance
  /// allows some leeway in time, so that the trajectory goal can still
  /// succeed even if the joints reach the goal some time after the
  /// precise end time of the trajectory).
  ///
  /// If the joints are not within goal_tolerance after "trajectory finish
  /// time" + goal_time_tolerance, the goal aborts with error_code set to
  /// GOAL_TOLERANCE_VIOLATED
  control_msgs__msg__JointTolerance__Sequence goal_tolerance;
  control_msgs__msg__JointComponentTolerance__Sequence component_goal_tolerance;
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

/// Struct defined in action/FollowJointTrajectory in the package control_msgs.
typedef struct control_msgs__action__FollowJointTrajectory_Result
{
  int32_t error_code;
  /// Human readable description of the error code. Contains complementary
  /// information that is especially useful when execution fails, for instance:
  /// - INVALID_GOAL: The reason for the invalid goal (e.g., the requested
  ///   trajectory is in the past).
  /// - INVALID_JOINTS: The mismatch between the expected controller joints
  ///   and those provided in the goal.
  /// - PATH_TOLERANCE_VIOLATED and GOAL_TOLERANCE_VIOLATED: Which joint
  ///   violated which tolerance, and by how much.
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
// Member 'multi_dof_joint_names'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"
// Member 'multi_dof_desired'
// Member 'multi_dof_actual'
// Member 'multi_dof_error'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__struct.h"

/// Struct defined in action/FollowJointTrajectory in the package control_msgs.
typedef struct control_msgs__action__FollowJointTrajectory_Feedback
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence joint_names;
  trajectory_msgs__msg__JointTrajectoryPoint desired;
  trajectory_msgs__msg__JointTrajectoryPoint actual;
  trajectory_msgs__msg__JointTrajectoryPoint error;
  rosidl_runtime_c__String__Sequence multi_dof_joint_names;
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint multi_dof_desired;
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint multi_dof_actual;
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint multi_dof_error;
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

/// Struct defined in action/FollowJointTrajectory in the package control_msgs.
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

/// Struct defined in action/FollowJointTrajectory in the package control_msgs.
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

/// Struct defined in action/FollowJointTrajectory in the package control_msgs.
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

/// Struct defined in action/FollowJointTrajectory in the package control_msgs.
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

/// Struct defined in action/FollowJointTrajectory in the package control_msgs.
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
