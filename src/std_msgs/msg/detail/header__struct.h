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


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__Header__TYPE_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};

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
