// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/MagneticField.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__msg__MagneticField__TYPE_HASH = {1, {
    0xe8, 0x0f, 0x32, 0xf5, 0x6a, 0x20, 0x48, 0x6c,
    0x99, 0x23, 0x00, 0x8f, 0xc1, 0xa1, 0xdb, 0x07,
    0xbb, 0xb2, 0x73, 0xcb, 0xbf, 0x6a, 0x5b, 0x3b,
    0xfa, 0x00, 0x83, 0x5e, 0xe0, 0x0e, 0x4d, 0xff,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'magnetic_field'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/MagneticField in the package sensor_msgs.
/**
  * Measurement of the Magnetic Field vector at a specific location.
  *
  * If the covariance of the measurement is known, it should be filled in.
  * If all you know is the variance of each measurement, e.g. from the datasheet,
  * just put those along the diagonal.
  * A covariance matrix of all zeros will be interpreted as "covariance unknown",
  * and to use the data a covariance will have to be assumed or gotten from some
  * other source.
 */
typedef struct sensor_msgs__msg__MagneticField
{
  /// timestamp is the time the
  /// field was measured
  /// frame_id is the location and orientation
  /// of the field measurement
  std_msgs__msg__Header header;
  /// x, y, and z components of the
  /// field vector in Tesla
  /// If your sensor does not output 3 axes,
  /// put NaNs in the components not reported.
  geometry_msgs__msg__Vector3 magnetic_field;
  /// Row major about x, y, z axes
  /// 0 is interpreted as variance unknown
  double magnetic_field_covariance[9];
} sensor_msgs__msg__MagneticField;

// Struct for a sequence of sensor_msgs__msg__MagneticField.
typedef struct sensor_msgs__msg__MagneticField__Sequence
{
  sensor_msgs__msg__MagneticField * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__MagneticField__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__STRUCT_H_
