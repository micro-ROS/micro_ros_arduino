// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/MultiEchoLaserScan.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__MULTI_ECHO_LASER_SCAN__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__MULTI_ECHO_LASER_SCAN__STRUCT_H_

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
#include "sensor_msgs/msg/detail/laser_echo__struct.h"

// Struct defined in msg/MultiEchoLaserScan in the package sensor_msgs.
typedef struct sensor_msgs__msg__MultiEchoLaserScan
{
  std_msgs__msg__Header header;
  float angle_min;
  float angle_max;
  float angle_increment;
  float time_increment;
  float scan_time;
  float range_min;
  float range_max;
  sensor_msgs__msg__LaserEcho__Sequence ranges;
  sensor_msgs__msg__LaserEcho__Sequence intensities;
} sensor_msgs__msg__MultiEchoLaserScan;

// Struct for a sequence of sensor_msgs__msg__MultiEchoLaserScan.
typedef struct sensor_msgs__msg__MultiEchoLaserScan__Sequence
{
  sensor_msgs__msg__MultiEchoLaserScan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__MultiEchoLaserScan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__MULTI_ECHO_LASER_SCAN__STRUCT_H_
