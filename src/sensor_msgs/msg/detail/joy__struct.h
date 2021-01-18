// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/Joy.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__JOY__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__JOY__STRUCT_H_

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
// Member 'axes'
// Member 'buttons'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Joy in the package sensor_msgs.
typedef struct sensor_msgs__msg__Joy
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__float__Sequence axes;
  rosidl_runtime_c__int32__Sequence buttons;
} sensor_msgs__msg__Joy;

// Struct for a sequence of sensor_msgs__msg__Joy.
typedef struct sensor_msgs__msg__Joy__Sequence
{
  sensor_msgs__msg__Joy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__Joy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__JOY__STRUCT_H_
