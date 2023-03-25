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

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__msg__GripperCommand__TYPE_HASH = {1, {
    0x57, 0xeb, 0x8f, 0x32, 0x6c, 0x98, 0x89, 0xca,
    0x8b, 0xb3, 0x4e, 0xad, 0x82, 0xcc, 0x94, 0xcc,
    0x09, 0xbf, 0x6b, 0xc5, 0xc3, 0xb6, 0xc0, 0x95,
    0x46, 0xdc, 0xa3, 0xa0, 0x0b, 0x58, 0x98, 0x90,
  }};

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
