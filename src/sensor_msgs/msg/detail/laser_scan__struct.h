// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/LaserScan.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__LASER_SCAN__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__LASER_SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__msg__LaserScan__TYPE_HASH = {1, {
    0x64, 0xc1, 0x91, 0x39, 0x80, 0x13, 0xaf, 0x96,
    0x50, 0x9d, 0x51, 0x8d, 0xac, 0x71, 0xd5, 0x16,
    0x4f, 0x93, 0x82, 0x55, 0x3f, 0xce, 0x5c, 0x1f,
    0x8c, 0xca, 0x5b, 0xe7, 0x92, 0x4b, 0xd8, 0x28,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ranges'
// Member 'intensities'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LaserScan in the package sensor_msgs.
/**
  * Single scan from a planar laser range-finder
  *
  * If you have another ranging device with different behavior (e.g. a sonar
  * array), please find or create a different message, since applications
  * will make fairly laser-specific assumptions about this data
 */
typedef struct sensor_msgs__msg__LaserScan
{
  /// timestamp in the header is the acquisition time of
  /// the first ray in the scan.
  ///
  /// in frame frame_id, angles are measured around
  /// the positive Z axis (counterclockwise, if Z is up)
  /// with zero angle being forward along the x axis
  std_msgs__msg__Header header;
  /// start angle of the scan
  float angle_min;
  /// end angle of the scan
  float angle_max;
  /// angular distance between measurements
  float angle_increment;
  /// time between measurements - if your scanner
  /// is moving, this will be used in interpolating position
  /// of 3d points
  float time_increment;
  /// time between scans
  float scan_time;
  /// minimum range value
  float range_min;
  /// maximum range value
  float range_max;
  /// range data
  /// (Note: values < range_min or > range_max should be discarded)
  rosidl_runtime_c__float__Sequence ranges;
  /// intensity data.  If your
  /// device does not provide intensities, please leave
  /// the array empty.
  rosidl_runtime_c__float__Sequence intensities;
} sensor_msgs__msg__LaserScan;

// Struct for a sequence of sensor_msgs__msg__LaserScan.
typedef struct sensor_msgs__msg__LaserScan__Sequence
{
  sensor_msgs__msg__LaserScan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__LaserScan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__LASER_SCAN__STRUCT_H_
