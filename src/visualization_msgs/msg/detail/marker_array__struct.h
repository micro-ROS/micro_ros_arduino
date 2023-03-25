// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:msg/MarkerArray.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MARKER_ARRAY__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__DETAIL__MARKER_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t visualization_msgs__msg__MarkerArray__TYPE_HASH = {1, {
    0x86, 0xcb, 0x88, 0x00, 0xb6, 0xfb, 0x05, 0xb5,
    0xef, 0xf1, 0xab, 0xd7, 0xa5, 0x6f, 0x62, 0xa5,
    0x64, 0x1d, 0x3a, 0xe9, 0xa1, 0xc2, 0x9e, 0x78,
    0xe6, 0x7e, 0x70, 0x4f, 0x1d, 0x06, 0x7d, 0xcf,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/marker__struct.h"

/// Struct defined in msg/MarkerArray in the package visualization_msgs.
typedef struct visualization_msgs__msg__MarkerArray
{
  visualization_msgs__msg__Marker__Sequence markers;
} visualization_msgs__msg__MarkerArray;

// Struct for a sequence of visualization_msgs__msg__MarkerArray.
typedef struct visualization_msgs__msg__MarkerArray__Sequence
{
  visualization_msgs__msg__MarkerArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__MarkerArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MARKER_ARRAY__STRUCT_H_
