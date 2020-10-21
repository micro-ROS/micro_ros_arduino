// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/PointCloud2.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__STRUCT_H_

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
// Member 'fields'
#include "sensor_msgs/msg/detail/point_field__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/PointCloud2 in the package sensor_msgs.
typedef struct sensor_msgs__msg__PointCloud2
{
  std_msgs__msg__Header header;
  uint32_t height;
  uint32_t width;
  sensor_msgs__msg__PointField__Sequence fields;
  bool is_bigendian;
  uint32_t point_step;
  uint32_t row_step;
  rosidl_runtime_c__uint8__Sequence data;
  bool is_dense;
} sensor_msgs__msg__PointCloud2;

// Struct for a sequence of sensor_msgs__msg__PointCloud2.
typedef struct sensor_msgs__msg__PointCloud2__Sequence
{
  sensor_msgs__msg__PointCloud2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__PointCloud2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__STRUCT_H_
