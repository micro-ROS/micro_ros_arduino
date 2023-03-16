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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define sensor_msgs__msg__TimeReference__TYPE_VERSION_HASH__INIT {1, { \
      0x48, 0xc3, 0x93, 0x77, 0x25, 0xdd, 0xe1, 0xff, \
      0xf7, 0xf1, 0x5a, 0x90, 0xe9, 0x37, 0x21, 0xfc, \
      0x26, 0x65, 0x15, 0x74, 0x87, 0x0e, 0x94, 0x3d, \
      0x45, 0x7c, 0x7a, 0x0a, 0xca, 0xe0, 0x5b, 0x93, \
    }}
static const rosidl_type_hash_t sensor_msgs__msg__TimeReference__TYPE_VERSION_HASH = sensor_msgs__msg__TimeReference__TYPE_VERSION_HASH__INIT;

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
