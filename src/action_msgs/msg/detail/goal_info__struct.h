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


// Type Hash for interface
static const rosidl_type_hash_t action_msgs__msg__GoalInfo__TYPE_HASH = {1, {
    0x63, 0x98, 0xfe, 0x76, 0x31, 0x54, 0x55, 0x43,
    0x53, 0x93, 0x07, 0x16, 0xb2, 0x25, 0x94, 0x7f,
    0x93, 0xb6, 0x72, 0xf0, 0xfb, 0x2e, 0x49, 0xfd,
    0xd0, 0x1b, 0xb7, 0xa7, 0xe3, 0x79, 0x33, 0xe9,
  }};

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
