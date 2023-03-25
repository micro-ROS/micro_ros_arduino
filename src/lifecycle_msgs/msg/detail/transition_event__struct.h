// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lifecycle_msgs:msg/TransitionEvent.idl
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION_EVENT__STRUCT_H_
#define LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t lifecycle_msgs__msg__TransitionEvent__TYPE_HASH = {1, {
    0xd5, 0xf8, 0x87, 0x3a, 0x2f, 0x01, 0x46, 0x49,
    0x8f, 0x81, 0x2d, 0x78, 0x85, 0xc7, 0x32, 0x7c,
    0xe2, 0x7e, 0x46, 0x3d, 0x36, 0x81, 0x1d, 0x87,
    0x92, 0xf3, 0x5e, 0xe3, 0x8c, 0x0d, 0x6c, 0x38,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'transition'
#include "lifecycle_msgs/msg/detail/transition__struct.h"
// Member 'start_state'
// Member 'goal_state'
#include "lifecycle_msgs/msg/detail/state__struct.h"

/// Struct defined in msg/TransitionEvent in the package lifecycle_msgs.
/**
  * The time point at which this event occurred.
 */
typedef struct lifecycle_msgs__msg__TransitionEvent
{
  uint64_t timestamp;
  /// The id and label of this transition event.
  lifecycle_msgs__msg__Transition transition;
  /// The starting state from which this event transitioned.
  lifecycle_msgs__msg__State start_state;
  /// The end state of this transition event.
  lifecycle_msgs__msg__State goal_state;
} lifecycle_msgs__msg__TransitionEvent;

// Struct for a sequence of lifecycle_msgs__msg__TransitionEvent.
typedef struct lifecycle_msgs__msg__TransitionEvent__Sequence
{
  lifecycle_msgs__msg__TransitionEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__msg__TransitionEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION_EVENT__STRUCT_H_
