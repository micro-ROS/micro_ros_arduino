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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rosgraph_msgs__msg__Clock__TYPE_VERSION_HASH__INIT {1, { \
      0xd7, 0xc4, 0x7d, 0xf5, 0xf7, 0x9a, 0x41, 0xa9, \
      0xb6, 0x48, 0x24, 0xd9, 0x9c, 0x45, 0xe9, 0x25, \
      0x42, 0xc3, 0x02, 0xa0, 0x42, 0x38, 0x2a, 0x97, \
      0x24, 0x7a, 0xd6, 0x3b, 0xa4, 0xef, 0x93, 0x74, \
    }}
static const rosidl_type_hash_t rosgraph_msgs__msg__Clock__TYPE_VERSION_HASH = rosgraph_msgs__msg__Clock__TYPE_VERSION_HASH__INIT;

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
