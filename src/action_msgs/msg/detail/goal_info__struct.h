// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_msgs:msg/GoalInfo.idl
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__MSG__DETAIL__GOAL_INFO__STRUCT_H_
#define ACTION_MSGS__MSG__DETAIL__GOAL_INFO__STRUCT_H_

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
#define action_msgs__msg__GoalInfo__TYPE_VERSION_HASH__INIT {1, { \
      0x9f, 0xb8, 0x44, 0x10, 0x48, 0xde, 0xe4, 0xcd, \
      0x66, 0x19, 0x19, 0xe6, 0x94, 0xba, 0x1c, 0x26, \
      0x1a, 0x8d, 0x92, 0xc0, 0x20, 0xe8, 0x8a, 0x60, \
      0x50, 0xd0, 0x02, 0x0d, 0x16, 0x4c, 0xe2, 0x95, \
    }}
static const rosidl_type_hash_t action_msgs__msg__GoalInfo__TYPE_VERSION_HASH = action_msgs__msg__GoalInfo__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/GoalInfo in the package action_msgs.
/**
  * Goal ID
 */
typedef struct action_msgs__msg__GoalInfo
{
  unique_identifier_msgs__msg__UUID goal_id;
  /// Time when the goal was accepted
  builtin_interfaces__msg__Time stamp;
} action_msgs__msg__GoalInfo;

// Struct for a sequence of action_msgs__msg__GoalInfo.
typedef struct action_msgs__msg__GoalInfo__Sequence
{
  action_msgs__msg__GoalInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_msgs__msg__GoalInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__MSG__DETAIL__GOAL_INFO__STRUCT_H_
