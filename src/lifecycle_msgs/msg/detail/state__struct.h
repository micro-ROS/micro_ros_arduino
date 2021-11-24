// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lifecycle_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__MSG__DETAIL__STATE__STRUCT_H_
#define LIFECYCLE_MSGS__MSG__DETAIL__STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PRIMARY_STATE_UNKNOWN'.
enum
{
  lifecycle_msgs__msg__State__PRIMARY_STATE_UNKNOWN = 0
};

/// Constant 'PRIMARY_STATE_UNCONFIGURED'.
enum
{
  lifecycle_msgs__msg__State__PRIMARY_STATE_UNCONFIGURED = 1
};

/// Constant 'PRIMARY_STATE_INACTIVE'.
enum
{
  lifecycle_msgs__msg__State__PRIMARY_STATE_INACTIVE = 2
};

/// Constant 'PRIMARY_STATE_ACTIVE'.
enum
{
  lifecycle_msgs__msg__State__PRIMARY_STATE_ACTIVE = 3
};

/// Constant 'PRIMARY_STATE_FINALIZED'.
enum
{
  lifecycle_msgs__msg__State__PRIMARY_STATE_FINALIZED = 4
};

/// Constant 'TRANSITION_STATE_CONFIGURING'.
enum
{
  lifecycle_msgs__msg__State__TRANSITION_STATE_CONFIGURING = 10
};

/// Constant 'TRANSITION_STATE_CLEANINGUP'.
enum
{
  lifecycle_msgs__msg__State__TRANSITION_STATE_CLEANINGUP = 11
};

/// Constant 'TRANSITION_STATE_SHUTTINGDOWN'.
enum
{
  lifecycle_msgs__msg__State__TRANSITION_STATE_SHUTTINGDOWN = 12
};

/// Constant 'TRANSITION_STATE_ACTIVATING'.
enum
{
  lifecycle_msgs__msg__State__TRANSITION_STATE_ACTIVATING = 13
};

/// Constant 'TRANSITION_STATE_DEACTIVATING'.
enum
{
  lifecycle_msgs__msg__State__TRANSITION_STATE_DEACTIVATING = 14
};

/// Constant 'TRANSITION_STATE_ERRORPROCESSING'.
enum
{
  lifecycle_msgs__msg__State__TRANSITION_STATE_ERRORPROCESSING = 15
};

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/State in the package lifecycle_msgs.
typedef struct lifecycle_msgs__msg__State
{
  uint8_t id;
  rosidl_runtime_c__String label;
} lifecycle_msgs__msg__State;

// Struct for a sequence of lifecycle_msgs__msg__State.
typedef struct lifecycle_msgs__msg__State__Sequence
{
  lifecycle_msgs__msg__State * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__msg__State__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__MSG__DETAIL__STATE__STRUCT_H_
