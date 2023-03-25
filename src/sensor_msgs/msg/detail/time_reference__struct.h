// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/TimeReference.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__TIME_REFERENCE__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__TIME_REFERENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__msg__TimeReference__TYPE_HASH = {1, {
    0xdd, 0x66, 0xe8, 0x4c, 0xf4, 0x0b, 0xbb, 0x5d,
    0x5a, 0x40, 0x47, 0x2e, 0x6e, 0xcf, 0x26, 0x75,
    0xa0, 0x31, 0x33, 0x4d, 0x4c, 0x42, 0x6a, 0xbd,
    0xb2, 0xad, 0x41, 0x80, 0x1a, 0x8e, 0xfc, 0x99,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'time_ref'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TimeReference in the package sensor_msgs.
/**
  * Measurement from an external time source not actively synchronized with the system clock.
 */
typedef struct sensor_msgs__msg__TimeReference
{
  /// stamp is system time for which measurement was valid
  /// frame_id is not used
  std_msgs__msg__Header header;
  /// corresponding time from this external source
  builtin_interfaces__msg__Time time_ref;
  /// (optional) name of time source
  rosidl_runtime_c__String source;
} sensor_msgs__msg__TimeReference;

// Struct for a sequence of sensor_msgs__msg__TimeReference.
typedef struct sensor_msgs__msg__TimeReference__Sequence
{
  sensor_msgs__msg__TimeReference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__TimeReference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__TIME_REFERENCE__STRUCT_H_
