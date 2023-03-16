// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/JoyFeedbackArray.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK_ARRAY__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK_ARRAY__STRUCT_H_

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
#define sensor_msgs__msg__JoyFeedbackArray__TYPE_VERSION_HASH__INIT {1, { \
      0x19, 0xb0, 0xea, 0xda, 0xb8, 0x39, 0xf4, 0x40, \
      0x9d, 0x19, 0x27, 0xe0, 0x18, 0xee, 0x3d, 0xe1, \
      0x36, 0x4b, 0x82, 0x55, 0x8d, 0x31, 0x57, 0xa3, \
      0x2a, 0x8a, 0x1a, 0x04, 0x0c, 0xb2, 0xda, 0xbd, \
    }}
static const rosidl_type_hash_t sensor_msgs__msg__JoyFeedbackArray__TYPE_VERSION_HASH = sensor_msgs__msg__JoyFeedbackArray__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'array'
#include "sensor_msgs/msg/detail/joy_feedback__struct.h"

/// Struct defined in msg/JoyFeedbackArray in the package sensor_msgs.
/**
  * This message publishes values for multiple feedback at once.
 */
typedef struct sensor_msgs__msg__JoyFeedbackArray
{
  sensor_msgs__msg__JoyFeedback__Sequence array;
} sensor_msgs__msg__JoyFeedbackArray;

// Struct for a sequence of sensor_msgs__msg__JoyFeedbackArray.
typedef struct sensor_msgs__msg__JoyFeedbackArray__Sequence
{
  sensor_msgs__msg__JoyFeedbackArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__JoyFeedbackArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK_ARRAY__STRUCT_H_
