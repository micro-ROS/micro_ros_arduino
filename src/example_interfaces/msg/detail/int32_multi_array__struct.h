// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Int32MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__INT32_MULTI_ARRAY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__INT32_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__Int32MultiArray__TYPE_HASH = {1, {
    0xb3, 0x47, 0xaf, 0xf8, 0xe3, 0x8e, 0x2c, 0xe3,
    0xf7, 0xf4, 0x02, 0x3d, 0xb7, 0x92, 0x2d, 0x2d,
    0x4a, 0xbb, 0x9d, 0x59, 0x3b, 0x03, 0xc4, 0x0b,
    0x14, 0x27, 0x64, 0x0c, 0x26, 0x59, 0x5b, 0xfa,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Int32MultiArray in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__Int32MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  example_interfaces__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__int32__Sequence data;
} example_interfaces__msg__Int32MultiArray;

// Struct for a sequence of example_interfaces__msg__Int32MultiArray.
typedef struct example_interfaces__msg__Int32MultiArray__Sequence
{
  example_interfaces__msg__Int32MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Int32MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__INT32_MULTI_ARRAY__STRUCT_H_
