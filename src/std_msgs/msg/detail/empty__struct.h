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


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__Empty__TYPE_HASH = {1, {
    0x20, 0xb6, 0x25, 0x25, 0x6f, 0x32, 0xd5, 0xdb,
    0xc0, 0xd0, 0x4f, 0xee, 0x44, 0xf4, 0x3c, 0x41,
    0xe5, 0x1c, 0x70, 0xd3, 0x50, 0x2f, 0x84, 0xb4,
    0xa0, 0x8e, 0x7a, 0x9c, 0x26, 0xa9, 0x63, 0x12,
  }};

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
