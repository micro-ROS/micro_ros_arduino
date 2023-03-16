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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_msgs__msg__ByteMultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0xbb, 0x56, 0x99, 0x5e, 0xce, 0x1d, 0x87, 0xb1, \
      0x57, 0xe7, 0x40, 0x23, 0x9f, 0xd7, 0xe9, 0x2e, \
      0xd7, 0xc6, 0x0c, 0x63, 0x26, 0xdf, 0xec, 0x09, \
      0x57, 0x7d, 0xd5, 0x23, 0x43, 0x59, 0xab, 0xe3, \
    }}
static const rosidl_type_hash_t std_msgs__msg__ByteMultiArray__TYPE_VERSION_HASH = std_msgs__msg__ByteMultiArray__TYPE_VERSION_HASH__INIT;

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
