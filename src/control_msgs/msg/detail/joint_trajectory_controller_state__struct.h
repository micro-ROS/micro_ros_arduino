// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/JointTrajectoryControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'joint_names'
// Member 'multi_dof_joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'reference'
// Member 'feedback'
// Member 'error'
// Member 'output'
// Member 'desired'
// Member 'actual'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"
// Member 'multi_dof_reference'
// Member 'multi_dof_feedback'
// Member 'multi_dof_error'
// Member 'multi_dof_output'
// Member 'multi_dof_desired'
// Member 'multi_dof_actual'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__struct.h"

/// Struct defined in msg/JointTrajectoryControllerState in the package control_msgs.
/**
  * This message presents current controller state of JTC
 */
typedef struct control_msgs__msg__JointTrajectoryControllerState
{
  /// Header timestamp should be update time of controller state
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence joint_names;
  /// The set point, that is, desired state.
  trajectory_msgs__msg__JointTrajectoryPoint reference;
  /// Current value of the process (ie: latest sensor measurement on the controlled value).
  trajectory_msgs__msg__JointTrajectoryPoint feedback;
  /// The error of the controlled value, essentially reference - feedback (for a regular PID implementation).
  trajectory_msgs__msg__JointTrajectoryPoint error;
  /// Current output of the controller.
  trajectory_msgs__msg__JointTrajectoryPoint output;
  /// -- deprecated --
  trajectory_msgs__msg__JointTrajectoryPoint desired;
  trajectory_msgs__msg__JointTrajectoryPoint actual;
  rosidl_runtime_c__String__Sequence multi_dof_joint_names;
  /// The set point, that is, desired state.
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint multi_dof_reference;
  /// Current value of the process (ie: latest sensor measurement on the controlled value).
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint multi_dof_feedback;
  /// The error of the controlled value, essentially reference - feedback (for a regular PID implementation).
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint multi_dof_error;
  /// Current output of the controller.
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint multi_dof_output;
  /// -- deprecated --
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint multi_dof_desired;
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint multi_dof_actual;
} control_msgs__msg__JointTrajectoryControllerState;

// Struct for a sequence of control_msgs__msg__JointTrajectoryControllerState.
typedef struct control_msgs__msg__JointTrajectoryControllerState__Sequence
{
  control_msgs__msg__JointTrajectoryControllerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__JointTrajectoryControllerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__STRUCT_H_
