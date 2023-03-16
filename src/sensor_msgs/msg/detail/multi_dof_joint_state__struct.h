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

#include "rosidl_runtime_c/type_hash.h"


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define sensor_msgs__msg__MultiDOFJointState__TYPE_VERSION_HASH__INIT {1, { \
      0xc9, 0x6c, 0xed, 0x1c, 0x5a, 0xae, 0x9a, 0xbb, \
      0xc9, 0xaf, 0xac, 0x8c, 0x68, 0x9d, 0xa3, 0x67, \
      0xd5, 0xfc, 0xf4, 0x39, 0xca, 0xba, 0x74, 0x42, \
      0x90, 0x46, 0x19, 0x02, 0xd6, 0xe1, 0xaf, 0x71, \
    }}
static const rosidl_type_hash_t sensor_msgs__msg__MultiDOFJointState__TYPE_VERSION_HASH = sensor_msgs__msg__MultiDOFJointState__TYPE_VERSION_HASH__INIT;

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

/// Struct defined in msg/MultiDOFJointState in the package sensor_msgs.
/**
  * Representation of state for joints with multiple degrees of freedom,
  * following the structure of JointState which can only represent a single degree of freedom.
  *
  * It is assumed that a joint in a system corresponds to a transform that gets applied
  * along the kinematic chain. For example, a planar joint (as in URDF) is 3DOF (x, y, yaw)
  * and those 3DOF can be expressed as a transformation matrix, and that transformation
  * matrix can be converted back to (x, y, yaw)
  *
  * Each joint is uniquely identified by its name
  * The header specifies the time at which the joint states were recorded. All the joint states
  * in one message have to be recorded at the same time.
  *
  * This message consists of a multiple arrays, one for each part of the joint state.
  * The goal is to make each of the fields optional. When e.g. your joints have no
  * wrench associated with them, you can leave the wrench array empty.
  *
  * All arrays in this message should have the same size, or be empty.
  * This is the only way to uniquely associate the joint name with the correct
  * states.
 */
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
