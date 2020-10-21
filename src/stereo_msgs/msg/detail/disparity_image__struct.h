// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stereo_msgs:msg/DisparityImage.idl
// generated code does not contain a copyright notice

#ifndef STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__STRUCT_H_
#define STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__STRUCT_H_

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
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'valid_window'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

// Struct defined in msg/DisparityImage in the package stereo_msgs.
typedef struct stereo_msgs__msg__DisparityImage
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__Image image;
  float f;
  float t;
  sensor_msgs__msg__RegionOfInterest valid_window;
  float min_disparity;
  float max_disparity;
  float delta_d;
} stereo_msgs__msg__DisparityImage;

// Struct for a sequence of stereo_msgs__msg__DisparityImage.
typedef struct stereo_msgs__msg__DisparityImage__Sequence
{
  stereo_msgs__msg__DisparityImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stereo_msgs__msg__DisparityImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__STRUCT_H_
