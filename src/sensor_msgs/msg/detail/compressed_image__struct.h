// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/CompressedImage.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__COMPRESSED_IMAGE__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__COMPRESSED_IMAGE__STRUCT_H_

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
// Member 'format'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/CompressedImage in the package sensor_msgs.
typedef struct sensor_msgs__msg__CompressedImage
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String format;
  rosidl_runtime_c__uint8__Sequence data;
} sensor_msgs__msg__CompressedImage;

// Struct for a sequence of sensor_msgs__msg__CompressedImage.
typedef struct sensor_msgs__msg__CompressedImage__Sequence
{
  sensor_msgs__msg__CompressedImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__CompressedImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__COMPRESSED_IMAGE__STRUCT_H_
