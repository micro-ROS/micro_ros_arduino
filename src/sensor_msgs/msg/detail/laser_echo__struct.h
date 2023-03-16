// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/LaserEcho.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__LASER_ECHO__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__LASER_ECHO__STRUCT_H_

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
#define sensor_msgs__msg__LaserEcho__TYPE_VERSION_HASH__INIT {1, { \
      0x6e, 0x95, 0xee, 0x60, 0x65, 0xcd, 0x7f, 0x78, \
      0xcc, 0x4a, 0x5d, 0x74, 0x22, 0x14, 0xa4, 0x43, \
      0xb6, 0xd1, 0xad, 0x5d, 0x73, 0x7b, 0xcc, 0xae, \
      0x49, 0x7e, 0xd7, 0x0a, 0x3a, 0x38, 0x76, 0x5c, \
    }}
static const rosidl_type_hash_t sensor_msgs__msg__LaserEcho__TYPE_VERSION_HASH = sensor_msgs__msg__LaserEcho__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'echoes'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LaserEcho in the package sensor_msgs.
/**
  * This message is a submessage of MultiEchoLaserScan and is not intended
  * to be used separately.
 */
typedef struct sensor_msgs__msg__LaserEcho
{
  /// Multiple values of ranges or intensities.
  /// Each array represents data from the same angle increment.
  rosidl_runtime_c__float__Sequence echoes;
} sensor_msgs__msg__LaserEcho;

// Struct for a sequence of sensor_msgs__msg__LaserEcho.
typedef struct sensor_msgs__msg__LaserEcho__Sequence
{
  sensor_msgs__msg__LaserEcho * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__LaserEcho__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__LASER_ECHO__STRUCT_H_
