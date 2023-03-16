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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_msgs__msg__UInt32MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x9f, 0x51, 0x70, 0x21, 0xbe, 0x6a, 0xfc, 0xee, \
      0x21, 0x61, 0x90, 0x62, 0xd1, 0xc1, 0xab, 0x0b, \
      0x14, 0xa8, 0x71, 0x15, 0x26, 0x0c, 0x67, 0x61, \
      0x86, 0x67, 0x90, 0x05, 0x97, 0xc5, 0xe3, 0xf4, \
    }}
static const rosidl_type_hash_t std_msgs__msg__UInt32MultiArray__TYPE_VERSION_HASH = std_msgs__msg__UInt32MultiArray__TYPE_VERSION_HASH__INIT;

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
