// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/SteeringControllerStatus.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_STATUS__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_STATUS__STRUCT_H_

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
// Member 'traction_wheels_position'
// Member 'traction_wheels_velocity'
// Member 'steer_positions'
// Member 'linear_velocity_command'
// Member 'steering_angle_command'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SteeringControllerStatus in the package control_msgs.
typedef struct control_msgs__msg__SteeringControllerStatus
{
  std_msgs__msg__Header header;
  /// positions of traction wheels if the robot is controlled by position
  rosidl_runtime_c__double__Sequence traction_wheels_position;
  /// velocities of traction wheels if the robot is controlled by velocity
  rosidl_runtime_c__double__Sequence traction_wheels_velocity;
  /// positions of steering joints
  rosidl_runtime_c__double__Sequence steer_positions;
  /// value commanded to tractions joint
  rosidl_runtime_c__double__Sequence linear_velocity_command;
  /// values commanded to steering joints
  rosidl_runtime_c__double__Sequence steering_angle_command;
} control_msgs__msg__SteeringControllerStatus;

// Struct for a sequence of control_msgs__msg__SteeringControllerStatus.
typedef struct control_msgs__msg__SteeringControllerStatus__Sequence
{
  control_msgs__msg__SteeringControllerStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__SteeringControllerStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_STATUS__STRUCT_H_
