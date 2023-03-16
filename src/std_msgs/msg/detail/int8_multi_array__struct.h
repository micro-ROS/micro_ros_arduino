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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_msgs__msg__Int8MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x94, 0xb1, 0x10, 0x56, 0x37, 0x60, 0x80, 0x25, \
      0xc1, 0xe2, 0xd7, 0x02, 0xab, 0x9a, 0xbb, 0xd5, \
      0x8e, 0x2e, 0xe1, 0x97, 0x3d, 0x50, 0xe8, 0x27, \
      0x6d, 0x47, 0xb7, 0xfc, 0x9d, 0x95, 0x05, 0x1a, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Int8MultiArray__TYPE_VERSION_HASH = std_msgs__msg__Int8MultiArray__TYPE_VERSION_HASH__INIT;

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
