// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Float64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY__STRUCT_H_

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
#define std_msgs__msg__Float64MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x69, 0xec, 0x85, 0xd2, 0xc2, 0x85, 0x6c, 0xb8, \
      0xab, 0x63, 0x1b, 0x2d, 0x1a, 0xfb, 0x10, 0xd4, \
      0xc8, 0x2e, 0x4f, 0x85, 0x12, 0xce, 0x9a, 0x5b, \
      0x3e, 0xb1, 0x77, 0x25, 0x62, 0x89, 0x34, 0x62, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Float64MultiArray__TYPE_VERSION_HASH = std_msgs__msg__Float64MultiArray__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Float64MultiArray in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Float64MultiArray
{
  /// Please look at the MultiArrayLayout message definition for
  /// documentation on all multiarrays.
  /// specification of data layout
  std_msgs__msg__MultiArrayLayout layout;
  /// array of data
  rosidl_runtime_c__double__Sequence data;
} std_msgs__msg__Float64MultiArray;

// Struct for a sequence of std_msgs__msg__Float64MultiArray.
typedef struct std_msgs__msg__Float64MultiArray__Sequence
{
  std_msgs__msg__Float64MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Float64MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY__STRUCT_H_
