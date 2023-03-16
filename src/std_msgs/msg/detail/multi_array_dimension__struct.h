// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_

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
#define std_msgs__msg__MultiArrayDimension__TYPE_VERSION_HASH__INIT {1, { \
      0x0a, 0xa3, 0x38, 0x4b, 0x06, 0x65, 0xfb, 0xa8, \
      0x8b, 0xa3, 0xd4, 0x65, 0x90, 0x88, 0xed, 0x58, \
      0x4f, 0xa2, 0xe2, 0x4c, 0xe7, 0x40, 0x49, 0x62, \
      0xb3, 0x1a, 0x03, 0xe6, 0xee, 0x54, 0xf6, 0xd8, \
    }}
static const rosidl_type_hash_t std_msgs__msg__MultiArrayDimension__TYPE_VERSION_HASH = std_msgs__msg__MultiArrayDimension__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MultiArrayDimension in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__MultiArrayDimension
{
  /// label of given dimension
  rosidl_runtime_c__String label;
  /// size of given dimension (in type units)
  uint32_t size;
  /// stride of given dimension
  uint32_t stride;
} std_msgs__msg__MultiArrayDimension;

// Struct for a sequence of std_msgs__msg__MultiArrayDimension.
typedef struct std_msgs__msg__MultiArrayDimension__Sequence
{
  std_msgs__msg__MultiArrayDimension * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__MultiArrayDimension__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_
