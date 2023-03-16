// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__TWIST__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__TWIST__STRUCT_H_

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
#define geometry_msgs__msg__Twist__TYPE_VERSION_HASH__INIT {1, { \
      0x99, 0x6a, 0x25, 0x38, 0x22, 0x47, 0x6d, 0x80, \
      0xc2, 0x16, 0xe9, 0x39, 0x4f, 0x17, 0xb6, 0x5d, \
      0xa4, 0x2c, 0xda, 0x05, 0xb5, 0x74, 0x11, 0x10, \
      0x86, 0xde, 0xb7, 0xc6, 0x97, 0x83, 0xf6, 0x71, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__Twist__TYPE_VERSION_HASH = geometry_msgs__msg__Twist__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'linear'
// Member 'angular'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Twist in the package geometry_msgs.
/**
  * This expresses velocity in free space broken into its linear and angular parts.
 */
typedef struct geometry_msgs__msg__Twist
{
  geometry_msgs__msg__Vector3 linear;
  geometry_msgs__msg__Vector3 angular;
} geometry_msgs__msg__Twist;

// Struct for a sequence of geometry_msgs__msg__Twist.
typedef struct geometry_msgs__msg__Twist__Sequence
{
  geometry_msgs__msg__Twist * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Twist__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__TWIST__STRUCT_H_
