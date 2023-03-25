// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Float64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__Float64MultiArray__TYPE_HASH = {1, {
    0x62, 0xa0, 0x98, 0x5e, 0x79, 0x20, 0xb7, 0xbc,
    0x48, 0x9d, 0x13, 0x92, 0xf0, 0x8c, 0x06, 0xba,
    0x00, 0x80, 0xff, 0xf5, 0xb8, 0xea, 0xa0, 0x9b,
    0x27, 0xdc, 0xac, 0x12, 0x2f, 0x50, 0xad, 0x95,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Float64MultiArray in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__Float64MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  example_interfaces__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__double__Sequence data;
} example_interfaces__msg__Float64MultiArray;

// Struct for a sequence of example_interfaces__msg__Float64MultiArray.
typedef struct example_interfaces__msg__Float64MultiArray__Sequence
{
  example_interfaces__msg__Float64MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Float64MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__STRUCT_H_
