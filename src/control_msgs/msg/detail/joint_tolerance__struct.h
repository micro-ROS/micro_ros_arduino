// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/JointTolerance.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_TOLERANCE__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_TOLERANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__msg__JointTolerance__TYPE_HASH = {1, {
    0xc2, 0x54, 0xf9, 0xce, 0xce, 0x0f, 0x3b, 0x73,
    0x30, 0x17, 0xb6, 0x99, 0x0f, 0xd4, 0x6d, 0x13,
    0x26, 0xe2, 0x52, 0x42, 0xd6, 0xb8, 0x84, 0x43,
    0x98, 0xc9, 0x7d, 0x9a, 0x88, 0xe7, 0xd6, 0x48,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/JointTolerance in the package control_msgs.
/**
  * The tolerances specify the amount the position, velocity, and
  * accelerations can vary from the setpoints.  For example, in the case
  * of trajectory control, when the actual position varies beyond
  * (desired position + position tolerance), the trajectory goal may
  * abort.
  *
  * There are two special values for tolerances:
  *  * 0 - The tolerance is unspecified and will remain at whatever the default is
  *  * -1 - The tolerance is "erased".  If there was a default, the joint will be
  *         allowed to move without restriction.
 */
typedef struct control_msgs__msg__JointTolerance
{
  rosidl_runtime_c__String name;
  /// in radians or meters (for a revolute or prismatic joint, respectively)
  double position;
  /// in rad/sec or m/sec
  double velocity;
  /// in rad/sec^2 or m/sec^2
  double acceleration;
} control_msgs__msg__JointTolerance;

// Struct for a sequence of control_msgs__msg__JointTolerance.
typedef struct control_msgs__msg__JointTolerance__Sequence
{
  control_msgs__msg__JointTolerance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__JointTolerance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_TOLERANCE__STRUCT_H_
