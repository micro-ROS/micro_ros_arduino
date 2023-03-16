// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/Illuminance.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__ILLUMINANCE__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__ILLUMINANCE__STRUCT_H_

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
#define sensor_msgs__msg__Illuminance__TYPE_VERSION_HASH__INIT {1, { \
      0xe1, 0xa2, 0xf4, 0x62, 0xef, 0x48, 0xcb, 0xb9, \
      0x1b, 0xdf, 0x75, 0xb6, 0xd1, 0x1a, 0xeb, 0x82, \
      0x98, 0xc0, 0xb7, 0xae, 0x26, 0xd6, 0xca, 0x12, \
      0xe9, 0x30, 0xe4, 0xf6, 0xf1, 0x24, 0x95, 0x7a, \
    }}
static const rosidl_type_hash_t sensor_msgs__msg__Illuminance__TYPE_VERSION_HASH = sensor_msgs__msg__Illuminance__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Illuminance in the package sensor_msgs.
/**
  * Single photometric illuminance measurement.  Light should be assumed to be
  * measured along the sensor's x-axis (the area of detection is the y-z plane).
  * The illuminance should have a 0 or positive value and be received with
  * the sensor's +X axis pointing toward the light source.
  *
  * Photometric illuminance is the measure of the human eye's sensitivity of the
  * intensity of light encountering or passing through a surface.
  *
  * All other Photometric and Radiometric measurements should not use this message.
  * This message cannot represent:
  *  - Luminous intensity (candela/light source output)
  *  - Luminance (nits/light output per area)
  *  - Irradiance (watt/area), etc.
 */
typedef struct sensor_msgs__msg__Illuminance
{
  /// timestamp is the time the illuminance was measured
  /// frame_id is the location and direction of the reading
  std_msgs__msg__Header header;
  /// Measurement of the Photometric Illuminance in Lux.
  double illuminance;
  /// 0 is interpreted as variance unknown
  double variance;
} sensor_msgs__msg__Illuminance;

// Struct for a sequence of sensor_msgs__msg__Illuminance.
typedef struct sensor_msgs__msg__Illuminance__Sequence
{
  sensor_msgs__msg__Illuminance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__Illuminance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__ILLUMINANCE__STRUCT_H_
