// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/AdmittanceControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__ADMITTANCE_CONTROLLER_STATE__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__ADMITTANCE_CONTROLLER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mass'
// Member 'damping'
// Member 'stiffness'
#include "std_msgs/msg/detail/float64_multi_array__struct.h"
// Member 'rot_base_control'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'ref_trans_base_ft'
// Member 'admittance_position'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"
// Member 'selected_axes'
#include "std_msgs/msg/detail/int8_multi_array__struct.h"
// Member 'ft_sensor_frame'
#include "std_msgs/msg/detail/string__struct.h"
// Member 'admittance_acceleration'
// Member 'admittance_velocity'
#include "geometry_msgs/msg/detail/twist_stamped__struct.h"
// Member 'wrench_base'
#include "geometry_msgs/msg/detail/wrench_stamped__struct.h"
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in msg/AdmittanceControllerState in the package control_msgs.
/**
  * Admittance parameters
 */
typedef struct control_msgs__msg__AdmittanceControllerState
{
  /// 6-vector of mass terms used in the admittance calculation
  std_msgs__msg__Float64MultiArray mass;
  /// 6-vector of damping terms used in the admittance calculation
  std_msgs__msg__Float64MultiArray damping;
  /// 6-vector of stiffness terms used in the admittance calculation
  std_msgs__msg__Float64MultiArray stiffness;
  /// Frame information
  /// quaternion describing the orientation of the control frame
  geometry_msgs__msg__Quaternion rot_base_control;
  /// force torque sensor transform at the reference joint configuration
  geometry_msgs__msg__TransformStamped ref_trans_base_ft;
  /// 6-vector of 0/1 describing if admittance is enable in the corresponding control frame axis
  std_msgs__msg__Int8MultiArray selected_axes;
  /// name of the force torque frame
  std_msgs__msg__String ft_sensor_frame;
  /// State information
  /// calculated admittance position in cartesian space
  geometry_msgs__msg__TransformStamped admittance_position;
  /// calculated admittance acceleration in cartesian space
  geometry_msgs__msg__TwistStamped admittance_acceleration;
  /// calculated admittance velocity in cartesian space
  geometry_msgs__msg__TwistStamped admittance_velocity;
  /// wrench used in the admittance calculation
  geometry_msgs__msg__WrenchStamped wrench_base;
  /// calculated admittance offsets in joint space
  sensor_msgs__msg__JointState joint_state;
} control_msgs__msg__AdmittanceControllerState;

// Struct for a sequence of control_msgs__msg__AdmittanceControllerState.
typedef struct control_msgs__msg__AdmittanceControllerState__Sequence
{
  control_msgs__msg__AdmittanceControllerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__AdmittanceControllerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__ADMITTANCE_CONTROLLER_STATE__STRUCT_H_
