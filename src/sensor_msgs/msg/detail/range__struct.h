// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/Range.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__RANGE__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ULTRASOUND'.
enum
{
  sensor_msgs__msg__Range__ULTRASOUND = 0
};

/// Constant 'INFRARED'.
enum
{
  sensor_msgs__msg__Range__INFRARED = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/Range in the package sensor_msgs.
typedef struct sensor_msgs__msg__Range
{
  std_msgs__msg__Header header;
  uint8_t radiation_type;
  float field_of_view;
  float min_range;
  float max_range;
  float range;
} sensor_msgs__msg__Range;

// Struct for a sequence of sensor_msgs__msg__Range.
typedef struct sensor_msgs__msg__Range__Sequence
{
  sensor_msgs__msg__Range * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__Range__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__RANGE__STRUCT_H_
