// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__STRUCT_H_
#define ACTION_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__STRUCT_H_

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
#define action_msgs__msg__GoalStatusArray__TYPE_VERSION_HASH__INIT {1, { \
      0xff, 0xe5, 0xf9, 0x5b, 0x22, 0x10, 0x9d, 0xd7, \
      0xef, 0x21, 0x99, 0xcc, 0xf4, 0x43, 0xf5, 0xb6, \
      0xbe, 0x19, 0xc1, 0x57, 0x61, 0x8c, 0x8f, 0xc1, \
      0x2f, 0x4d, 0x9a, 0x2b, 0x5f, 0xc6, 0xc4, 0xdc, \
    }}
static const rosidl_type_hash_t action_msgs__msg__GoalStatusArray__TYPE_VERSION_HASH = action_msgs__msg__GoalStatusArray__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'status_list'
#include "action_msgs/msg/detail/goal_status__struct.h"

/// Struct defined in msg/GoalStatusArray in the package action_msgs.
/**
  * An array of goal statuses.
 */
typedef struct action_msgs__msg__GoalStatusArray
{
  action_msgs__msg__GoalStatus__Sequence status_list;
} action_msgs__msg__GoalStatusArray;

// Struct for a sequence of action_msgs__msg__GoalStatusArray.
typedef struct action_msgs__msg__GoalStatusArray__Sequence
{
  action_msgs__msg__GoalStatusArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_msgs__msg__GoalStatusArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__STRUCT_H_
