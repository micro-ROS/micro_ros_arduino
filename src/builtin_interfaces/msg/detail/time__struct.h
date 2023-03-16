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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define builtin_interfaces__msg__Time__TYPE_VERSION_HASH__INIT {1, { \
      0x4c, 0x96, 0xd2, 0xeb, 0xfc, 0xea, 0x42, 0xc6, \
      0xd7, 0xaf, 0x45, 0x1d, 0x22, 0x59, 0xfb, 0x4b, \
      0xaa, 0xcc, 0x70, 0xdd, 0x79, 0x61, 0x70, 0x7f, \
      0xf8, 0xcc, 0x63, 0xf1, 0xc8, 0x01, 0x95, 0xbc, \
    }}
static const rosidl_type_hash_t builtin_interfaces__msg__Time__TYPE_VERSION_HASH = builtin_interfaces__msg__Time__TYPE_VERSION_HASH__INIT;

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
