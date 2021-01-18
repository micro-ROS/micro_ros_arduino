// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/MultiArrayDimension in the package example_interfaces.
typedef struct example_interfaces__msg__MultiArrayDimension
{
  rosidl_runtime_c__String label;
  uint32_t size;
  uint32_t stride;
} example_interfaces__msg__MultiArrayDimension;

// Struct for a sequence of example_interfaces__msg__MultiArrayDimension.
typedef struct example_interfaces__msg__MultiArrayDimension__Sequence
{
  example_interfaces__msg__MultiArrayDimension * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__MultiArrayDimension__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_
