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


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ranges'
// Member 'intensities'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/LaserScan in the package sensor_msgs.
typedef struct sensor_msgs__msg__LaserScan
{
  std_msgs__msg__Header header;
  float angle_min;
  float angle_max;
  float angle_increment;
  float time_increment;
  float scan_time;
  float range_min;
  float range_max;
  rosidl_runtime_c__float__Sequence ranges;
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
