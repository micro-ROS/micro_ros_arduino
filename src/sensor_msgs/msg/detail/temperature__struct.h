// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/Temperature.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_

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
#define sensor_msgs__msg__Temperature__TYPE_VERSION_HASH__INIT {1, { \
      0xad, 0x46, 0x39, 0x28, 0x2f, 0x0c, 0x7f, 0xb8, \
      0xb8, 0xb3, 0xc0, 0xcb, 0x27, 0x23, 0x2f, 0x54, \
      0x48, 0xd5, 0x85, 0x2d, 0x20, 0x27, 0xfe, 0xbc, \
      0xd6, 0xfd, 0x44, 0x25, 0x87, 0xc0, 0x95, 0x4f, \
    }}
static const rosidl_type_hash_t sensor_msgs__msg__Temperature__TYPE_VERSION_HASH = sensor_msgs__msg__Temperature__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Temperature in the package sensor_msgs.
/**
  * Single temperature reading.
 */
typedef struct sensor_msgs__msg__Temperature
{
  /// timestamp is the time the temperature was measured
  /// frame_id is the location of the temperature reading
  std_msgs__msg__Header header;
  /// Measurement of the Temperature in Degrees Celsius.
  double temperature;
  /// 0 is interpreted as variance unknown.
  double variance;
} sensor_msgs__msg__Temperature;

// Struct for a sequence of sensor_msgs__msg__Temperature.
typedef struct sensor_msgs__msg__Temperature__Sequence
{
  sensor_msgs__msg__Temperature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__Temperature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_
