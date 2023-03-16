// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Bool.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__BOOL__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__BOOL__STRUCT_H_

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
#define std_msgs__msg__Bool__TYPE_VERSION_HASH__INIT {1, { \
      0x9d, 0x4a, 0x4c, 0xbf, 0x78, 0xa5, 0x02, 0xa4, \
      0x19, 0x5b, 0xfc, 0x0e, 0xb2, 0x59, 0x27, 0x57, \
      0xbf, 0xf9, 0xc2, 0x25, 0xb2, 0x7f, 0xd0, 0xf1, \
      0x49, 0x9b, 0x9e, 0x39, 0xe0, 0x66, 0xff, 0xb3, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Bool__TYPE_VERSION_HASH = std_msgs__msg__Bool__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Bool in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Bool
{
  bool data;
} std_msgs__msg__Bool;

// Struct for a sequence of std_msgs__msg__Bool.
typedef struct std_msgs__msg__Bool__Sequence
{
  std_msgs__msg__Bool * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Bool__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__BOOL__STRUCT_H_
