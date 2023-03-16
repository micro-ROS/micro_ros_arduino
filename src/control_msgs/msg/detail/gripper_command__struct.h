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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__msg__GripperCommand__TYPE_VERSION_HASH__INIT {1, { \
      0xcc, 0xb1, 0xdd, 0x05, 0xc6, 0xe7, 0xd7, 0x74, \
      0x05, 0x91, 0x65, 0xa1, 0x23, 0xb5, 0xd2, 0xba, \
      0x65, 0xc4, 0xed, 0x58, 0x44, 0x6d, 0x3e, 0x3d, \
      0xe8, 0x28, 0xd0, 0x0d, 0xe2, 0xef, 0xbe, 0xdc, \
    }}
static const rosidl_type_hash_t control_msgs__msg__GripperCommand__TYPE_VERSION_HASH = control_msgs__msg__GripperCommand__TYPE_VERSION_HASH__INIT;

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
