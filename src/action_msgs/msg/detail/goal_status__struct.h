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

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t action_msgs__msg__GoalStatus__TYPE_HASH = {1, {
    0x32, 0xf4, 0xcf, 0xd7, 0x17, 0x73, 0x5d, 0x17,
    0x65, 0x7e, 0x11, 0x78, 0xf2, 0x44, 0x31, 0xc1,
    0xce, 0x99, 0x6c, 0x87, 0x8c, 0x51, 0x52, 0x30,
    0xf6, 0xc5, 0xb3, 0x47, 0x68, 0x19, 0xdb, 0xb9,
  }};

// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
/**
  * Indicates status has not been properly set.
 */
enum
{
  action_msgs__msg__GoalStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_ACCEPTED'.
/**
  * The goal has been accepted and is awaiting execution.
 */
enum
{
  action_msgs__msg__GoalStatus__STATUS_ACCEPTED = 1
};

/// Constant 'STATUS_EXECUTING'.
/**
  * The goal is currently being executed by the action server.
 */
enum
{
  action_msgs__msg__GoalStatus__STATUS_EXECUTING = 2
};

/// Constant 'STATUS_CANCELING'.
/**
  * The client has requested that the goal be canceled and the action server has
  * accepted the cancel request.
 */
enum
{
  action_msgs__msg__GoalStatus__STATUS_CANCELING = 3
};

/// Constant 'STATUS_SUCCEEDED'.
/**
  * The goal was achieved successfully by the action server.
 */
enum
{
  action_msgs__msg__GoalStatus__STATUS_SUCCEEDED = 4
};

/// Constant 'STATUS_CANCELED'.
/**
  * The goal was canceled after an external request from an action client.
 */
enum
{
  action_msgs__msg__GoalStatus__STATUS_CANCELED = 5
};

/// Constant 'STATUS_ABORTED'.
/**
  * The goal was terminated by the action server without an external request.
 */
enum
{
  action_msgs__msg__GoalStatus__STATUS_ABORTED = 6
};

// Include directives for member types
// Member 'goal_info'
#include "action_msgs/msg/detail/goal_info__struct.h"

/// Struct defined in msg/GoalStatus in the package action_msgs.
/**
  * An action goal can be in one of these states after it is accepted by an action
  * server.
  *
  * For more information, see http://design.ros2.org/articles/actions.html
 */
typedef struct action_msgs__msg__GoalStatus
{
  /// Goal info (contains ID and timestamp).
  action_msgs__msg__GoalInfo goal_info;
  /// Action goal state-machine status.
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
