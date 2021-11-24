// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/Illuminance.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__ILLUMINANCE__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__ILLUMINANCE__STRUCT_H_

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

// Struct defined in msg/Illuminance in the package sensor_msgs.
typedef struct sensor_msgs__msg__Illuminance
{
  std_msgs__msg__Header header;
  double illuminance;
  double variance;
} sensor_msgs__msg__Illuminance;

// Struct for a sequence of sensor_msgs__msg__Illuminance.
typedef struct sensor_msgs__msg__Illuminance__Sequence
{
  sensor_msgs__msg__Illuminance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__Illuminance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__ILLUMINANCE__STRUCT_H_
