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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__msg__GridCells__TYPE_VERSION_HASH__INIT {1, { \
      0xf4, 0x37, 0xc1, 0x80, 0x9d, 0x89, 0xb1, 0x01, \
      0x74, 0xc1, 0x12, 0xfb, 0xdc, 0x10, 0xda, 0x34, \
      0xda, 0x70, 0x73, 0xc4, 0xb1, 0x6c, 0x36, 0x12, \
      0x40, 0x6b, 0x96, 0x76, 0xbc, 0xff, 0x6f, 0x6a, \
    }}
static const rosidl_type_hash_t nav_msgs__msg__GridCells__TYPE_VERSION_HASH = nav_msgs__msg__GridCells__TYPE_VERSION_HASH__INIT;

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
