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


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__msg__JoyFeedbackArray__TYPE_HASH = {1, {
    0x32, 0x87, 0xc3, 0x2e, 0x1b, 0x68, 0x8c, 0xae,
    0x04, 0x55, 0x5e, 0x46, 0x54, 0x43, 0xdf, 0x3c,
    0xca, 0x7d, 0xae, 0x76, 0xee, 0x4e, 0xbf, 0x85,
    0xc4, 0x65, 0x8d, 0x58, 0x50, 0x37, 0xbc, 0xaa,
  }};

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
