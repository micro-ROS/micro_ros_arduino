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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define sensor_msgs__msg__LaserScan__TYPE_VERSION_HASH__INIT {1, { \
      0x29, 0xb1, 0x40, 0x93, 0x53, 0x97, 0x88, 0xd6, \
      0x70, 0x7c, 0xcb, 0xcd, 0x93, 0xae, 0xed, 0x1f, \
      0x84, 0x43, 0x4a, 0x24, 0x74, 0x99, 0x34, 0xfc, \
      0x0b, 0x6d, 0x8b, 0x10, 0xbd, 0xae, 0xbf, 0x6e, \
    }}
static const rosidl_type_hash_t sensor_msgs__msg__LaserScan__TYPE_VERSION_HASH = sensor_msgs__msg__LaserScan__TYPE_VERSION_HASH__INIT;

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
