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


// Constants defined in the message

// Struct defined in msg/FloatingPointRange in the package rcl_interfaces.
typedef struct rcl_interfaces__msg__FloatingPointRange
{
  double from_value;
  double to_value;
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
