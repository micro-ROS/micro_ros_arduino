// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/JointControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__STRUCT_H_

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

/// Struct defined in msg/JointControllerState in the package control_msgs.
/**
  * This message presents current controller state of one joint.
 */
typedef struct control_msgs__msg__JointControllerState
{
  /// Header timestamp should be update time of controller state
  std_msgs__msg__Header header;
  /// The set point, that is, desired state.
  double set_point;
  /// Current value of the process (ie: latest sensor measurement on the controlled value).
  double process_value;
  /// First time-derivative of the process value.
  double process_value_dot;
  /// The error of the controlled value, essentially process_value - set_point (for a regular PID implementation).
  double error;
  /// Time between two consecutive updates/execution of the control law.
  double time_step;
  /// Current output of the controller.
  double command;
  /// Current PID parameters of the controller.
  double p;
  double i;
  double d;
  double i_clamp;
  bool antiwindup;
} control_msgs__msg__JointControllerState;

// Struct for a sequence of control_msgs__msg__JointControllerState.
typedef struct control_msgs__msg__JointControllerState__Sequence
{
  control_msgs__msg__JointControllerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__JointControllerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__STRUCT_H_
