// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/FluidPressure.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__FLUID_PRESSURE__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__FLUID_PRESSURE__STRUCT_H_

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
#define sensor_msgs__msg__FluidPressure__TYPE_VERSION_HASH__INIT {1, { \
      0x74, 0x4c, 0xf7, 0x6b, 0x5d, 0xb1, 0x9c, 0xa9, \
      0xd5, 0xfa, 0x7a, 0x5e, 0x61, 0xa9, 0x4b, 0xbe, \
      0x89, 0x83, 0x29, 0xe5, 0x8b, 0xac, 0x4a, 0x06, \
      0x34, 0x2c, 0x5a, 0x16, 0x8f, 0xa3, 0x6b, 0x67, \
    }}
static const rosidl_type_hash_t sensor_msgs__msg__FluidPressure__TYPE_VERSION_HASH = sensor_msgs__msg__FluidPressure__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/FluidPressure in the package sensor_msgs.
/**
  * Single pressure reading.  This message is appropriate for measuring the
  * pressure inside of a fluid (air, water, etc).  This also includes
  * atmospheric or barometric pressure.
  *
  * This message is not appropriate for force/pressure contact sensors.
 */
typedef struct sensor_msgs__msg__FluidPressure
{
  /// timestamp of the measurement
  /// frame_id is the location of the pressure sensor
  std_msgs__msg__Header header;
  /// Absolute pressure reading in Pascals.
  double fluid_pressure;
  /// 0 is interpreted as variance unknown
  double variance;
} sensor_msgs__msg__FluidPressure;

// Struct for a sequence of sensor_msgs__msg__FluidPressure.
typedef struct sensor_msgs__msg__FluidPressure__Sequence
{
  sensor_msgs__msg__FluidPressure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__FluidPressure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__FLUID_PRESSURE__STRUCT_H_
