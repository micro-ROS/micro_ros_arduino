// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/NavSatStatus.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__NAV_SAT_STATUS__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__NAV_SAT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__msg__NavSatStatus__TYPE_HASH = {1, {
    0xd1, 0xed, 0x3b, 0xef, 0xa6, 0x28, 0xe0, 0x95,
    0x71, 0xbd, 0x27, 0x3b, 0x88, 0x8b, 0xa1, 0xc1,
    0xfd, 0x18, 0x7c, 0x9a, 0x5e, 0x00, 0x06, 0xb3,
    0x85, 0xd7, 0xe5, 0xe9, 0x09, 0x5a, 0x32, 0x04,
  }};

// Constants defined in the message

/// Constant 'STATUS_NO_FIX'.
/**
  * unable to fix position
 */
enum
{
  sensor_msgs__msg__NavSatStatus__STATUS_NO_FIX = -1
};

/// Constant 'STATUS_FIX'.
/**
  * unaugmented fix
 */
enum
{
  sensor_msgs__msg__NavSatStatus__STATUS_FIX = 0
};

/// Constant 'STATUS_SBAS_FIX'.
/**
  * with satellite-based augmentation
 */
enum
{
  sensor_msgs__msg__NavSatStatus__STATUS_SBAS_FIX = 1
};

/// Constant 'STATUS_GBAS_FIX'.
/**
  * with ground-based augmentation
 */
enum
{
  sensor_msgs__msg__NavSatStatus__STATUS_GBAS_FIX = 2
};

/// Constant 'SERVICE_GPS'.
/**
  * Bits defining which Global Navigation Satellite System signals were
  * used by the receiver.
 */
enum
{
  sensor_msgs__msg__NavSatStatus__SERVICE_GPS = 1
};

/// Constant 'SERVICE_GLONASS'.
enum
{
  sensor_msgs__msg__NavSatStatus__SERVICE_GLONASS = 2
};

/// Constant 'SERVICE_COMPASS'.
/**
  * includes BeiDou.
 */
enum
{
  sensor_msgs__msg__NavSatStatus__SERVICE_COMPASS = 4
};

/// Constant 'SERVICE_GALILEO'.
enum
{
  sensor_msgs__msg__NavSatStatus__SERVICE_GALILEO = 8
};

/// Struct defined in msg/NavSatStatus in the package sensor_msgs.
/**
  * Navigation Satellite fix status for any Global Navigation Satellite System.
  *
  * Whether to output an augmented fix is determined by both the fix
  * type and the last time differential corrections were received.  A
  * fix is valid when status >= STATUS_FIX.
 */
typedef struct sensor_msgs__msg__NavSatStatus
{
  int8_t status;
  uint16_t service;
} sensor_msgs__msg__NavSatStatus;

// Struct for a sequence of sensor_msgs__msg__NavSatStatus.
typedef struct sensor_msgs__msg__NavSatStatus__Sequence
{
  sensor_msgs__msg__NavSatStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__NavSatStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__NAV_SAT_STATUS__STRUCT_H_
