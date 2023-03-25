// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/UInt16MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__U_INT16_MULTI_ARRAY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__U_INT16_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__UInt16MultiArray__TYPE_HASH = {1, {
    0x50, 0x7f, 0x64, 0x56, 0xc1, 0x96, 0x5e, 0xf6,
    0xea, 0xb8, 0xa9, 0xcf, 0xa8, 0x86, 0x0b, 0xd4,
    0x84, 0xe1, 0xb7, 0x03, 0x9b, 0x4c, 0x4e, 0xa2,
    0xc7, 0x5c, 0x64, 0x81, 0x82, 0xfc, 0xea, 0xde,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/UInt16MultiArray in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__UInt16MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  example_interfaces__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__uint16__Sequence data;
} example_interfaces__msg__UInt16MultiArray;

// Struct for a sequence of example_interfaces__msg__UInt16MultiArray.
typedef struct example_interfaces__msg__UInt16MultiArray__Sequence
{
  example_interfaces__msg__UInt16MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__UInt16MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__U_INT16_MULTI_ARRAY__STRUCT_H_
