// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Header.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__HEADER__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__HEADER__STRUCT_H_

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
#define std_msgs__msg__Header__TYPE_VERSION_HASH__INIT {1, { \
      0xec, 0xca, 0xec, 0xc6, 0x5b, 0xbb, 0x07, 0x52, \
      0x47, 0x0f, 0xcd, 0x4f, 0x5a, 0x18, 0x2e, 0x3f, \
      0x9a, 0x68, 0x7d, 0xdb, 0xb1, 0x25, 0xd9, 0xa9, \
      0xf0, 0x69, 0x97, 0x47, 0x77, 0x46, 0xcc, 0x89, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Header__TYPE_VERSION_HASH = std_msgs__msg__Header__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Header in the package std_msgs.
/**
  * Standard metadata for higher-level stamped data types.
  * This is generally used to communicate timestamped data
  * in a particular coordinate frame.
 */
typedef struct std_msgs__msg__Header
{
  /// Two-integer timestamp that is expressed as seconds and nanoseconds.
  builtin_interfaces__msg__Time stamp;
  /// Transform frame with which this data is associated.
  rosidl_runtime_c__String frame_id;
} std_msgs__msg__Header;

// Struct for a sequence of std_msgs__msg__Header.
typedef struct std_msgs__msg__Header__Sequence
{
  std_msgs__msg__Header * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Header__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__HEADER__STRUCT_H_
