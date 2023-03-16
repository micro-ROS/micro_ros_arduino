// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/JointControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__msg__JointControllerState__TYPE_VERSION_HASH__INIT {1, { \
      0x5a, 0x5d, 0x81, 0x67, 0x20, 0xf9, 0xac, 0x8f, \
      0x1e, 0xa6, 0x96, 0x4f, 0xf5, 0x7c, 0x05, 0xe6, \
      0xae, 0x94, 0x3a, 0x93, 0x40, 0xd9, 0xde, 0x6b, \
      0x34, 0x1f, 0x3e, 0x8d, 0x44, 0x44, 0x01, 0x21, \
    }}
static const rosidl_type_hash_t control_msgs__msg__JointControllerState__TYPE_VERSION_HASH = control_msgs__msg__JointControllerState__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/JointControllerState in the package control_msgs.
/**
  * This message presents current controller state of one joint.
 */
typedef struct control_msgs__msg__JointControllerState
{
  /// Header timestamp should be update time of controller state
  std_msgs__msg__Header header;
  /// The set point, that is, desired state.
  double set_point;
  /// Current value of the process (ie: latest sensor measurement on the controlled value).
  double process_value;
  /// First time-derivative of the process value.
  double process_value_dot;
  /// The error of the controlled value, essentially process_value - set_point (for a regular PID implementation).
  double error;
  /// Time between two consecutive updates/execution of the control law.
  double time_step;
  /// Current output of the controller.
  double command;
  /// Current PID parameters of the controller.
  double p;
  double i;
  double d;
  double i_clamp;
  bool antiwindup;
} control_msgs__msg__JointControllerState;

// Struct for a sequence of control_msgs__msg__JointControllerState.
typedef struct control_msgs__msg__JointControllerState__Sequence
{
  control_msgs__msg__JointControllerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__JointControllerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__STRUCT_H_
