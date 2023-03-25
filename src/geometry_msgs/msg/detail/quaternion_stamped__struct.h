// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/QuaternionStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__QUATERNION_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__QUATERNION_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__QuaternionStamped__TYPE_HASH = {1, {
    0x38, 0x1a, 0xdd, 0x86, 0xc6, 0xc3, 0x16, 0x06,
    0x44, 0xd2, 0x28, 0xca, 0x34, 0x21, 0x82, 0xc7,
    0xfd, 0x6c, 0x7f, 0xab, 0x11, 0xc7, 0xa8, 0x5a,
    0xd8, 0x17, 0xa9, 0xcc, 0x22, 0xdb, 0xac, 0x6e,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/QuaternionStamped in the package geometry_msgs.
/**
  * This represents an orientation with reference coordinate frame and timestamp.
 */
typedef struct geometry_msgs__msg__QuaternionStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Quaternion quaternion;
} geometry_msgs__msg__QuaternionStamped;

// Struct for a sequence of geometry_msgs__msg__QuaternionStamped.
typedef struct geometry_msgs__msg__QuaternionStamped__Sequence
{
  geometry_msgs__msg__QuaternionStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__QuaternionStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__QUATERNION_STAMPED__STRUCT_H_
