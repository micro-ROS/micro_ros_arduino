// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/JointComponentTolerance.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_COMPONENT_TOLERANCE__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_COMPONENT_TOLERANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'X_AXIS'.
enum
{
  control_msgs__msg__JointComponentTolerance__X_AXIS = 1
};

/// Constant 'Y_AXIS'.
enum
{
  control_msgs__msg__JointComponentTolerance__Y_AXIS = 2
};

/// Constant 'Z_AXIS'.
enum
{
  control_msgs__msg__JointComponentTolerance__Z_AXIS = 3
};

/// Constant 'TRANSLATION'.
enum
{
  control_msgs__msg__JointComponentTolerance__TRANSLATION = 4
};

/// Constant 'ROTATION'.
enum
{
  control_msgs__msg__JointComponentTolerance__ROTATION = 5
};

// Include directives for member types
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/JointComponentTolerance in the package control_msgs.
typedef struct control_msgs__msg__JointComponentTolerance
{
  rosidl_runtime_c__String joint_name;
  uint16_t component;
  double position;
  double velocity;
  double acceleration;
} control_msgs__msg__JointComponentTolerance;

// Struct for a sequence of control_msgs__msg__JointComponentTolerance.
typedef struct control_msgs__msg__JointComponentTolerance__Sequence
{
  control_msgs__msg__JointComponentTolerance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__JointComponentTolerance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_COMPONENT_TOLERANCE__STRUCT_H_
