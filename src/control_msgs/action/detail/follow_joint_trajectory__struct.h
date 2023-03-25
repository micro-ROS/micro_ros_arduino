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

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory__TYPE_HASH = {1, {
    0x73, 0x8e, 0xbc, 0xb7, 0xa2, 0xd7, 0xcf, 0xa4,
    0x2f, 0x9f, 0x10, 0x01, 0xcc, 0x99, 0xce, 0x3a,
    0x43, 0x83, 0xd1, 0xcf, 0xe5, 0x08, 0x01, 0x5d,
    0x9b, 0xe8, 0x48, 0x5e, 0x4b, 0x1c, 0x66, 0xf6,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_Goal__TYPE_HASH = {1, {
    0x8a, 0x90, 0x60, 0x70, 0x4b, 0x26, 0x96, 0x08,
    0xf5, 0xa3, 0x40, 0x93, 0x4c, 0xc2, 0x6e, 0x66,
    0x86, 0x9d, 0xd1, 0x4b, 0xda, 0xc2, 0x9e, 0x2e,
    0x7f, 0xd9, 0xec, 0x8b, 0x98, 0x82, 0xd2, 0x05,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_Result__TYPE_HASH = {1, {
    0x80, 0x02, 0xe9, 0x9e, 0xd2, 0xc1, 0x4c, 0x6f,
    0xaa, 0x52, 0x2f, 0x2a, 0x93, 0xc2, 0x6d, 0x74,
    0x4c, 0x59, 0x82, 0xf2, 0x54, 0xf9, 0xe9, 0x8f,
    0xf9, 0xc6, 0xf1, 0x97, 0x89, 0xbd, 0xb2, 0x20,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_Feedback__TYPE_HASH = {1, {
    0x3f, 0xd0, 0xaa, 0xec, 0xf7, 0x17, 0x25, 0x12,
    0x1a, 0xe1, 0xff, 0x7f, 0x01, 0x09, 0x8a, 0x5e,
    0x0d, 0xa5, 0x81, 0xe6, 0x72, 0xbe, 0x18, 0xa6,
    0xb2, 0xc2, 0x86, 0xcb, 0x43, 0xd9, 0x6b, 0x49,
  }};

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

static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_SendGoal__TYPE_HASH = {1, {
    0xb1, 0x37, 0x89, 0xdd, 0xdc, 0x32, 0x5a, 0x7a,
    0x96, 0x28, 0x25, 0xc4, 0x5e, 0x28, 0xc7, 0x7d,
    0x37, 0x23, 0x7e, 0xc1, 0x29, 0xdd, 0x0c, 0x34,
    0xdc, 0x59, 0x94, 0x56, 0x29, 0x38, 0xc5, 0x7f,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_SendGoal_Request__TYPE_HASH = {1, {
    0x17, 0x9c, 0x93, 0x69, 0x1f, 0x1f, 0x6d, 0x1d,
    0x11, 0x58, 0x81, 0xff, 0x88, 0xc3, 0x91, 0x7b,
    0x7c, 0xc6, 0xea, 0xc2, 0xba, 0x4b, 0xf5, 0x67,
    0x66, 0xcc, 0x7c, 0x43, 0x89, 0xe1, 0x9e, 0xf1,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_SendGoal_Response__TYPE_HASH = {1, {
    0xe6, 0xa4, 0x8b, 0xa7, 0x40, 0xae, 0x25, 0x45,
    0x00, 0x12, 0x9a, 0x87, 0x7f, 0x0b, 0x07, 0x1b,
    0xe8, 0x66, 0x3a, 0x11, 0x5d, 0xa1, 0xa5, 0x39,
    0xb7, 0x45, 0x99, 0xcc, 0x97, 0x92, 0x1f, 0xbf,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_SendGoal_Event__TYPE_HASH = {1, {
    0x90, 0x6d, 0xd5, 0x66, 0x30, 0x8d, 0xb0, 0x26,
    0x73, 0xc7, 0x3c, 0x65, 0x4f, 0x69, 0xbd, 0xd8,
    0x47, 0x38, 0x58, 0x96, 0x29, 0xc1, 0xbc, 0x28,
    0x41, 0xdd, 0xb4, 0x90, 0x59, 0xed, 0x1c, 0x6f,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  control_msgs__action__FollowJointTrajectory_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  control_msgs__action__FollowJointTrajectory_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/FollowJointTrajectory in the package control_msgs.
typedef struct control_msgs__action__FollowJointTrajectory_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence request;
  control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence response;
} control_msgs__action__FollowJointTrajectory_SendGoal_Event;

// Struct for a sequence of control_msgs__action__FollowJointTrajectory_SendGoal_Event.
typedef struct control_msgs__action__FollowJointTrajectory_SendGoal_Event__Sequence
{
  control_msgs__action__FollowJointTrajectory_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__FollowJointTrajectory_SendGoal_Event__Sequence;

static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_GetResult__TYPE_HASH = {1, {
    0xe3, 0xce, 0xb3, 0x8e, 0x3e, 0x18, 0x67, 0xc8,
    0xdc, 0x0f, 0x46, 0x01, 0x4d, 0xf2, 0x6e, 0x90,
    0xeb, 0x93, 0x42, 0x2f, 0x27, 0xe9, 0xe9, 0x7f,
    0x93, 0x6e, 0x07, 0xf9, 0x4b, 0xe4, 0xbc, 0x8b,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_GetResult_Request__TYPE_HASH = {1, {
    0xec, 0xf7, 0xea, 0x84, 0x63, 0xd3, 0xbe, 0xec,
    0x70, 0x84, 0xbc, 0xa7, 0x52, 0x16, 0xd0, 0xb0,
    0x1b, 0x87, 0xb6, 0xe1, 0xe4, 0xe0, 0x96, 0x79,
    0xbb, 0x26, 0x09, 0x30, 0x41, 0xef, 0xcb, 0xe9,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_GetResult_Response__TYPE_HASH = {1, {
    0x08, 0xee, 0xfb, 0xaa, 0x14, 0x6c, 0xe0, 0x2b,
    0xa4, 0x58, 0x98, 0xd5, 0xe9, 0x91, 0x60, 0xaf,
    0xd6, 0xc4, 0xc5, 0x4a, 0x30, 0xd1, 0x59, 0xae,
    0xe0, 0xf2, 0xca, 0x60, 0x35, 0xb1, 0x58, 0x0f,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_GetResult_Event__TYPE_HASH = {1, {
    0x43, 0x16, 0x1a, 0x48, 0x9e, 0x52, 0xda, 0xaa,
    0x5b, 0xbc, 0x2f, 0xa7, 0x4f, 0x73, 0xf1, 0x80,
    0x4d, 0x09, 0x95, 0x74, 0xfc, 0xf8, 0xf8, 0x19,
    0x17, 0x08, 0x07, 0xd7, 0x54, 0x72, 0x66, 0x2a,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  control_msgs__action__FollowJointTrajectory_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  control_msgs__action__FollowJointTrajectory_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/FollowJointTrajectory in the package control_msgs.
typedef struct control_msgs__action__FollowJointTrajectory_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence request;
  control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence response;
} control_msgs__action__FollowJointTrajectory_GetResult_Event;

// Struct for a sequence of control_msgs__action__FollowJointTrajectory_GetResult_Event.
typedef struct control_msgs__action__FollowJointTrajectory_GetResult_Event__Sequence
{
  control_msgs__action__FollowJointTrajectory_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__FollowJointTrajectory_GetResult_Event__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_FeedbackMessage__TYPE_HASH = {1, {
    0x80, 0x39, 0x8f, 0xcb, 0x96, 0x74, 0xa7, 0x90,
    0x81, 0xa9, 0x90, 0x6e, 0x2c, 0xcf, 0x0c, 0x80,
    0x4d, 0xd7, 0xcb, 0x15, 0xe2, 0x2e, 0x36, 0x2e,
    0x60, 0x6e, 0xe8, 0x71, 0x86, 0xbe, 0xab, 0x71,
  }};

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
