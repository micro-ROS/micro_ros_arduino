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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_msgs__msg__UInt8MultiArray__TYPE_VERSION_HASH__INIT {1, { \
      0x45, 0x65, 0x31, 0xd2, 0x2f, 0x1c, 0xe7, 0x61, \
      0x8e, 0x43, 0x77, 0x71, 0x5d, 0xf3, 0x61, 0x03, \
      0xec, 0x9b, 0xbe, 0xb6, 0x7c, 0xcc, 0xf2, 0x01, \
      0x32, 0x84, 0x22, 0x93, 0x0e, 0x86, 0x6c, 0x35, \
    }}
static const rosidl_type_hash_t std_msgs__msg__UInt8MultiArray__TYPE_VERSION_HASH = std_msgs__msg__UInt8MultiArray__TYPE_VERSION_HASH__INIT;

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
