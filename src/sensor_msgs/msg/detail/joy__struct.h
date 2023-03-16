// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/Joy.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__JOY__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__JOY__STRUCT_H_

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
#define sensor_msgs__msg__Joy__TYPE_VERSION_HASH__INIT {1, { \
      0xde, 0x9f, 0x09, 0x4b, 0x03, 0xa9, 0xd2, 0x75, \
      0x37, 0x95, 0x1a, 0x77, 0x4f, 0xa2, 0x62, 0xd3, \
      0xa9, 0x4c, 0x68, 0x55, 0xa5, 0x61, 0x16, 0xc9, \
      0x42, 0x50, 0xc4, 0x3a, 0x0e, 0x7c, 0x6e, 0x8a, \
    }}
static const rosidl_type_hash_t sensor_msgs__msg__Joy__TYPE_VERSION_HASH = sensor_msgs__msg__Joy__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'axes'
// Member 'buttons'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Joy in the package sensor_msgs.
/**
  * Reports the state of a joystick's axes and buttons.
 */
typedef struct sensor_msgs__msg__Joy
{
  /// The timestamp is the time at which data is received from the joystick.
  std_msgs__msg__Header header;
  /// The axes measurements from a joystick.
  rosidl_runtime_c__float__Sequence axes;
  /// The buttons measurements from a joystick.
  rosidl_runtime_c__int32__Sequence buttons;
} sensor_msgs__msg__Joy;

// Struct for a sequence of sensor_msgs__msg__Joy.
typedef struct sensor_msgs__msg__Joy__Sequence
{
  sensor_msgs__msg__Joy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__Joy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__JOY__STRUCT_H_
