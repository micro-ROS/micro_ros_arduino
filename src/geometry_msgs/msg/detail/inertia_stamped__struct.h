// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/InertiaStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__INERTIA_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__INERTIA_STAMPED__STRUCT_H_

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
#define geometry_msgs__msg__InertiaStamped__TYPE_VERSION_HASH__INIT {1, { \
      0x1a, 0xda, 0xd2, 0x9e, 0x1f, 0x4c, 0xcb, 0x29, \
      0x09, 0x0d, 0xec, 0x12, 0x53, 0xe1, 0x44, 0xc9, \
      0x22, 0xa0, 0x69, 0x28, 0x19, 0xcd, 0x43, 0xc0, \
      0x23, 0xb4, 0x15, 0xcd, 0x4b, 0x73, 0xf7, 0x64, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__InertiaStamped__TYPE_VERSION_HASH = geometry_msgs__msg__InertiaStamped__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'inertia'
#include "geometry_msgs/msg/detail/inertia__struct.h"

/// Struct defined in msg/InertiaStamped in the package geometry_msgs.
/**
  * An Inertia with a time stamp and reference frame.
 */
typedef struct geometry_msgs__msg__InertiaStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Inertia inertia;
} geometry_msgs__msg__InertiaStamped;

// Struct for a sequence of geometry_msgs__msg__InertiaStamped.
typedef struct geometry_msgs__msg__InertiaStamped__Sequence
{
  geometry_msgs__msg__InertiaStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__InertiaStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__INERTIA_STAMPED__STRUCT_H_
