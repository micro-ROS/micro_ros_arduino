// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/RegionOfInterest.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__REGION_OF_INTEREST__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__REGION_OF_INTEREST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RegionOfInterest in the package sensor_msgs.
typedef struct sensor_msgs__msg__RegionOfInterest
{
  uint32_t x_offset;
  uint32_t y_offset;
  uint32_t height;
  uint32_t width;
  bool do_rectify;
} sensor_msgs__msg__RegionOfInterest;

// Struct for a sequence of sensor_msgs__msg__RegionOfInterest.
typedef struct sensor_msgs__msg__RegionOfInterest__Sequence
{
  sensor_msgs__msg__RegionOfInterest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__RegionOfInterest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__REGION_OF_INTEREST__STRUCT_H_
