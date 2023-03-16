// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/RelativeHumidity.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__RELATIVE_HUMIDITY__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__RELATIVE_HUMIDITY__STRUCT_H_

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
#define sensor_msgs__msg__RelativeHumidity__TYPE_VERSION_HASH__INIT {1, { \
      0x2d, 0x3c, 0x5f, 0x3d, 0x13, 0xbb, 0x60, 0x8f, \
      0xf4, 0x40, 0x83, 0x0d, 0xd9, 0x7e, 0x87, 0x1a, \
      0x9b, 0x81, 0x08, 0xa8, 0x50, 0xe8, 0x83, 0xb8, \
      0x88, 0xed, 0xf0, 0x89, 0x70, 0xe8, 0xd5, 0x26, \
    }}
static const rosidl_type_hash_t sensor_msgs__msg__RelativeHumidity__TYPE_VERSION_HASH = sensor_msgs__msg__RelativeHumidity__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/RelativeHumidity in the package sensor_msgs.
/**
  * Single reading from a relative humidity sensor.
  * Defines the ratio of partial pressure of water vapor to the saturated vapor
  * pressure at a temperature.
 */
typedef struct sensor_msgs__msg__RelativeHumidity
{
  /// timestamp of the measurement
  /// frame_id is the location of the humidity sensor
  std_msgs__msg__Header header;
  /// Expression of the relative humidity
  /// from 0.0 to 1.0.
  /// 0.0 is no partial pressure of water vapor
  /// 1.0 represents partial pressure of saturation
  double relative_humidity;
  /// 0 is interpreted as variance unknown
  double variance;
} sensor_msgs__msg__RelativeHumidity;

// Struct for a sequence of sensor_msgs__msg__RelativeHumidity.
typedef struct sensor_msgs__msg__RelativeHumidity__Sequence
{
  sensor_msgs__msg__RelativeHumidity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__RelativeHumidity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__RELATIVE_HUMIDITY__STRUCT_H_
