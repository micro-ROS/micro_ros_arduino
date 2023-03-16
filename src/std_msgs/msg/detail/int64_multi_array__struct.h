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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_msgs__msg__Int64MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x11, 0x1a, 0x91, 0x57, 0xa8, 0xd7, 0xbf, 0x0f, \
      0x55, 0xf3, 0x7e, 0x18, 0x6b, 0x25, 0x0a, 0xe5, \
      0x02, 0x61, 0x4b, 0x8c, 0x99, 0x2e, 0xef, 0x87, \
      0xaa, 0x45, 0xfd, 0xc0, 0x8e, 0x18, 0x85, 0x02, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Int64MultiArray__TYPE_VERSION_HASH = std_msgs__msg__Int64MultiArray__TYPE_VERSION_HASH__INIT;

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
