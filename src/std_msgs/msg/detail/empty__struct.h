// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Empty.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__EMPTY__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__EMPTY__STRUCT_H_

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
#define std_msgs__msg__Empty__TYPE_VERSION_HASH__INIT {1, { \
      0xb2, 0x46, 0xf4, 0x89, 0xd9, 0x95, 0x84, 0x99, \
      0x61, 0x07, 0x7a, 0x5d, 0xb0, 0x30, 0xf3, 0x23, \
      0x9e, 0x30, 0xe1, 0x3d, 0xc9, 0x43, 0xd9, 0x36, \
      0xa6, 0x26, 0xc5, 0x31, 0x95, 0x10, 0x85, 0x02, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Empty__TYPE_VERSION_HASH = std_msgs__msg__Empty__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Empty in the package std_msgs.
typedef struct std_msgs__msg__Empty
{
  uint8_t structure_needs_at_least_one_member;
} std_msgs__msg__Empty;

// Struct for a sequence of std_msgs__msg__Empty.
typedef struct std_msgs__msg__Empty__Sequence
{
  std_msgs__msg__Empty * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Empty__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__EMPTY__STRUCT_H_
