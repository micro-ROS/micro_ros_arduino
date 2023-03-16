// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from actionlib_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__STRUCT_H_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__STRUCT_H_

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
#define actionlib_msgs__msg__GoalStatusArray__TYPE_VERSION_HASH__INIT {1, { \
      0xf0, 0xc1, 0x26, 0x3b, 0xfd, 0xb9, 0xf1, 0xaa, \
      0xe8, 0x6e, 0x6a, 0xc6, 0xce, 0x62, 0xda, 0xcc, \
      0x5a, 0x85, 0x4b, 0xac, 0xdb, 0x38, 0x19, 0x00, \
      0xb8, 0x20, 0x78, 0x14, 0x59, 0xc9, 0xf3, 0xa2, \
    }}
static const rosidl_type_hash_t actionlib_msgs__msg__GoalStatusArray__TYPE_VERSION_HASH = actionlib_msgs__msg__GoalStatusArray__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'status_list'
#include "actionlib_msgs/msg/detail/goal_status__struct.h"

/// Struct defined in msg/GoalStatusArray in the package actionlib_msgs.
/**
  * Stores the statuses for goals that are currently being tracked
  * by an action server
 */
typedef struct actionlib_msgs__msg__GoalStatusArray
{
  std_msgs__msg__Header header;
  actionlib_msgs__msg__GoalStatus__Sequence status_list;
} actionlib_msgs__msg__GoalStatusArray;

// Struct for a sequence of actionlib_msgs__msg__GoalStatusArray.
typedef struct actionlib_msgs__msg__GoalStatusArray__Sequence
{
  actionlib_msgs__msg__GoalStatusArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib_msgs__msg__GoalStatusArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__STRUCT_H_
