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


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__InertiaStamped__TYPE_HASH = {1, {
    0x76, 0x6b, 0xe4, 0x59, 0x76, 0x25, 0x2b, 0xab,
    0xf7, 0xf9, 0xd8, 0xac, 0x4a, 0xe7, 0xc9, 0x12,
    0xa7, 0xce, 0xcc, 0xf7, 0x10, 0x35, 0x62, 0x25,
    0x29, 0xf2, 0x75, 0x18, 0xb6, 0x95, 0xaa, 0x09,
  }};

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
