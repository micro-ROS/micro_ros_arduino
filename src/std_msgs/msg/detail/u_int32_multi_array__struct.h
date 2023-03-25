// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/UInt32MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT32_MULTI_ARRAY__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__U_INT32_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__UInt32MultiArray__TYPE_HASH = {1, {
    0x6c, 0x25, 0x77, 0xc7, 0xad, 0x3c, 0xbd, 0xcc,
    0x21, 0x64, 0xa4, 0x1c, 0x12, 0xf1, 0xd5, 0xad,
    0x31, 0x4e, 0xa3, 0x20, 0xf3, 0xfb, 0x1e, 0xe4,
    0x7e, 0x78, 0x01, 0x9f, 0xe1, 0x6b, 0xb5, 0xb0,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/UInt32MultiArray in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__UInt32MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  std_msgs__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__uint32__Sequence data;
} std_msgs__msg__UInt32MultiArray;

// Struct for a sequence of std_msgs__msg__UInt32MultiArray.
typedef struct std_msgs__msg__UInt32MultiArray__Sequence
{
  std_msgs__msg__UInt32MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__UInt32MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__U_INT32_MULTI_ARRAY__STRUCT_H_
