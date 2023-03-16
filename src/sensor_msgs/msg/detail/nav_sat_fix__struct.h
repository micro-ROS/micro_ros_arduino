// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/NavSatFix.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__NAV_SAT_FIX__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__NAV_SAT_FIX__STRUCT_H_

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
#define sensor_msgs__msg__NavSatFix__TYPE_VERSION_HASH__INIT {1, { \
      0xb4, 0x96, 0x16, 0x57, 0x05, 0xdf, 0x8c, 0x18, \
      0xd4, 0xa6, 0x61, 0xee, 0xac, 0x49, 0xfd, 0x2d, \
      0x5d, 0x09, 0x22, 0xfc, 0x17, 0x17, 0x64, 0xa9, \
      0x86, 0x38, 0x54, 0x7f, 0xec, 0x9b, 0xdd, 0x61, \
    }}
static const rosidl_type_hash_t sensor_msgs__msg__NavSatFix__TYPE_VERSION_HASH = sensor_msgs__msg__NavSatFix__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Constant 'COVARIANCE_TYPE_UNKNOWN'.
/**
  * If the covariance of the fix is known, fill it in completely. If the
  * GPS receiver provides the variance of each measurement, put them
  * along the diagonal. If only Dilution of Precision is available,
  * estimate an approximate covariance from that.
 */
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_UNKNOWN = 0
};

/// Constant 'COVARIANCE_TYPE_APPROXIMATED'.
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_APPROXIMATED = 1
};

/// Constant 'COVARIANCE_TYPE_DIAGONAL_KNOWN'.
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_DIAGONAL_KNOWN = 2
};

/// Constant 'COVARIANCE_TYPE_KNOWN'.
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_KNOWN = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'status'
#include "sensor_msgs/msg/detail/nav_sat_status__struct.h"

/// Struct defined in msg/NavSatFix in the package sensor_msgs.
/**
  * Navigation Satellite fix for any Global Navigation Satellite System
  *
  * Specified using the WGS 84 reference ellipsoid
 */
typedef struct sensor_msgs__msg__NavSatFix
{
  /// header.stamp specifies the ROS time for this measurement (the
  ///        corresponding satellite time may be reported using the
  ///        sensor_msgs/TimeReference message).
  ///
  /// header.frame_id is the frame of reference reported by the satellite
  ///        receiver, usually the location of the antenna.  This is a
  ///        Euclidean frame relative to the vehicle, not a reference
  ///        ellipsoid.
  std_msgs__msg__Header header;
  /// Satellite fix status information.
  sensor_msgs__msg__NavSatStatus status;
  /// Latitude. Positive is north of equator; negative is south.
  double latitude;
  /// Longitude. Positive is east of prime meridian; negative is west.
  double longitude;
  /// Altitude. Positive is above the WGS 84 ellipsoid
  /// (quiet NaN if no altitude is available).
  double altitude;
  /// Position covariance defined relative to a tangential plane
  /// through the reported position. The components are East, North, and
  /// Up (ENU), in row-major order.
  ///
  /// Beware: this coordinate system exhibits singularities at the poles.
  double position_covariance[9];
  uint8_t position_covariance_type;
} sensor_msgs__msg__NavSatFix;

// Struct for a sequence of sensor_msgs__msg__NavSatFix.
typedef struct sensor_msgs__msg__NavSatFix__Sequence
{
  sensor_msgs__msg__NavSatFix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__NavSatFix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__NAV_SAT_FIX__STRUCT_H_
