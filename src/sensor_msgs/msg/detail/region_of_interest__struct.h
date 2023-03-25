// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/RegionOfInterest.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__REGION_OF_INTEREST__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__REGION_OF_INTEREST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__msg__RegionOfInterest__TYPE_HASH = {1, {
    0xad, 0x16, 0xbc, 0xba, 0x5f, 0x91, 0x31, 0xdc,
    0xdb, 0xa6, 0xfb, 0xde, 0xd1, 0x9f, 0x72, 0x6f,
    0x54, 0x40, 0xe3, 0xc5, 0x13, 0xb4, 0xfb, 0x58,
    0x6d, 0xd3, 0x02, 0x7e, 0xee, 0xd8, 0xab, 0xb1,
  }};

// Constants defined in the message

/// Struct defined in msg/RegionOfInterest in the package sensor_msgs.
/**
  * This message is used to specify a region of interest within an image.
  *
  * When used to specify the ROI setting of the camera when the image was
  * taken, the height and width fields should either match the height and
  * width fields for the associated image; or height = width = 0
  * indicates that the full resolution image was captured.
 */
typedef struct sensor_msgs__msg__RegionOfInterest
{
  /// Leftmost pixel of the ROI
  /// (0 if the ROI includes the left edge of the image)
  uint32_t x_offset;
  /// Topmost pixel of the ROI
  /// (0 if the ROI includes the top edge of the image)
  uint32_t y_offset;
  /// Height of ROI
  uint32_t height;
  /// Width of ROI
  uint32_t width;
  /// True if a distinct rectified ROI should be calculated from the "raw"
  /// ROI in this message. Typically this should be False if the full image
  /// is captured (ROI not used), and True if a subwindow is captured (ROI
  /// used).
  bool do_rectify;
} sensor_msgs__msg__RegionOfInterest;

// Struct for a sequence of sensor_msgs__msg__RegionOfInterest.
typedef struct sensor_msgs__msg__RegionOfInterest__Sequence
{
  sensor_msgs__msg__RegionOfInterest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__RegionOfInterest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__REGION_OF_INTEREST__STRUCT_H_
