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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define geometry_msgs__msg__WrenchStamped__TYPE_VERSION_HASH__INIT {1, { \
      0x88, 0x94, 0xac, 0xf5, 0x20, 0xca, 0xd2, 0x44, \
      0x30, 0x89, 0x5e, 0x0e, 0x34, 0xd3, 0xe4, 0x06, \
      0x63, 0x91, 0x3e, 0xbe, 0x02, 0xc2, 0x82, 0xf5, \
      0x16, 0x9b, 0x39, 0x13, 0x60, 0xb4, 0x8e, 0x59, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__WrenchStamped__TYPE_VERSION_HASH = geometry_msgs__msg__WrenchStamped__TYPE_VERSION_HASH__INIT;

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
