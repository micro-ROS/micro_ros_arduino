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


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'magnetic_field'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/MagneticField in the package sensor_msgs.
typedef struct sensor_msgs__msg__MagneticField
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 magnetic_field;
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
