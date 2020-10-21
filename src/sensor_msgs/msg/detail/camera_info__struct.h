// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__STRUCT_H_

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
// Member 'distortion_model'
#include "rosidl_runtime_c/string.h"
// Member 'd'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

// Struct defined in msg/CameraInfo in the package sensor_msgs.
typedef struct sensor_msgs__msg__CameraInfo
{
  std_msgs__msg__Header header;
  uint32_t height;
  uint32_t width;
  rosidl_runtime_c__String distortion_model;
  rosidl_runtime_c__double__Sequence d;
  double k[9];
  double r[9];
  double p[12];
  uint32_t binning_x;
  uint32_t binning_y;
  sensor_msgs__msg__RegionOfInterest roi;
} sensor_msgs__msg__CameraInfo;

// Struct for a sequence of sensor_msgs__msg__CameraInfo.
typedef struct sensor_msgs__msg__CameraInfo__Sequence
{
  sensor_msgs__msg__CameraInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__CameraInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__STRUCT_H_
