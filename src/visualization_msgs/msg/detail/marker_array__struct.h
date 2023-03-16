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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define visualization_msgs__msg__MarkerArray__TYPE_VERSION_HASH__INIT {1, { \
      0xcf, 0x85, 0x0f, 0xa3, 0x84, 0x9d, 0xaa, 0x11, \
      0x81, 0x17, 0xbe, 0x51, 0x2e, 0xf8, 0x0a, 0x66, \
      0x42, 0xb3, 0xe1, 0xf4, 0xc2, 0x42, 0x60, 0xeb, \
      0x58, 0xe3, 0x43, 0xbf, 0x94, 0x92, 0x3e, 0x36, \
    }}
static const rosidl_type_hash_t visualization_msgs__msg__MarkerArray__TYPE_VERSION_HASH = visualization_msgs__msg__MarkerArray__TYPE_VERSION_HASH__INIT;

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
