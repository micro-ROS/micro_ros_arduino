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
