// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__PATH__STRUCT_H_
#define NAV_MSGS__MSG__DETAIL__PATH__STRUCT_H_

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
#define nav_msgs__msg__Path__TYPE_VERSION_HASH__INIT {1, { \
      0xc4, 0x56, 0x99, 0x82, 0x42, 0x9d, 0x5d, 0x03, \
      0xf0, 0x79, 0x62, 0x34, 0xda, 0x71, 0x3c, 0xa0, \
      0xf5, 0xf5, 0x1f, 0x15, 0x8f, 0x4c, 0x7d, 0x51, \
      0x73, 0x5d, 0xd1, 0xfb, 0xab, 0x28, 0x36, 0x35, \
    }}
static const rosidl_type_hash_t nav_msgs__msg__Path__TYPE_VERSION_HASH = nav_msgs__msg__Path__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/Path in the package nav_msgs.
/**
  * An array of poses that represents a Path for a robot to follow.
 */
typedef struct nav_msgs__msg__Path
{
  /// Indicates the frame_id of the path.
  std_msgs__msg__Header header;
  /// Array of poses to follow.
  geometry_msgs__msg__PoseStamped__Sequence poses;
} nav_msgs__msg__Path;

// Struct for a sequence of nav_msgs__msg__Path.
typedef struct nav_msgs__msg__Path__Sequence
{
  nav_msgs__msg__Path * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__msg__Path__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__MSG__DETAIL__PATH__STRUCT_H_
