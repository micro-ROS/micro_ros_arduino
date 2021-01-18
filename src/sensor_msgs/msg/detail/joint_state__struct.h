// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_

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
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'velocity'
// Member 'effort'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/JointState in the package sensor_msgs.
typedef struct sensor_msgs__msg__JointState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__double__Sequence position;
  rosidl_runtime_c__double__Sequence velocity;
  rosidl_runtime_c__double__Sequence effort;
} sensor_msgs__msg__JointState;

// Struct for a sequence of sensor_msgs__msg__JointState.
typedef struct sensor_msgs__msg__JointState__Sequence
{
  sensor_msgs__msg__JointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__JointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_
