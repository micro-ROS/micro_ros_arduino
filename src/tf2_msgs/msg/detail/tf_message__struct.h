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


// Type Hash for interface
static const rosidl_type_hash_t tf2_msgs__msg__TFMessage__TYPE_HASH = {1, {
    0xe3, 0x69, 0xd0, 0xf0, 0x5a, 0x23, 0xae, 0x52,
    0x50, 0x88, 0x54, 0xb6, 0x6f, 0x6a, 0xa0, 0x43,
    0x7f, 0x34, 0x49, 0xd6, 0x52, 0xe8, 0xcb, 0xf2,
    0x2d, 0x5a, 0xbe, 0x85, 0xd0, 0x20, 0xf0, 0x87,
  }};

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
