// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/UInt64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__U_INT64_MULTI_ARRAY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__U_INT64_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__UInt64MultiArray__TYPE_HASH = {1, {
    0xc0, 0x5a, 0x34, 0x8b, 0xd8, 0x87, 0xaa, 0xc7,
    0x6a, 0x94, 0x7c, 0x90, 0x1f, 0x67, 0xf9, 0x3b,
    0xf9, 0xa7, 0xfa, 0x14, 0xb2, 0x8d, 0xce, 0x02,
    0xeb, 0x49, 0x5d, 0xad, 0xeb, 0x88, 0x42, 0xe4,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/UInt64MultiArray in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__UInt64MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  example_interfaces__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__uint64__Sequence data;
} example_interfaces__msg__UInt64MultiArray;

// Struct for a sequence of example_interfaces__msg__UInt64MultiArray.
typedef struct example_interfaces__msg__UInt64MultiArray__Sequence
{
  example_interfaces__msg__UInt64MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__UInt64MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__U_INT64_MULTI_ARRAY__STRUCT_H_
