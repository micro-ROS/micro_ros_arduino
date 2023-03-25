// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/WrenchStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__WRENCH_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__WRENCH_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__WrenchStamped__TYPE_HASH = {1, {
    0x8d, 0xc3, 0xde, 0xaf, 0x06, 0xb2, 0xab, 0x28,
    0x1f, 0x9f, 0x9a, 0x74, 0x2a, 0x89, 0x61, 0xc3,
    0x28, 0xca, 0x7c, 0xec, 0x16, 0xe3, 0xfd, 0x65,
    0x86, 0xd3, 0xa5, 0xc8, 0x3f, 0xa7, 0x8f, 0x77,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.h"

/// Struct defined in msg/WrenchStamped in the package geometry_msgs.
/**
  * A wrench with reference coordinate frame and timestamp
 */
typedef struct geometry_msgs__msg__WrenchStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Wrench wrench;
} geometry_msgs__msg__WrenchStamped;

// Struct for a sequence of geometry_msgs__msg__WrenchStamped.
typedef struct geometry_msgs__msg__WrenchStamped__Sequence
{
  geometry_msgs__msg__WrenchStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__WrenchStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__WRENCH_STAMPED__STRUCT_H_
