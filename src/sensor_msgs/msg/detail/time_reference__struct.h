// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/TimeReference.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__TIME_REFERENCE__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__TIME_REFERENCE__STRUCT_H_

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
// Member 'time_ref'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'source'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TimeReference in the package sensor_msgs.
typedef struct sensor_msgs__msg__TimeReference
{
  std_msgs__msg__Header header;
  builtin_interfaces__msg__Time time_ref;
  rosidl_runtime_c__String source;
} sensor_msgs__msg__TimeReference;

// Struct for a sequence of sensor_msgs__msg__TimeReference.
typedef struct sensor_msgs__msg__TimeReference__Sequence
{
  sensor_msgs__msg__TimeReference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__TimeReference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__TIME_REFERENCE__STRUCT_H_
