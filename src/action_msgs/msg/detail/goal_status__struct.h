// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_msgs:msg/GoalStatus.idl
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__MSG__DETAIL__GOAL_STATUS__STRUCT_H_
#define ACTION_MSGS__MSG__DETAIL__GOAL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
enum
{
  action_msgs__msg__GoalStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_ACCEPTED'.
enum
{
  action_msgs__msg__GoalStatus__STATUS_ACCEPTED = 1
};

/// Constant 'STATUS_EXECUTING'.
enum
{
  action_msgs__msg__GoalStatus__STATUS_EXECUTING = 2
};

/// Constant 'STATUS_CANCELING'.
enum
{
  action_msgs__msg__GoalStatus__STATUS_CANCELING = 3
};

/// Constant 'STATUS_SUCCEEDED'.
enum
{
  action_msgs__msg__GoalStatus__STATUS_SUCCEEDED = 4
};

/// Constant 'STATUS_CANCELED'.
enum
{
  action_msgs__msg__GoalStatus__STATUS_CANCELED = 5
};

/// Constant 'STATUS_ABORTED'.
enum
{
  action_msgs__msg__GoalStatus__STATUS_ABORTED = 6
};

// Include directives for member types
// Member 'goal_info'
#include "action_msgs/msg/detail/goal_info__struct.h"

// Struct defined in msg/GoalStatus in the package action_msgs.
typedef struct action_msgs__msg__GoalStatus
{
  action_msgs__msg__GoalInfo goal_info;
  int8_t status;
} action_msgs__msg__GoalStatus;

// Struct for a sequence of action_msgs__msg__GoalStatus.
typedef struct action_msgs__msg__GoalStatus__Sequence
{
  action_msgs__msg__GoalStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_msgs__msg__GoalStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__MSG__DETAIL__GOAL_STATUS__STRUCT_H_
