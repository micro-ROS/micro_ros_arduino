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


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__msg__JoyFeedback__TYPE_HASH = {1, {
    0x23, 0x1d, 0xd3, 0x62, 0xf7, 0x1d, 0x6f, 0xc0,
    0x82, 0x72, 0x77, 0x0d, 0x07, 0x12, 0x0a, 0xd5,
    0xfe, 0x58, 0x74, 0xce, 0x2d, 0xba, 0xc7, 0x01,
    0x09, 0xb2, 0x89, 0x86, 0x83, 0x42, 0x90, 0xcd,
  }};

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
