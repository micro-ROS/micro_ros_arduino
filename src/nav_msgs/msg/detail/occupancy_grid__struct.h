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


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'info'
#include "nav_msgs/msg/detail/map_meta_data__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/OccupancyGrid in the package nav_msgs.
typedef struct nav_msgs__msg__OccupancyGrid
{
  std_msgs__msg__Header header;
  nav_msgs__msg__MapMetaData info;
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
