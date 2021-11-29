// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lifecycle_msgs:msg/Transition.idl
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION__STRUCT_H_
#define LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TRANSITION_CREATE'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_CREATE = 0
};

/// Constant 'TRANSITION_CONFIGURE'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_CONFIGURE = 1
};

/// Constant 'TRANSITION_CLEANUP'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_CLEANUP = 2
};

/// Constant 'TRANSITION_ACTIVATE'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ACTIVATE = 3
};

/// Constant 'TRANSITION_DEACTIVATE'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_DEACTIVATE = 4
};

/// Constant 'TRANSITION_UNCONFIGURED_SHUTDOWN'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_UNCONFIGURED_SHUTDOWN = 5
};

/// Constant 'TRANSITION_INACTIVE_SHUTDOWN'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_INACTIVE_SHUTDOWN = 6
};

/// Constant 'TRANSITION_ACTIVE_SHUTDOWN'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ACTIVE_SHUTDOWN = 7
};

/// Constant 'TRANSITION_DESTROY'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_DESTROY = 8
};

/// Constant 'TRANSITION_ON_CONFIGURE_SUCCESS'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_CONFIGURE_SUCCESS = 10
};

/// Constant 'TRANSITION_ON_CONFIGURE_FAILURE'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_CONFIGURE_FAILURE = 11
};

/// Constant 'TRANSITION_ON_CONFIGURE_ERROR'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_CONFIGURE_ERROR = 12
};

/// Constant 'TRANSITION_ON_CLEANUP_SUCCESS'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_CLEANUP_SUCCESS = 20
};

/// Constant 'TRANSITION_ON_CLEANUP_FAILURE'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_CLEANUP_FAILURE = 21
};

/// Constant 'TRANSITION_ON_CLEANUP_ERROR'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_CLEANUP_ERROR = 22
};

/// Constant 'TRANSITION_ON_ACTIVATE_SUCCESS'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_ACTIVATE_SUCCESS = 30
};

/// Constant 'TRANSITION_ON_ACTIVATE_FAILURE'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_ACTIVATE_FAILURE = 31
};

/// Constant 'TRANSITION_ON_ACTIVATE_ERROR'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_ACTIVATE_ERROR = 32
};

/// Constant 'TRANSITION_ON_DEACTIVATE_SUCCESS'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_DEACTIVATE_SUCCESS = 40
};

/// Constant 'TRANSITION_ON_DEACTIVATE_FAILURE'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_DEACTIVATE_FAILURE = 41
};

/// Constant 'TRANSITION_ON_DEACTIVATE_ERROR'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_DEACTIVATE_ERROR = 42
};

/// Constant 'TRANSITION_ON_SHUTDOWN_SUCCESS'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_SHUTDOWN_SUCCESS = 50
};

/// Constant 'TRANSITION_ON_SHUTDOWN_FAILURE'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_SHUTDOWN_FAILURE = 51
};

/// Constant 'TRANSITION_ON_SHUTDOWN_ERROR'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_SHUTDOWN_ERROR = 52
};

/// Constant 'TRANSITION_ON_ERROR_SUCCESS'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_ERROR_SUCCESS = 60
};

/// Constant 'TRANSITION_ON_ERROR_FAILURE'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_ERROR_FAILURE = 61
};

/// Constant 'TRANSITION_ON_ERROR_ERROR'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_ERROR_ERROR = 62
};

/// Constant 'TRANSITION_CALLBACK_SUCCESS'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_CALLBACK_SUCCESS = 97
};

/// Constant 'TRANSITION_CALLBACK_FAILURE'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_CALLBACK_FAILURE = 98
};

/// Constant 'TRANSITION_CALLBACK_ERROR'.
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_CALLBACK_ERROR = 99
};

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Transition in the package lifecycle_msgs.
typedef struct lifecycle_msgs__msg__Transition
{
  uint8_t id;
  rosidl_runtime_c__String label;
} lifecycle_msgs__msg__Transition;

// Struct for a sequence of lifecycle_msgs__msg__Transition.
typedef struct lifecycle_msgs__msg__Transition__Sequence
{
  lifecycle_msgs__msg__Transition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__msg__Transition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION__STRUCT_H_
