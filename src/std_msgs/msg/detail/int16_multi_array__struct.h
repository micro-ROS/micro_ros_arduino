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


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__Int16MultiArray__TYPE_HASH = {1, {
    0xb5, 0x88, 0x10, 0xe8, 0xe5, 0xb9, 0x0f, 0xb1,
    0x9a, 0x50, 0x62, 0x46, 0x9e, 0xb8, 0x40, 0x9f,
    0x5a, 0xb1, 0x1a, 0x44, 0x6d, 0x60, 0xde, 0x71,
    0x57, 0xa1, 0x45, 0x7e, 0x52, 0xa0, 0x76, 0xce,
  }};

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
