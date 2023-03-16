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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__msg__UInt64MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x8c, 0x74, 0xc4, 0x1e, 0xde, 0x5a, 0x08, 0x6d, \
      0xee, 0xc6, 0xb6, 0x3f, 0x05, 0xf6, 0xc4, 0xb2, \
      0xbe, 0xce, 0xa8, 0x67, 0xba, 0x7d, 0x1c, 0x8c, \
      0xcf, 0xdb, 0xdc, 0x02, 0xe0, 0xfe, 0x73, 0xc4, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__UInt64MultiArray__TYPE_VERSION_HASH = example_interfaces__msg__UInt64MultiArray__TYPE_VERSION_HASH__INIT;

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
