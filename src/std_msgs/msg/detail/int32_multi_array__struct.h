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


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__Int32MultiArray__TYPE_HASH = {1, {
    0x84, 0xa7, 0x34, 0x63, 0x23, 0x52, 0x5d, 0x1b,
    0x4d, 0xfc, 0xa8, 0x99, 0xdf, 0x38, 0x20, 0xf2,
    0x45, 0xe5, 0x40, 0x09, 0xda, 0xc5, 0xa6, 0xb6,
    0x92, 0x17, 0xd1, 0x4f, 0xde, 0xfd, 0x17, 0x01,
  }};

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
