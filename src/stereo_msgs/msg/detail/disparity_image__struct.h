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

#include "rosidl_runtime_c/type_hash.h"


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define stereo_msgs__msg__DisparityImage__TYPE_VERSION_HASH__INIT {1, { \
      0x18, 0x09, 0xc0, 0x50, 0x6e, 0x1d, 0x82, 0x8c, \
      0xa8, 0x2c, 0xfe, 0x6c, 0x13, 0xa7, 0xaf, 0x7b, \
      0x68, 0xa5, 0xe4, 0x9f, 0xc5, 0xae, 0x40, 0x22, \
      0x78, 0xa6, 0xa7, 0x12, 0x06, 0x67, 0xd6, 0x84, \
    }}
static const rosidl_type_hash_t stereo_msgs__msg__DisparityImage__TYPE_VERSION_HASH = stereo_msgs__msg__DisparityImage__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'valid_window'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in msg/DisparityImage in the package stereo_msgs.
/**
  * Separate header for compatibility with current TimeSynchronizer.
  * Likely to be removed in a later release, use image.header instead.
 */
typedef struct stereo_msgs__msg__DisparityImage
{
  std_msgs__msg__Header header;
  /// Floating point disparity image. The disparities are pre-adjusted for any
  /// x-offset between the principal points of the two cameras (in the case
  /// that they are verged). That is: d = x_l - x_r - (cx_l - cx_r)
  sensor_msgs__msg__Image image;
  /// Stereo geometry. For disparity d, the depth from the camera is Z = fT/d.
  /// Focal length, pixels
  float f;
  /// Baseline, world units
  float t;
  /// Subwindow of (potentially) valid disparity values.
  sensor_msgs__msg__RegionOfInterest valid_window;
  /// The range of disparities searched.
  /// In the disparity image, any disparity less than min_disparity is invalid.
  /// The disparity search range defines the horopter, or 3D volume that the
  /// stereo algorithm can "see". Points with Z outside of:
  ///     Z_min = fT / max_disparity
  ///     Z_max = fT / min_disparity
  /// could not be found.
  float min_disparity;
  float max_disparity;
  /// Smallest allowed disparity increment. The smallest achievable depth range
  /// resolution is delta_Z = (Z^2/fT)*delta_d.
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
