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
/**
  * Since each joint has multiple degrees of freedom,
  * there can be multiple tolerances for each joint, each looking
  * at different components.
  * If the component is X_AXIS, Y_AXIS, or Z_AXIS, then the tolerance
  * is only applied for the specific axis.
  * However, if the component is TRANSLATION, then the tolerance is for
  * the overall Euclidean distance.
  * For these components, the units are meters, meters/sec and meters/sec^2.
  * Z_AXIS is only valid with a floating joint, not planar.
  * If the component is ROTATION the tolerance is measured in
  * radians, radians/sec and radians/sec^2, computed
  * between the difference in quaternions.
 */
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

/// Struct defined in msg/JointComponentTolerance in the package control_msgs.
/**
  * Version of JointTolerance.msg with added component field for joints with multiple degrees of freedom
  * The difference between two MultiDOFJointTrajectoryPoint cannot be represented as a single number,
  * hence we use the component field to represent how to calculate the difference in a way that can
  * be represented as a single number.
 */
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
