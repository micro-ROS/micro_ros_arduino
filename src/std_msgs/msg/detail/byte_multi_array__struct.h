// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/ByteMultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__BYTE_MULTI_ARRAY__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__BYTE_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__ByteMultiArray__TYPE_HASH = {1, {
    0x97, 0x2f, 0xec, 0x7f, 0x50, 0xab, 0x3c, 0x1d,
    0x06, 0x78, 0x3c, 0x22, 0x8e, 0x79, 0xe8, 0xa9,
    0xa5, 0x09, 0x02, 0x17, 0x08, 0xc5, 0x11, 0xc0,
    0x59, 0x92, 0x62, 0x61, 0xad, 0xa9, 0x01, 0xd4,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ByteMultiArray in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__ByteMultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  std_msgs__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__octet__Sequence data;
} std_msgs__msg__ByteMultiArray;

// Struct for a sequence of std_msgs__msg__ByteMultiArray.
typedef struct std_msgs__msg__ByteMultiArray__Sequence
{
  std_msgs__msg__ByteMultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__ByteMultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__BYTE_MULTI_ARRAY__STRUCT_H_
