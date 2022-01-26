// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/ByteMultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/ByteMultiArray in the package example_interfaces.
typedef struct example_interfaces__msg__ByteMultiArray
{
  example_interfaces__msg__MultiArrayLayout layout;
  rosidl_runtime_c__octet__Sequence data;
} example_interfaces__msg__ByteMultiArray;

// Struct for a sequence of example_interfaces__msg__ByteMultiArray.
typedef struct example_interfaces__msg__ByteMultiArray__Sequence
{
  example_interfaces__msg__ByteMultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__ByteMultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__STRUCT_H_
