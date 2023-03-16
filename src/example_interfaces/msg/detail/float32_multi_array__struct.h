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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__msg__Float32MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x56, 0xf9, 0x31, 0x0d, 0xe7, 0x16, 0x52, 0x55, \
      0xa0, 0x25, 0xf6, 0xc5, 0x9d, 0x9b, 0x03, 0x32, \
      0x8e, 0x80, 0x1f, 0xab, 0xd6, 0xe5, 0x13, 0x6d, \
      0x5e, 0xcc, 0x93, 0x05, 0x9e, 0x0d, 0xfe, 0x55, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Float32MultiArray__TYPE_VERSION_HASH = example_interfaces__msg__Float32MultiArray__TYPE_VERSION_HASH__INIT;

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
