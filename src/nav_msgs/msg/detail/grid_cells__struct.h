// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_msgs:msg/GridCells.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__GRID_CELLS__STRUCT_H_
#define NAV_MSGS__MSG__DETAIL__GRID_CELLS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__msg__GridCells__TYPE_HASH = {1, {
    0xbb, 0x99, 0xc2, 0xf5, 0xd0, 0xa0, 0x47, 0x50,
    0x74, 0x5a, 0x81, 0xec, 0x6a, 0x81, 0x47, 0xaa,
    0x37, 0x3c, 0xce, 0x5b, 0xd1, 0x7c, 0x8c, 0xd6,
    0x50, 0x7f, 0x24, 0x13, 0x35, 0x4a, 0x69, 0x33,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'cells'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/GridCells in the package nav_msgs.
/**
  * An array of cells in a 2D grid
 */
typedef struct nav_msgs__msg__GridCells
{
  std_msgs__msg__Header header;
  /// Width of each cell
  float cell_width;
  /// Height of each cell
  float cell_height;
  /// Each cell is represented by the Point at the center of the cell
  geometry_msgs__msg__Point__Sequence cells;
} nav_msgs__msg__GridCells;

// Struct for a sequence of nav_msgs__msg__GridCells.
typedef struct nav_msgs__msg__GridCells__Sequence
{
  nav_msgs__msg__GridCells * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__msg__GridCells__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__MSG__DETAIL__GRID_CELLS__STRUCT_H_
