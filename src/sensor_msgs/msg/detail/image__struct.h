// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__IMAGE__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__IMAGE__STRUCT_H_

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
// Member 'encoding'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Image in the package sensor_msgs.
typedef struct sensor_msgs__msg__Image
{
  std_msgs__msg__Header header;
  uint32_t height;
  uint32_t width;
  rosidl_runtime_c__String encoding;
  uint8_t is_bigendian;
  uint32_t step;
  rosidl_runtime_c__uint8__Sequence data;
} sensor_msgs__msg__Image;

// Struct for a sequence of sensor_msgs__msg__Image.
typedef struct sensor_msgs__msg__Image__Sequence
{
  sensor_msgs__msg__Image * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__Image__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__IMAGE__STRUCT_H_
