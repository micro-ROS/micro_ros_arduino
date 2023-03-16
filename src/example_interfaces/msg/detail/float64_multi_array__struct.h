// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Float64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__STRUCT_H_

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
#define example_interfaces__msg__Float64MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0xb1, 0xa3, 0x56, 0x90, 0x17, 0x1f, 0xd3, 0x6c, \
      0x92, 0x85, 0xff, 0xa4, 0x50, 0x6e, 0x71, 0x4b, \
      0x04, 0x96, 0x4f, 0x4a, 0xa3, 0x07, 0xc3, 0x24, \
      0x79, 0x16, 0xb8, 0xea, 0x4a, 0x51, 0xd7, 0x78, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Float64MultiArray__TYPE_VERSION_HASH = example_interfaces__msg__Float64MultiArray__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Float64MultiArray in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__Float64MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  example_interfaces__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__double__Sequence data;
} example_interfaces__msg__Float64MultiArray;

// Struct for a sequence of example_interfaces__msg__Float64MultiArray.
typedef struct example_interfaces__msg__Float64MultiArray__Sequence
{
  example_interfaces__msg__Float64MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Float64MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__STRUCT_H_
