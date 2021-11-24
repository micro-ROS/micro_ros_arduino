// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_msgs:msg/MapMetaData.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__MAP_META_DATA__STRUCT_H_
#define NAV_MSGS__MSG__DETAIL__MAP_META_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_load_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/MapMetaData in the package nav_msgs.
typedef struct nav_msgs__msg__MapMetaData
{
  builtin_interfaces__msg__Time map_load_time;
  float resolution;
  uint32_t width;
  uint32_t height;
  geometry_msgs__msg__Pose origin;
} nav_msgs__msg__MapMetaData;

// Struct for a sequence of nav_msgs__msg__MapMetaData.
typedef struct nav_msgs__msg__MapMetaData__Sequence
{
  nav_msgs__msg__MapMetaData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__msg__MapMetaData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__MSG__DETAIL__MAP_META_DATA__STRUCT_H_
