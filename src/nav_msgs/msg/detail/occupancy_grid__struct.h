// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_msgs:msg/OccupancyGrid.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__OCCUPANCY_GRID__STRUCT_H_
#define NAV_MSGS__MSG__DETAIL__OCCUPANCY_GRID__STRUCT_H_

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
#define nav_msgs__msg__OccupancyGrid__TYPE_VERSION_HASH__INIT {1, { \
      0x5f, 0x03, 0xf2, 0xeb, 0x12, 0x9a, 0xdb, 0xba, \
      0x25, 0xf0, 0xad, 0x7d, 0x59, 0x59, 0x1c, 0xf6, \
      0x53, 0xd4, 0xdf, 0x63, 0x38, 0x9e, 0x28, 0x0a, \
      0xc7, 0xa0, 0x2b, 0xf7, 0x47, 0x29, 0x5a, 0xd7, \
    }}
static const rosidl_type_hash_t nav_msgs__msg__OccupancyGrid__TYPE_VERSION_HASH = nav_msgs__msg__OccupancyGrid__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'info'
#include "nav_msgs/msg/detail/map_meta_data__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/OccupancyGrid in the package nav_msgs.
/**
  * This represents a 2-D grid map
 */
typedef struct nav_msgs__msg__OccupancyGrid
{
  std_msgs__msg__Header header;
  /// MetaData for the map
  nav_msgs__msg__MapMetaData info;
  /// The map data, in row-major order, starting with (0,0).
  /// Cell (1, 0) will be listed second, representing the next cell in the x direction.
  /// Cell (0, 1) will be at the index equal to info.width, followed by (1, 1).
  /// The values inside are application dependent, but frequently,
  /// 0 represents unoccupied, 1 represents definitely occupied, and
  /// -1 represents unknown.
  rosidl_runtime_c__int8__Sequence data;
} nav_msgs__msg__OccupancyGrid;

// Struct for a sequence of nav_msgs__msg__OccupancyGrid.
typedef struct nav_msgs__msg__OccupancyGrid__Sequence
{
  nav_msgs__msg__OccupancyGrid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__msg__OccupancyGrid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__MSG__DETAIL__OCCUPANCY_GRID__STRUCT_H_
