// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GripperCommand in the package control_msgs.
typedef struct control_msgs__msg__GripperCommand
{
  double position;
  double max_effort;
} control_msgs__msg__GripperCommand;

// Struct for a sequence of control_msgs__msg__GripperCommand.
typedef struct control_msgs__msg__GripperCommand__Sequence
{
  control_msgs__msg__GripperCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__GripperCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_
