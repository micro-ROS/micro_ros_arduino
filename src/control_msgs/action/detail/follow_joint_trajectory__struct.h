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


#define control_msgs__action__FollowJointTrajectory__TYPE_VERSION_HASH__INIT {1, { \
      0xd1, 0x8b, 0x2e, 0x36, 0x15, 0x7c, 0x71, 0xd9, \
      0x05, 0x91, 0xa8, 0x7b, 0x1d, 0xf4, 0x35, 0xe7, \
      0x03, 0xff, 0x1a, 0x21, 0x71, 0xfa, 0xc6, 0x05, \
      0x30, 0xcb, 0x6e, 0xc1, 0x7f, 0x59, 0xe2, 0x1b, \
    }}
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory__TYPE_VERSION_HASH = control_msgs__action__FollowJointTrajectory__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__FollowJointTrajectory_Goal__TYPE_VERSION_HASH__INIT {1, { \
      0x2c, 0x7e, 0x5c, 0xa8, 0x62, 0xc0, 0x04, 0xe8, \
      0xb4, 0xb7, 0xcc, 0x4b, 0xa7, 0xb6, 0x61, 0x40, \
      0xc4, 0x79, 0x33, 0x5e, 0xe0, 0x8f, 0x89, 0xcd, \
      0xe0, 0x24, 0xc4, 0xfe, 0xc3, 0x51, 0x6a, 0xca, \
    }}
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_Goal__TYPE_VERSION_HASH = control_msgs__action__FollowJointTrajectory_Goal__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__FollowJointTrajectory_Result__TYPE_VERSION_HASH__INIT {1, { \
      0x5b, 0xaf, 0xa9, 0x1d, 0x6f, 0xf1, 0x26, 0x02, \
      0x7f, 0x0f, 0xcd, 0x30, 0x28, 0xf4, 0x08, 0x39, \
      0xad, 0x69, 0x44, 0x00, 0xbb, 0x74, 0xc5, 0x77, \
      0x7b, 0xfd, 0x1f, 0x09, 0xcb, 0x6a, 0x8e, 0x82, \
    }}
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_Result__TYPE_VERSION_HASH = control_msgs__action__FollowJointTrajectory_Result__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__FollowJointTrajectory_Feedback__TYPE_VERSION_HASH__INIT {1, { \
      0x08, 0x5e, 0xa9, 0xed, 0xc0, 0xcf, 0x34, 0xe0, \
      0xe6, 0x7e, 0x02, 0xf4, 0x7c, 0xf0, 0x0b, 0x88, \
      0x8f, 0xe8, 0xcc, 0x75, 0x10, 0x32, 0x88, 0xfa, \
      0x54, 0xe8, 0xe3, 0x65, 0xea, 0x40, 0x3c, 0x26, \
    }}
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_Feedback__TYPE_VERSION_HASH = control_msgs__action__FollowJointTrajectory_Feedback__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__FollowJointTrajectory_SendGoal__TYPE_VERSION_HASH__INIT {1, { \
      0x49, 0x15, 0xb9, 0x90, 0x97, 0x47, 0xdf, 0x96, \
      0x22, 0x56, 0xf0, 0xfe, 0x9a, 0x7d, 0xc8, 0x32, \
      0xba, 0x6e, 0x7e, 0xc2, 0xc5, 0xe8, 0x27, 0xc5, \
      0xba, 0x23, 0x9b, 0x7b, 0x45, 0x1d, 0x52, 0xaa, \
    }}
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_SendGoal__TYPE_VERSION_HASH = control_msgs__action__FollowJointTrajectory_SendGoal__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__FollowJointTrajectory_SendGoal_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x69, 0xb9, 0xb7, 0x42, 0x60, 0xb8, 0xba, 0x75, \
      0x45, 0x4a, 0xbb, 0xdb, 0x53, 0x0b, 0xf7, 0x05, \
      0x63, 0x25, 0xbb, 0x73, 0x3e, 0x2c, 0xe0, 0x8f, \
      0xb3, 0x80, 0xab, 0xc7, 0xc2, 0x91, 0xa3, 0x7d, \
    }}
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_SendGoal_Request__TYPE_VERSION_HASH = control_msgs__action__FollowJointTrajectory_SendGoal_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__FollowJointTrajectory_SendGoal_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x5a, 0x55, 0xb2, 0x5e, 0x69, 0x65, 0x9d, 0x33, \
      0xf2, 0x03, 0x91, 0x48, 0x15, 0x5d, 0xa3, 0x1b, \
      0xfa, 0x21, 0xc4, 0x11, 0xd0, 0x4f, 0xf9, 0xba, \
      0xf8, 0xc2, 0x00, 0x84, 0xd4, 0xde, 0xdc, 0x28, \
    }}
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_SendGoal_Response__TYPE_VERSION_HASH = control_msgs__action__FollowJointTrajectory_SendGoal_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__FollowJointTrajectory_SendGoal_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x66, 0x1f, 0x7c, 0x87, 0x6d, 0x8f, 0x98, 0x09, \
      0x9d, 0x2e, 0x88, 0x81, 0x22, 0x6a, 0xf3, 0xa5, \
      0xa8, 0xad, 0x24, 0x62, 0x5d, 0xf2, 0xa4, 0xdb, \
      0xc1, 0x50, 0xcf, 0x23, 0x42, 0xef, 0x5b, 0xd7, \
    }}
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_SendGoal_Event__TYPE_VERSION_HASH = control_msgs__action__FollowJointTrajectory_SendGoal_Event__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__FollowJointTrajectory_GetResult__TYPE_VERSION_HASH__INIT {1, { \
      0xa4, 0x2b, 0x87, 0x8f, 0xc6, 0x86, 0x57, 0x8b, \
      0x09, 0x2e, 0x62, 0x6c, 0x27, 0xba, 0x79, 0x6d, \
      0xab, 0x41, 0x9d, 0x9d, 0x5f, 0x32, 0x75, 0x92, \
      0x0e, 0x4e, 0xca, 0x77, 0x69, 0x06, 0x25, 0x39, \
    }}
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_GetResult__TYPE_VERSION_HASH = control_msgs__action__FollowJointTrajectory_GetResult__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__FollowJointTrajectory_GetResult_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x4f, 0x7f, 0x8e, 0xd0, 0xea, 0xa7, 0xdc, 0x18, \
      0xe4, 0x1e, 0x78, 0x3d, 0xf2, 0x67, 0x34, 0xb8, \
      0x24, 0xaa, 0x10, 0xc7, 0xfa, 0xc1, 0xfc, 0x10, \
      0x82, 0x37, 0x79, 0xd1, 0xac, 0xef, 0x2b, 0x82, \
    }}
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_GetResult_Request__TYPE_VERSION_HASH = control_msgs__action__FollowJointTrajectory_GetResult_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__FollowJointTrajectory_GetResult_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x80, 0x82, 0x9a, 0x9c, 0xf6, 0x23, 0xc8, 0x30, \
      0xac, 0xb7, 0x79, 0x77, 0x91, 0x60, 0x56, 0x47, \
      0xca, 0x6f, 0xff, 0x6d, 0x09, 0x48, 0x8e, 0xde, \
      0xc3, 0xcd, 0x12, 0xa4, 0xa4, 0x3f, 0xaa, 0xab, \
    }}
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_GetResult_Response__TYPE_VERSION_HASH = control_msgs__action__FollowJointTrajectory_GetResult_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__FollowJointTrajectory_GetResult_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x4c, 0x2a, 0x18, 0xb2, 0xfd, 0x07, 0x6a, 0xd0, \
      0x34, 0xcd, 0x64, 0x4d, 0x21, 0x53, 0x02, 0x53, \
      0x57, 0x3d, 0x60, 0x24, 0x27, 0x7e, 0xdb, 0x43, \
      0x2b, 0x71, 0xb5, 0x05, 0x07, 0x39, 0x9a, 0xb0, \
    }}
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_GetResult_Event__TYPE_VERSION_HASH = control_msgs__action__FollowJointTrajectory_GetResult_Event__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__FollowJointTrajectory_FeedbackMessage__TYPE_VERSION_HASH__INIT {1, { \
      0x88, 0xe1, 0x6a, 0xcd, 0x36, 0x4a, 0xd5, 0xbc, \
      0x90, 0xb6, 0x61, 0xa4, 0xf7, 0x7f, 0xec, 0x9a, \
      0xb4, 0x08, 0x74, 0xe8, 0xee, 0xaa, 0xf4, 0x67, \
      0x3e, 0x9c, 0xd7, 0x8e, 0x41, 0x03, 0x8b, 0x99, \
    }}
static const rosidl_type_hash_t control_msgs__action__FollowJointTrajectory_FeedbackMessage__TYPE_VERSION_HASH = control_msgs__action__FollowJointTrajectory_FeedbackMessage__TYPE_VERSION_HASH__INIT;

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
