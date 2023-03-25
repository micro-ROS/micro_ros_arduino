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

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__msg__CompressedImage__TYPE_HASH = {1, {
    0x15, 0x64, 0x07, 0x71, 0x53, 0x15, 0x71, 0x18,
    0x5e, 0x2e, 0xfc, 0x8a, 0x10, 0x0b, 0xaf, 0x92,
    0x39, 0x61, 0xa4, 0xd1, 0x5d, 0x55, 0x69, 0x65,
    0x2e, 0x6c, 0xb6, 0x69, 0x1e, 0x8e, 0x37, 0x1a,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'format'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CompressedImage in the package sensor_msgs.
/**
  * This message contains a compressed image.
 */
typedef struct sensor_msgs__msg__CompressedImage
{
  /// Header timestamp should be acquisition time of image
  /// Header frame_id should be optical frame of camera
  /// origin of frame should be optical center of cameara
  /// +x should point to the right in the image
  /// +y should point down in the image
  /// +z should point into to plane of the image
  std_msgs__msg__Header header;
  /// Specifies the format of the data
  ///   Acceptable values:
  ///     jpeg, png, tiff
  rosidl_runtime_c__String format;
  /// Compressed image buffer
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
