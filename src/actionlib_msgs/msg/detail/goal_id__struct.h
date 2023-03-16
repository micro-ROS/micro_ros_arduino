// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from actionlib_msgs:msg/GoalID.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_ID__STRUCT_H_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_ID__STRUCT_H_

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
#define actionlib_msgs__msg__GoalID__TYPE_VERSION_HASH__INIT {1, { \
      0xb9, 0x86, 0xe9, 0x76, 0x9f, 0x31, 0x39, 0xff, \
      0x35, 0x3f, 0x90, 0x17, 0x56, 0x06, 0x7e, 0xdd, \
      0x66, 0x20, 0xbb, 0x75, 0x61, 0x57, 0xc2, 0x68, \
      0xfe, 0x6e, 0x49, 0x2c, 0x3a, 0x9f, 0xcf, 0x15, \
    }}
static const rosidl_type_hash_t actionlib_msgs__msg__GoalID__TYPE_VERSION_HASH = actionlib_msgs__msg__GoalID__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GoalID in the package actionlib_msgs.
typedef struct actionlib_msgs__msg__GoalID
{
  /// The stamp should store the time at which this goal was requested.
  /// It is used by an action server when it tries to preempt all
  /// goals that were requested before a certain time
  builtin_interfaces__msg__Time stamp;
  /// The id provides a way to associate feedback and
  /// result message with specific goal requests. The id
  /// specified must be unique.
  rosidl_runtime_c__String id;
} actionlib_msgs__msg__GoalID;

// Struct for a sequence of actionlib_msgs__msg__GoalID.
typedef struct actionlib_msgs__msg__GoalID__Sequence
{
  actionlib_msgs__msg__GoalID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib_msgs__msg__GoalID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_ID__STRUCT_H_
