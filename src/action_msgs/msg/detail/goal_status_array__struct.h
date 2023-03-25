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


// Type Hash for interface
static const rosidl_type_hash_t action_msgs__msg__GoalStatusArray__TYPE_HASH = {1, {
    0x6c, 0x16, 0x84, 0xb0, 0x0f, 0x17, 0x7d, 0x37,
    0x43, 0x8f, 0xeb, 0xe6, 0xe7, 0x09, 0xfc, 0x4e,
    0x2b, 0x0d, 0x42, 0x48, 0xdc, 0xa4, 0x85, 0x49,
    0x46, 0xf9, 0xed, 0x8b, 0x30, 0xcd, 0xa8, 0x3e,
  }};

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
