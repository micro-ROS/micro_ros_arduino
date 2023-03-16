// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/UInt32MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__U_INT32_MULTI_ARRAY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__U_INT32_MULTI_ARRAY__STRUCT_H_

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
#define example_interfaces__msg__UInt32MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x7d, 0xba, 0xb3, 0x0c, 0x52, 0xd7, 0x0a, 0xe3, \
      0x70, 0x5a, 0xea, 0xcf, 0xda, 0x4a, 0x0d, 0x2f, \
      0xe2, 0x10, 0xe0, 0x48, 0x12, 0x05, 0x67, 0xa6, \
      0x7f, 0x01, 0x02, 0xe7, 0x00, 0x0c, 0xec, 0x0b, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__UInt32MultiArray__TYPE_VERSION_HASH = example_interfaces__msg__UInt32MultiArray__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/UInt32MultiArray in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__UInt32MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  example_interfaces__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__uint32__Sequence data;
} example_interfaces__msg__UInt32MultiArray;

// Struct for a sequence of example_interfaces__msg__UInt32MultiArray.
typedef struct example_interfaces__msg__UInt32MultiArray__Sequence
{
  example_interfaces__msg__UInt32MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__UInt32MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__U_INT32_MULTI_ARRAY__STRUCT_H_
