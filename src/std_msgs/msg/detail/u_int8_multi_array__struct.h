// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/UInt8MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT8_MULTI_ARRAY__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__U_INT8_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__UInt8MultiArray__TYPE_HASH = {1, {
    0x56, 0x87, 0xe8, 0x61, 0xb8, 0xd3, 0x07, 0xa5,
    0xe4, 0x8b, 0x75, 0x15, 0x46, 0x7a, 0xe7, 0xa5,
    0xfc, 0x2d, 0xaf, 0x80, 0x5b, 0xd0, 0xce, 0x6d,
    0x8e, 0x9e, 0x60, 0x4b, 0xad, 0xe9, 0xf3, 0x85,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/UInt8MultiArray in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__UInt8MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  std_msgs__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__uint8__Sequence data;
} std_msgs__msg__UInt8MultiArray;

// Struct for a sequence of std_msgs__msg__UInt8MultiArray.
typedef struct std_msgs__msg__UInt8MultiArray__Sequence
{
  std_msgs__msg__UInt8MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__UInt8MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__U_INT8_MULTI_ARRAY__STRUCT_H_
