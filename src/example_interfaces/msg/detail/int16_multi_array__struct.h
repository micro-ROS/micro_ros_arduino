// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Int16MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__INT16_MULTI_ARRAY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__INT16_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__Int16MultiArray__TYPE_HASH = {1, {
    0xd6, 0x63, 0xe7, 0x39, 0x41, 0x04, 0x79, 0x61,
    0x9b, 0xfb, 0x7b, 0x9b, 0x94, 0xb0, 0xa7, 0x64,
    0x99, 0x8a, 0xcf, 0xfa, 0xdb, 0x8b, 0x7f, 0x5b,
    0x20, 0x0a, 0xff, 0xa8, 0x7b, 0x7f, 0xfd, 0xd2,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Int16MultiArray in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__Int16MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  example_interfaces__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__int16__Sequence data;
} example_interfaces__msg__Int16MultiArray;

// Struct for a sequence of example_interfaces__msg__Int16MultiArray.
typedef struct example_interfaces__msg__Int16MultiArray__Sequence
{
  example_interfaces__msg__Int16MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Int16MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__INT16_MULTI_ARRAY__STRUCT_H_
