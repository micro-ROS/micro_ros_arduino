// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosgraph_msgs:msg/Clock.idl
// generated code does not contain a copyright notice

#ifndef ROSGRAPH_MSGS__MSG__DETAIL__CLOCK__STRUCT_H_
#define ROSGRAPH_MSGS__MSG__DETAIL__CLOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t rosgraph_msgs__msg__Clock__TYPE_HASH = {1, {
    0x69, 0x2f, 0x7a, 0x66, 0xe9, 0x3a, 0x3c, 0x83,
    0xe7, 0x17, 0x65, 0xd0, 0x33, 0xb6, 0x03, 0x49,
    0xba, 0x68, 0x02, 0x3a, 0x8c, 0x68, 0x9a, 0x79,
    0xe4, 0x80, 0x78, 0xbc, 0xb5, 0xc5, 0x85, 0x64,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'clock'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/Clock in the package rosgraph_msgs.
/**
  * This message communicates the current time.
  *
  * For more information, see https://design.ros2.org/articles/clock_and_time.html.
 */
typedef struct rosgraph_msgs__msg__Clock
{
  builtin_interfaces__msg__Time clock;
} rosgraph_msgs__msg__Clock;

// Struct for a sequence of rosgraph_msgs__msg__Clock.
typedef struct rosgraph_msgs__msg__Clock__Sequence
{
  rosgraph_msgs__msg__Clock * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosgraph_msgs__msg__Clock__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSGRAPH_MSGS__MSG__DETAIL__CLOCK__STRUCT_H_
