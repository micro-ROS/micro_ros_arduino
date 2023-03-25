// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Int64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__INT64_MULTI_ARRAY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__INT64_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__Int64MultiArray__TYPE_HASH = {1, {
    0xeb, 0xce, 0x42, 0xc0, 0xd2, 0xb8, 0x1b, 0xc5,
    0x30, 0x9d, 0xeb, 0x0b, 0x2d, 0x83, 0xe3, 0x02,
    0x36, 0xae, 0xb4, 0x89, 0x9a, 0xea, 0x3c, 0xc7,
    0xdd, 0xd1, 0x87, 0x87, 0xaf, 0x39, 0xc9, 0x4a,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Int64MultiArray in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__Int64MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  example_interfaces__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__int64__Sequence data;
} example_interfaces__msg__Int64MultiArray;

// Struct for a sequence of example_interfaces__msg__Int64MultiArray.
typedef struct example_interfaces__msg__Int64MultiArray__Sequence
{
  example_interfaces__msg__Int64MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Int64MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__INT64_MULTI_ARRAY__STRUCT_H_
