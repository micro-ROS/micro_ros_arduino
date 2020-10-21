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


// Constants defined in the message

// Struct defined in msg/IntegerRange in the package rcl_interfaces.
typedef struct rcl_interfaces__msg__IntegerRange
{
  int64_t from_value;
  int64_t to_value;
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
