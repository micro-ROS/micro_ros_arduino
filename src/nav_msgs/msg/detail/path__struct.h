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


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__msg__Path__TYPE_HASH = {1, {
    0x19, 0x57, 0xa5, 0xbb, 0x3c, 0xee, 0x5d, 0xa6,
    0x5c, 0x4e, 0x52, 0xe5, 0x2b, 0x65, 0xa9, 0x3d,
    0xf2, 0x27, 0xef, 0xce, 0x4c, 0x20, 0xf8, 0x45,
    0x8b, 0x36, 0xe7, 0x30, 0x66, 0xca, 0x33, 0x4b,
  }};

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
