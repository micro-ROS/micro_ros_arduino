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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__msg__JointTolerance__TYPE_VERSION_HASH__INIT {1, { \
      0x48, 0xd4, 0x8d, 0x34, 0x20, 0x42, 0x05, 0x07, \
      0x07, 0x14, 0x52, 0xbd, 0xa1, 0x75, 0x17, 0x5a, \
      0x4f, 0x2b, 0x4c, 0xe0, 0x93, 0x5c, 0xb7, 0xea, \
      0x0c, 0x1c, 0x40, 0x95, 0x67, 0x4a, 0x23, 0x0b, \
    }}
static const rosidl_type_hash_t control_msgs__msg__JointTolerance__TYPE_VERSION_HASH = control_msgs__msg__JointTolerance__TYPE_VERSION_HASH__INIT;

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
