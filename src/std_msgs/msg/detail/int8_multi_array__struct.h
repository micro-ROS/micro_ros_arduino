// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Int8MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT8_MULTI_ARRAY__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__INT8_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__Int8MultiArray__TYPE_HASH = {1, {
    0xf2, 0x19, 0x98, 0xd4, 0xb4, 0x92, 0xab, 0xd6,
    0x33, 0x30, 0x76, 0x5d, 0x75, 0xd5, 0x83, 0x12,
    0x38, 0xd4, 0x00, 0x74, 0x03, 0x86, 0xf6, 0x51,
    0xf1, 0x3a, 0x87, 0x2a, 0x4d, 0x21, 0x88, 0xdb,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Int8MultiArray in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Int8MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  std_msgs__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__int8__Sequence data;
} std_msgs__msg__Int8MultiArray;

// Struct for a sequence of std_msgs__msg__Int8MultiArray.
typedef struct std_msgs__msg__Int8MultiArray__Sequence
{
  std_msgs__msg__Int8MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Int8MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__INT8_MULTI_ARRAY__STRUCT_H_
