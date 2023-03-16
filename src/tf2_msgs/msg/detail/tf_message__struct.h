// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tf2_msgs:msg/TFMessage.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__DETAIL__TF_MESSAGE__STRUCT_H_
#define TF2_MSGS__MSG__DETAIL__TF_MESSAGE__STRUCT_H_

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
#define tf2_msgs__msg__TFMessage__TYPE_VERSION_HASH__INIT {1, { \
      0x76, 0x5e, 0x62, 0x0a, 0x8e, 0x92, 0xd3, 0x29, \
      0x64, 0x4a, 0x27, 0xd0, 0xa5, 0x80, 0x75, 0x79, \
      0x48, 0x66, 0xf0, 0x60, 0x52, 0xec, 0x81, 0x1b, \
      0x15, 0x60, 0xfd, 0x78, 0x58, 0xff, 0xb5, 0xf4, \
    }}
static const rosidl_type_hash_t tf2_msgs__msg__TFMessage__TYPE_VERSION_HASH = tf2_msgs__msg__TFMessage__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"

/// Struct defined in msg/TFMessage in the package tf2_msgs.
typedef struct tf2_msgs__msg__TFMessage
{
  geometry_msgs__msg__TransformStamped__Sequence transforms;
} tf2_msgs__msg__TFMessage;

// Struct for a sequence of tf2_msgs__msg__TFMessage.
typedef struct tf2_msgs__msg__TFMessage__Sequence
{
  tf2_msgs__msg__TFMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__msg__TFMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TF2_MSGS__MSG__DETAIL__TF_MESSAGE__STRUCT_H_
