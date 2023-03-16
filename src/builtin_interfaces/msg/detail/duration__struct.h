// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from builtin_interfaces:msg/Duration.idl
// generated code does not contain a copyright notice

#ifndef BUILTIN_INTERFACES__MSG__DETAIL__DURATION__STRUCT_H_
#define BUILTIN_INTERFACES__MSG__DETAIL__DURATION__STRUCT_H_

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
#define builtin_interfaces__msg__Duration__TYPE_VERSION_HASH__INIT {1, { \
      0x3b, 0xf1, 0x82, 0xf9, 0xa4, 0xe9, 0xd8, 0x93, \
      0xfd, 0x68, 0xeb, 0xf2, 0x5a, 0xa7, 0x1c, 0xc5, \
      0xdd, 0xd9, 0xa7, 0xbb, 0xbe, 0x5c, 0x83, 0x9d, \
      0xa1, 0x0a, 0x2d, 0x10, 0xab, 0x9d, 0x74, 0x9e, \
    }}
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__TYPE_VERSION_HASH = builtin_interfaces__msg__Duration__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Duration in the package builtin_interfaces.
/**
  * Duration defines a period between two time points.
  * Messages of this datatype are of ROS Time following this design:
  * https://design.ros2.org/articles/clock_and_time.html
 */
typedef struct builtin_interfaces__msg__Duration
{
  /// Seconds component, range is valid over any possible int32 value.
  int32_t sec;
  /// Nanoseconds component in the range of [0, 1e9).
  uint32_t nanosec;
} builtin_interfaces__msg__Duration;

// Struct for a sequence of builtin_interfaces__msg__Duration.
typedef struct builtin_interfaces__msg__Duration__Sequence
{
  builtin_interfaces__msg__Duration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} builtin_interfaces__msg__Duration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUILTIN_INTERFACES__MSG__DETAIL__DURATION__STRUCT_H_
