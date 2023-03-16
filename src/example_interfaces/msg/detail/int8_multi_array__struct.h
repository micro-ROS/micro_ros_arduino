// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Int8MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__INT8_MULTI_ARRAY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__INT8_MULTI_ARRAY__STRUCT_H_

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
#define example_interfaces__msg__Int8MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x68, 0x1e, 0xb2, 0x8e, 0x30, 0xf8, 0x36, 0xb0, \
      0x5c, 0xfc, 0x84, 0xac, 0x10, 0x23, 0xaa, 0x73, \
      0x3e, 0xc8, 0xea, 0xb3, 0xb0, 0xb5, 0x5b, 0x79, \
      0x80, 0xc5, 0x1f, 0x5f, 0x80, 0xab, 0xb2, 0xff, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Int8MultiArray__TYPE_VERSION_HASH = example_interfaces__msg__Int8MultiArray__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Int8MultiArray in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__Int8MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  example_interfaces__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__int8__Sequence data;
} example_interfaces__msg__Int8MultiArray;

// Struct for a sequence of example_interfaces__msg__Int8MultiArray.
typedef struct example_interfaces__msg__Int8MultiArray__Sequence
{
  example_interfaces__msg__Int8MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Int8MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__INT8_MULTI_ARRAY__STRUCT_H_
