// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:msg/Int16MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__INT16_MULTI_ARRAY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DETAIL__INT16_MULTI_ARRAY__STRUCT_H_

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
#define example_interfaces__msg__Int16MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x40, 0xc6, 0x7f, 0x39, 0x21, 0xdc, 0x5d, 0x3b, \
      0xef, 0x4b, 0x7f, 0x99, 0xb6, 0xe2, 0x05, 0xf2, \
      0x49, 0xc2, 0xc1, 0x3a, 0xc8, 0x79, 0x90, 0x48, \
      0x8e, 0x37, 0x7a, 0xde, 0x6c, 0xc9, 0xc2, 0x5a, \
    }}
static const rosidl_type_hash_t example_interfaces__msg__Int16MultiArray__TYPE_VERSION_HASH = example_interfaces__msg__Int16MultiArray__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Int16MultiArray in the package example_interfaces.
/**
  * This is an example of using complex datatypes.
  * It is not recommended to use directly.
  * To use a similar datastruct please define a custom message with appropriate semantic meaning.
 */
typedef struct example_interfaces__msg__Int16MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  example_interfaces__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__int16__Sequence data;
} example_interfaces__msg__Int16MultiArray;

// Struct for a sequence of example_interfaces__msg__Int16MultiArray.
typedef struct example_interfaces__msg__Int16MultiArray__Sequence
{
  example_interfaces__msg__Int16MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Int16MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__INT16_MULTI_ARRAY__STRUCT_H_
