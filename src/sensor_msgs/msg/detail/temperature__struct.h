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


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__msg__Temperature__TYPE_HASH = {1, {
    0x72, 0x51, 0x4a, 0x14, 0x12, 0x6a, 0xb9, 0xf8,
    0xa9, 0xab, 0xec, 0x97, 0x4c, 0x78, 0xe5, 0x61,
    0x0a, 0x36, 0x7b, 0x59, 0xdb, 0x5d, 0xa3, 0x55,
    0xff, 0x1f, 0xb9, 0x82, 0xd5, 0xba, 0xd4, 0xb8,
  }};

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
