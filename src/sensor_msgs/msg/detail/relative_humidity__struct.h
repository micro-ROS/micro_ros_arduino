// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/RelativeHumidity.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__RELATIVE_HUMIDITY__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__RELATIVE_HUMIDITY__STRUCT_H_

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

// Struct defined in msg/RelativeHumidity in the package sensor_msgs.
typedef struct sensor_msgs__msg__RelativeHumidity
{
  std_msgs__msg__Header header;
  double relative_humidity;
  double variance;
} sensor_msgs__msg__RelativeHumidity;

// Struct for a sequence of sensor_msgs__msg__RelativeHumidity.
typedef struct sensor_msgs__msg__RelativeHumidity__Sequence
{
  sensor_msgs__msg__RelativeHumidity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__RelativeHumidity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__RELATIVE_HUMIDITY__STRUCT_H_
