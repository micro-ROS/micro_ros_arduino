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


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__msg__OccupancyGrid__TYPE_HASH = {1, {
    0x8d, 0x34, 0x81, 0x50, 0xc1, 0x29, 0x13, 0xa3,
    0x1e, 0xe0, 0xec, 0x17, 0x0f, 0xbf, 0x25, 0x08,
    0x9e, 0x47, 0x45, 0xd1, 0x70, 0x35, 0x79, 0x2a,
    0x1b, 0xa9, 0x4d, 0x6f, 0x0b, 0xc0, 0xcf, 0xc7,
  }};

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
