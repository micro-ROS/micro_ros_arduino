// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/MecanumDriveControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__STRUCT_H_

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
// Member 'reference_velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/MecanumDriveControllerState in the package control_msgs.
typedef struct control_msgs__msg__MecanumDriveControllerState
{
  std_msgs__msg__Header header;
  double front_left_wheel_velocity;
  double back_left_wheel_velocity;
  double back_right_wheel_velocity;
  double front_right_wheel_velocity;
  geometry_msgs__msg__Twist reference_velocity;
} control_msgs__msg__MecanumDriveControllerState;

// Struct for a sequence of control_msgs__msg__MecanumDriveControllerState.
typedef struct control_msgs__msg__MecanumDriveControllerState__Sequence
{
  control_msgs__msg__MecanumDriveControllerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__MecanumDriveControllerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__STRUCT_H_
