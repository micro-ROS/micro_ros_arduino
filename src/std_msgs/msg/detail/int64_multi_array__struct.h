// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Int64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT64_MULTI_ARRAY__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__INT64_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__Int64MultiArray__TYPE_HASH = {1, {
    0xe6, 0x0f, 0x9f, 0xe3, 0x4d, 0x69, 0x7f, 0x09,
    0x39, 0xad, 0x49, 0xd3, 0x31, 0x58, 0x69, 0x3c,
    0x12, 0x77, 0xfb, 0xac, 0x0e, 0x2f, 0x04, 0xb7,
    0xc2, 0x99, 0x5d, 0xc2, 0x1c, 0x89, 0xb4, 0x22,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Int64MultiArray in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Int64MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  std_msgs__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__int64__Sequence data;
} std_msgs__msg__Int64MultiArray;

// Struct for a sequence of std_msgs__msg__Int64MultiArray.
typedef struct std_msgs__msg__Int64MultiArray__Sequence
{
  std_msgs__msg__Int64MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Int64MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__INT64_MULTI_ARRAY__STRUCT_H_
