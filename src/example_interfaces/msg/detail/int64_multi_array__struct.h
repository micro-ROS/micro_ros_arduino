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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__msg__Int64MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x4f, 0x08, 0x51, 0xf1, 0xb9, 0xac, 0x0a, 0x82, \
      0xab, 0x7f, 0xde, 0x74, 0x5f, 0x12, 0xe2, 0xc7, \
      0x61, 0x6c, 0xd6, 0x52, 0x58, 0x5b, 0x3b, 0x90, \
      0x17, 0xba, 0x92, 0xc6, 0x40, 0x32, 0xa8, 0x49, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Int64MultiArray__TYPE_VERSION_HASH = example_interfaces__msg__Int64MultiArray__TYPE_VERSION_HASH__INIT;

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
