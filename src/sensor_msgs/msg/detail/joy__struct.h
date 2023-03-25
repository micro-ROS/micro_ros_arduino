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


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__msg__Joy__TYPE_HASH = {1, {
    0x0d, 0x35, 0x6c, 0x79, 0xca, 0xd3, 0x40, 0x1e,
    0x35, 0xff, 0xeb, 0x75, 0xa9, 0x6a, 0x96, 0xe0,
    0x8b, 0xe3, 0xef, 0x89, 0x6b, 0x8b, 0x83, 0x84,
    0x1d, 0x73, 0xe8, 0x90, 0x98, 0x93, 0x72, 0xc5,
  }};

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
