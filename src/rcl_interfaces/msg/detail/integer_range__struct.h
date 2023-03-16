// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:msg/IntegerRange.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__INTEGER_RANGE__STRUCT_H_
#define RCL_INTERFACES__MSG__DETAIL__INTEGER_RANGE__STRUCT_H_

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
#define rcl_interfaces__msg__IntegerRange__TYPE_VERSION_HASH__INIT {1, { \
      0x30, 0x61, 0xb9, 0x06, 0x84, 0x92, 0x9d, 0x62, \
      0x07, 0xa9, 0x9e, 0x47, 0xdc, 0xec, 0x4d, 0xbe, \
      0x39, 0xbd, 0xf6, 0xc4, 0xa4, 0x86, 0x9b, 0x43, \
      0xa8, 0x79, 0x0e, 0x10, 0x0d, 0x37, 0x18, 0x4a, \
    }}
static const rosidl_type_hash_t rcl_interfaces__msg__IntegerRange__TYPE_VERSION_HASH = rcl_interfaces__msg__IntegerRange__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/IntegerRange in the package rcl_interfaces.
/**
  * Represents bounds and a step value for an integer typed parameter.
 */
typedef struct rcl_interfaces__msg__IntegerRange
{
  /// Start value for valid values, inclusive.
  int64_t from_value;
  /// End value for valid values, inclusive.
  int64_t to_value;
  /// Size of valid steps between the from and to bound.
  ///
  /// A step value of zero implies a continuous range of values. Ideally, the step
  /// would be less than or equal to the distance between the bounds, as well as an
  /// even multiple of the distance between the bounds, but neither are required.
  ///
  /// If the absolute value of the step is larger than or equal to the distance
  /// between the two bounds, then the bounds will be the only valid values. e.g. if
  /// the range is defined as {from_value: 1, to_value: 2, step: 5} then the valid
  /// values will be 1 and 2.
  ///
  /// If the step is less than the distance between the bounds, but the distance is
  /// not a multiple of the step, then the "to" bound will always be a valid value,
  /// e.g. if the range is defined as {from_value: 2, to_value: 5, step: 2} then
  /// the valid values will be 2, 4, and 5.
  uint64_t step;
} rcl_interfaces__msg__IntegerRange;

// Struct for a sequence of rcl_interfaces__msg__IntegerRange.
typedef struct rcl_interfaces__msg__IntegerRange__Sequence
{
  rcl_interfaces__msg__IntegerRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__IntegerRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__DETAIL__INTEGER_RANGE__STRUCT_H_
