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


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__Bool__TYPE_HASH = {1, {
    0xfe, 0xb9, 0x1e, 0x99, 0x5f, 0xf9, 0xeb, 0xd0,
    0x9c, 0x0c, 0xb3, 0xd2, 0xae, 0xd1, 0x8b, 0x11,
    0x07, 0x75, 0x85, 0x83, 0x9f, 0xb5, 0xdb, 0x80,
    0x19, 0x3b, 0x62, 0xd7, 0x45, 0x28, 0xf6, 0xc9,
  }};

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
