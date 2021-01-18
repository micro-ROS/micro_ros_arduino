// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/ChannelFloat32.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__CHANNEL_FLOAT32__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__CHANNEL_FLOAT32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'values'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/ChannelFloat32 in the package sensor_msgs.
typedef struct sensor_msgs__msg__ChannelFloat32
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__float__Sequence values;
} sensor_msgs__msg__ChannelFloat32;

// Struct for a sequence of sensor_msgs__msg__ChannelFloat32.
typedef struct sensor_msgs__msg__ChannelFloat32__Sequence
{
  sensor_msgs__msg__ChannelFloat32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__ChannelFloat32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__CHANNEL_FLOAT32__STRUCT_H_
