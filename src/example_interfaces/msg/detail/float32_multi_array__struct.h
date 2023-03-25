// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Float32MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT32_MULTI_ARRAY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT32_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__msg__Float32MultiArray__TYPE_HASH = {1, {
    0x87, 0x05, 0x27, 0x8e, 0x8d, 0x20, 0x6a, 0x97,
    0x11, 0x13, 0x37, 0x94, 0xce, 0x64, 0x66, 0x28,
    0x1e, 0x96, 0x98, 0x13, 0x83, 0x31, 0xc4, 0xb3,
    0xd9, 0x1e, 0x6c, 0xc9, 0xe9, 0xdf, 0xee, 0x26,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Float32MultiArray in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__Float32MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  example_interfaces__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__float__Sequence data;
} example_interfaces__msg__Float32MultiArray;

// Struct for a sequence of example_interfaces__msg__Float32MultiArray.
typedef struct example_interfaces__msg__Float32MultiArray__Sequence
{
  example_interfaces__msg__Float32MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Float32MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT32_MULTI_ARRAY__STRUCT_H_
