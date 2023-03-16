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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__msg__MapMetaData__TYPE_VERSION_HASH__INIT {1, { \
      0x0c, 0xdf, 0x55, 0xc1, 0xdb, 0x19, 0x0b, 0x2c, \
      0x92, 0x46, 0x43, 0x37, 0xed, 0x01, 0xfc, 0x5e, \
      0x6a, 0x8b, 0x68, 0x92, 0x9b, 0x75, 0x0d, 0x20, \
      0xe7, 0x85, 0xaa, 0xf7, 0x74, 0xf1, 0x75, 0x07, \
    }}
static const rosidl_type_hash_t nav_msgs__msg__MapMetaData__TYPE_VERSION_HASH = nav_msgs__msg__MapMetaData__TYPE_VERSION_HASH__INIT;

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
