// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/JoyFeedback.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK__STRUCT_H_

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
#define sensor_msgs__msg__JoyFeedback__TYPE_VERSION_HASH__INIT {1, { \
      0x7b, 0x79, 0xf6, 0xb6, 0x72, 0x8a, 0x1c, 0x9a, \
      0x7c, 0xb9, 0x91, 0x05, 0xb6, 0x91, 0x66, 0x65, \
      0x80, 0x8a, 0x7c, 0xa2, 0xc7, 0x3d, 0x41, 0xf2, \
      0x65, 0x5e, 0xb0, 0x52, 0x1f, 0x85, 0x26, 0x72, \
    }}
static const rosidl_type_hash_t sensor_msgs__msg__JoyFeedback__TYPE_VERSION_HASH = sensor_msgs__msg__JoyFeedback__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Constant 'TYPE_LED'.
enum
{
  sensor_msgs__msg__JoyFeedback__TYPE_LED = 0
};

/// Constant 'TYPE_RUMBLE'.
enum
{
  sensor_msgs__msg__JoyFeedback__TYPE_RUMBLE = 1
};

/// Constant 'TYPE_BUZZER'.
enum
{
  sensor_msgs__msg__JoyFeedback__TYPE_BUZZER = 2
};

/// Struct defined in msg/JoyFeedback in the package sensor_msgs.
/**
  * Declare of the type of feedback
 */
typedef struct sensor_msgs__msg__JoyFeedback
{
  uint8_t type;
  /// This will hold an id number for each type of each feedback.
  /// Example, the first led would be id=0, the second would be id=1
  uint8_t id;
  /// Intensity of the feedback, from 0.0 to 1.0, inclusive.  If device is
  /// actually binary, driver should treat 0<=x<0.5 as off, 0.5<=x<=1 as on.
  float intensity;
} sensor_msgs__msg__JoyFeedback;

// Struct for a sequence of sensor_msgs__msg__JoyFeedback.
typedef struct sensor_msgs__msg__JoyFeedback__Sequence
{
  sensor_msgs__msg__JoyFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__JoyFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK__STRUCT_H_
