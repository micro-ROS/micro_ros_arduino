// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__IMU__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__IMU__STRUCT_H_

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
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'angular_velocity'
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/Imu in the package sensor_msgs.
typedef struct sensor_msgs__msg__Imu
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Quaternion orientation;
  double orientation_covariance[9];
  geometry_msgs__msg__Vector3 angular_velocity;
  double angular_velocity_covariance[9];
  geometry_msgs__msg__Vector3 linear_acceleration;
  double linear_acceleration_covariance[9];
} sensor_msgs__msg__Imu;

// Struct for a sequence of sensor_msgs__msg__Imu.
typedef struct sensor_msgs__msg__Imu__Sequence
{
  sensor_msgs__msg__Imu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__Imu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__IMU__STRUCT_H_
