// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/TransformStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'child_frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__struct.h"

// Struct defined in msg/TransformStamped in the package geometry_msgs.
typedef struct geometry_msgs__msg__TransformStamped
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String child_frame_id;
  geometry_msgs__msg__Transform transform;
} geometry_msgs__msg__TransformStamped;

// Struct for a sequence of geometry_msgs__msg__TransformStamped.
typedef struct geometry_msgs__msg__TransformStamped__Sequence
{
  geometry_msgs__msg__TransformStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__TransformStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM_STAMPED__STRUCT_H_
