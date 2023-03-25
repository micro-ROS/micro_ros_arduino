// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/UInt64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT64_MULTI_ARRAY__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__U_INT64_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__UInt64MultiArray__TYPE_HASH = {1, {
    0xfc, 0x1c, 0x68, 0x5c, 0x2f, 0x76, 0xbd, 0xc6,
    0x98, 0x3d, 0xa0, 0x25, 0xcb, 0x25, 0xd2, 0xdb,
    0x5f, 0xb5, 0x15, 0x7b, 0x05, 0x9e, 0x30, 0x0f,
    0x6d, 0x95, 0x7d, 0x86, 0xf9, 0x81, 0xb3, 0x66,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/UInt64MultiArray in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__UInt64MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  std_msgs__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__uint64__Sequence data;
} std_msgs__msg__UInt64MultiArray;

// Struct for a sequence of std_msgs__msg__UInt64MultiArray.
typedef struct std_msgs__msg__UInt64MultiArray__Sequence
{
  std_msgs__msg__UInt64MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__UInt64MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__U_INT64_MULTI_ARRAY__STRUCT_H_
