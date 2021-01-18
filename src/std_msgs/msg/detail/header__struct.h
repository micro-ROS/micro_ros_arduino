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


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Header in the package std_msgs.
typedef struct std_msgs__msg__Header
{
  builtin_interfaces__msg__Time stamp;
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
