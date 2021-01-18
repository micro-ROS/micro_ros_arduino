// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/MultiDOFJointState.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_STATE__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_STATE__STRUCT_H_

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
// Member 'joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.h"

// Struct defined in msg/MultiDOFJointState in the package sensor_msgs.
typedef struct sensor_msgs__msg__MultiDOFJointState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence joint_names;
  geometry_msgs__msg__Transform__Sequence transforms;
  geometry_msgs__msg__Twist__Sequence twist;
  geometry_msgs__msg__Wrench__Sequence wrench;
} sensor_msgs__msg__MultiDOFJointState;

// Struct for a sequence of sensor_msgs__msg__MultiDOFJointState.
typedef struct sensor_msgs__msg__MultiDOFJointState__Sequence
{
  sensor_msgs__msg__MultiDOFJointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__MultiDOFJointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_STATE__STRUCT_H_
