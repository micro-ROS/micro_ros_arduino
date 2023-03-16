// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Int16MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT16_MULTI_ARRAY__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__INT16_MULTI_ARRAY__STRUCT_H_

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
#define std_msgs__msg__Int16MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x98, 0x7f, 0xc1, 0x77, 0x80, 0x33, 0x5f, 0xf0, \
      0x50, 0xb2, 0xcd, 0x99, 0xbc, 0x9f, 0x06, 0xb9, \
      0xf4, 0xd4, 0xae, 0x50, 0x08, 0x17, 0x88, 0x98, \
      0xfe, 0x1c, 0x41, 0x39, 0x4d, 0xd3, 0xb0, 0xdb, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Int16MultiArray__TYPE_VERSION_HASH = std_msgs__msg__Int16MultiArray__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Int16MultiArray in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Int16MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  std_msgs__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__int16__Sequence data;
} std_msgs__msg__Int16MultiArray;

// Struct for a sequence of std_msgs__msg__Int16MultiArray.
typedef struct std_msgs__msg__Int16MultiArray__Sequence
{
  std_msgs__msg__Int16MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Int16MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__INT16_MULTI_ARRAY__STRUCT_H_
