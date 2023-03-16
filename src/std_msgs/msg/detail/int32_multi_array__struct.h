// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Int32MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT32_MULTI_ARRAY__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__INT32_MULTI_ARRAY__STRUCT_H_

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
#define std_msgs__msg__Int32MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x44, 0x8e, 0xf6, 0x2e, 0x69, 0xae, 0x7d, 0x81, \
      0x6a, 0x80, 0x31, 0xec, 0x0a, 0x12, 0xda, 0xe5, \
      0x20, 0x09, 0xb7, 0xce, 0x55, 0x8a, 0x04, 0xa2, \
      0xc7, 0xe5, 0xc7, 0xb5, 0x6a, 0xc2, 0x0d, 0x34, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Int32MultiArray__TYPE_VERSION_HASH = std_msgs__msg__Int32MultiArray__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Int32MultiArray in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Int32MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  std_msgs__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__int32__Sequence data;
} std_msgs__msg__Int32MultiArray;

// Struct for a sequence of std_msgs__msg__Int32MultiArray.
typedef struct std_msgs__msg__Int32MultiArray__Sequence
{
  std_msgs__msg__Int32MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Int32MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__INT32_MULTI_ARRAY__STRUCT_H_
