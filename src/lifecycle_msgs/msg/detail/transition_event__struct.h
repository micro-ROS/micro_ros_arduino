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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__msg__TransitionEvent__TYPE_VERSION_HASH__INIT {1, { \
      0x53, 0xfe, 0x1b, 0x9e, 0xf0, 0x44, 0xd8, 0xd9, \
      0xc1, 0x53, 0xf0, 0x98, 0x28, 0xfb, 0x76, 0x46, \
      0xbf, 0xd3, 0xe3, 0x18, 0x6a, 0x07, 0x15, 0xcb, \
      0xbd, 0x76, 0x7b, 0x06, 0x2d, 0x83, 0x56, 0x10, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__msg__TransitionEvent__TYPE_VERSION_HASH = lifecycle_msgs__msg__TransitionEvent__TYPE_VERSION_HASH__INIT;

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
