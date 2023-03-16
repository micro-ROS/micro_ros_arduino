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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__msg__ByteMultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x86, 0xfe, 0xe0, 0x8d, 0xe9, 0x91, 0x0a, 0x66, \
      0xa2, 0x56, 0x1c, 0x29, 0x5c, 0x50, 0xaf, 0xa2, \
      0x66, 0xe5, 0x73, 0xf0, 0x0d, 0x64, 0xe0, 0x91, \
      0x7e, 0x2c, 0x89, 0xa4, 0x01, 0x20, 0xfa, 0xfb, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__ByteMultiArray__TYPE_VERSION_HASH = example_interfaces__msg__ByteMultiArray__TYPE_VERSION_HASH__INIT;

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
