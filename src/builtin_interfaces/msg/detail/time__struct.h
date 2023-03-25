// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from builtin_interfaces:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef BUILTIN_INTERFACES__MSG__DETAIL__TIME__STRUCT_H_
#define BUILTIN_INTERFACES__MSG__DETAIL__TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t builtin_interfaces__msg__Time__TYPE_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};

// Constants defined in the message

/// Struct defined in msg/Time in the package builtin_interfaces.
/**
  * This message communicates ROS Time defined here:
  * https://design.ros2.org/articles/clock_and_time.html
 */
typedef struct builtin_interfaces__msg__Time
{
  /// The seconds component, valid over all int32 values.
  int32_t sec;
  /// The nanoseconds component, valid in the range [0, 1e9).
  uint32_t nanosec;
} builtin_interfaces__msg__Time;

// Struct for a sequence of builtin_interfaces__msg__Time.
typedef struct builtin_interfaces__msg__Time__Sequence
{
  builtin_interfaces__msg__Time * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} builtin_interfaces__msg__Time__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUILTIN_INTERFACES__MSG__DETAIL__TIME__STRUCT_H_
