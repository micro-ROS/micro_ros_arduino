// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from actionlib_msgs:msg/GoalStatus.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__STRUCT_H_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PENDING'.
enum
{
  actionlib_msgs__msg__GoalStatus__PENDING = 0
};

/// Constant 'ACTIVE'.
enum
{
  actionlib_msgs__msg__GoalStatus__ACTIVE = 1
};

/// Constant 'PREEMPTED'.
enum
{
  actionlib_msgs__msg__GoalStatus__PREEMPTED = 2
};

/// Constant 'SUCCEEDED'.
enum
{
  actionlib_msgs__msg__GoalStatus__SUCCEEDED = 3
};

/// Constant 'ABORTED'.
enum
{
  actionlib_msgs__msg__GoalStatus__ABORTED = 4
};

/// Constant 'REJECTED'.
enum
{
  actionlib_msgs__msg__GoalStatus__REJECTED = 5
};

/// Constant 'PREEMPTING'.
enum
{
  actionlib_msgs__msg__GoalStatus__PREEMPTING = 6
};

/// Constant 'RECALLING'.
enum
{
  actionlib_msgs__msg__GoalStatus__RECALLING = 7
};

/// Constant 'RECALLED'.
enum
{
  actionlib_msgs__msg__GoalStatus__RECALLED = 8
};

/// Constant 'LOST'.
enum
{
  actionlib_msgs__msg__GoalStatus__LOST = 9
};

// Include directives for member types
// Member 'goal_id'
#include "actionlib_msgs/msg/detail/goal_id__struct.h"
// Member 'text'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/GoalStatus in the package actionlib_msgs.
typedef struct actionlib_msgs__msg__GoalStatus
{
  actionlib_msgs__msg__GoalID goal_id;
  uint8_t status;
  rosidl_runtime_c__String text;
} actionlib_msgs__msg__GoalStatus;

// Struct for a sequence of actionlib_msgs__msg__GoalStatus.
typedef struct actionlib_msgs__msg__GoalStatus__Sequence
{
  actionlib_msgs__msg__GoalStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib_msgs__msg__GoalStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__STRUCT_H_
