// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:msg/FloatingPointRange.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__FLOATING_POINT_RANGE__STRUCT_H_
#define RCL_INTERFACES__MSG__DETAIL__FLOATING_POINT_RANGE__STRUCT_H_

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
#define rcl_interfaces__msg__FloatingPointRange__TYPE_VERSION_HASH__INIT {1, { \
      0x05, 0x5e, 0x1a, 0x07, 0x43, 0x4d, 0xe8, 0xb9, \
      0x25, 0x7e, 0xf5, 0x42, 0x0d, 0xac, 0x61, 0x36, \
      0xe6, 0xa1, 0xab, 0xdd, 0x83, 0xe6, 0xd1, 0x6e, \
      0x83, 0x17, 0xb6, 0xa6, 0xf7, 0x7c, 0x9c, 0x35, \
    }}
static const rosidl_type_hash_t rcl_interfaces__msg__FloatingPointRange__TYPE_VERSION_HASH = rcl_interfaces__msg__FloatingPointRange__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/FloatingPointRange in the package rcl_interfaces.
/**
  * Represents bounds and a step value for a floating point typed parameter.
 */
typedef struct rcl_interfaces__msg__FloatingPointRange
{
  /// Start value for valid values, inclusive.
  double from_value;
  /// End value for valid values, inclusive.
  double to_value;
  /// Size of valid steps between the from and to bound.
  ///
  /// Step is considered to be a magnitude, therefore negative values are treated
  /// the same as positive values, and a step value of zero implies a continuous
  /// range of values.
  ///
  /// Ideally, the step would be less than or equal to the distance between the
  /// bounds, as well as an even multiple of the distance between the bounds, but
  /// neither are required.
  ///
  /// If the absolute value of the step is larger than or equal to the distance
  /// between the two bounds, then the bounds will be the only valid values. e.g. if
  /// the range is defined as {from_value: 1.0, to_value: 2.0, step: 5.0} then the
  /// valid values will be 1.0 and 2.0.
  ///
  /// If the step is less than the distance between the bounds, but the distance is
  /// not a multiple of the step, then the "to" bound will always be a valid value,
  /// e.g. if the range is defined as {from_value: 2.0, to_value: 5.0, step: 2.0}
  /// then the valid values will be 2.0, 4.0, and 5.0.
  double step;
} rcl_interfaces__msg__FloatingPointRange;

// Struct for a sequence of rcl_interfaces__msg__FloatingPointRange.
typedef struct rcl_interfaces__msg__FloatingPointRange__Sequence
{
  rcl_interfaces__msg__FloatingPointRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__FloatingPointRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__DETAIL__FLOATING_POINT_RANGE__STRUCT_H_
