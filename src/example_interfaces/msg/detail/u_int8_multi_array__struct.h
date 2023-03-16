// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/UInt8MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__U_INT8_MULTI_ARRAY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__U_INT8_MULTI_ARRAY__STRUCT_H_

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
#define example_interfaces__msg__UInt8MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x39, 0x98, 0x0d, 0x6f, 0x44, 0x3e, 0x6b, 0x71, \
      0x55, 0x12, 0x7c, 0x13, 0x0b, 0x0c, 0x7e, 0x0e, \
      0x05, 0x0a, 0x47, 0x74, 0xd9, 0x9d, 0x7a, 0xac, \
      0x9b, 0x8c, 0xc8, 0x33, 0x36, 0xf8, 0x85, 0x93, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__UInt8MultiArray__TYPE_VERSION_HASH = example_interfaces__msg__UInt8MultiArray__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/UInt8MultiArray in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__UInt8MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  example_interfaces__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__uint8__Sequence data;
} example_interfaces__msg__UInt8MultiArray;

// Struct for a sequence of example_interfaces__msg__UInt8MultiArray.
typedef struct example_interfaces__msg__UInt8MultiArray__Sequence
{
  example_interfaces__msg__UInt8MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__UInt8MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__U_INT8_MULTI_ARRAY__STRUCT_H_
