// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/NavSatFix.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__NAV_SAT_FIX__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__NAV_SAT_FIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COVARIANCE_TYPE_UNKNOWN'.
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_UNKNOWN = 0
};

/// Constant 'COVARIANCE_TYPE_APPROXIMATED'.
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_APPROXIMATED = 1
};

/// Constant 'COVARIANCE_TYPE_DIAGONAL_KNOWN'.
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_DIAGONAL_KNOWN = 2
};

/// Constant 'COVARIANCE_TYPE_KNOWN'.
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_KNOWN = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'status'
#include "sensor_msgs/msg/detail/nav_sat_status__struct.h"

// Struct defined in msg/NavSatFix in the package sensor_msgs.
typedef struct sensor_msgs__msg__NavSatFix
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__NavSatStatus status;
  double latitude;
  double longitude;
  double altitude;
  double position_covariance[9];
  uint8_t position_covariance_type;
} sensor_msgs__msg__NavSatFix;

// Struct for a sequence of sensor_msgs__msg__NavSatFix.
typedef struct sensor_msgs__msg__NavSatFix__Sequence
{
  sensor_msgs__msg__NavSatFix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__NavSatFix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__NAV_SAT_FIX__STRUCT_H_
