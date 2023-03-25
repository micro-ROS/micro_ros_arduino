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

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__msg__MapMetaData__TYPE_HASH = {1, {
    0x27, 0x72, 0xd4, 0xb2, 0x00, 0x0e, 0xf2, 0xb3,
    0x5d, 0xba, 0xeb, 0x80, 0xfd, 0x39, 0x46, 0xc1,
    0x36, 0x9f, 0x81, 0x7f, 0xb4, 0xf7, 0x56, 0x77,
    0xd9, 0x16, 0xd2, 0x7c, 0x17, 0xd7, 0x63, 0xc8,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'map_load_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/MapMetaData in the package nav_msgs.
/**
  * This hold basic information about the characteristics of the OccupancyGrid
 */
typedef struct nav_msgs__msg__MapMetaData
{
  /// The time at which the map was loaded
  builtin_interfaces__msg__Time map_load_time;
  /// The map resolution
  float resolution;
  /// Map width
  uint32_t width;
  /// Map height
  uint32_t height;
  /// The origin of the map [m, m, rad].  This is the real-world pose of the
  /// bottom left corner of cell (0,0) in the map.
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
