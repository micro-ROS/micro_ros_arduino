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

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__ByteMultiArray__TYPE_HASH = {1, {
    0x25, 0x7f, 0xc3, 0x42, 0x9b, 0x3c, 0x4d, 0xd0,
    0xae, 0xa6, 0x78, 0xc2, 0x34, 0xf5, 0x43, 0x66,
    0x5d, 0x11, 0x44, 0xb3, 0x96, 0xf8, 0x2c, 0x7e,
    0xe6, 0x0f, 0xed, 0x15, 0x1e, 0x1d, 0xac, 0xe3,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ByteMultiArray in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__ByteMultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  example_interfaces__msg__MultiArrayLayout layout;
  /// array of data
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
