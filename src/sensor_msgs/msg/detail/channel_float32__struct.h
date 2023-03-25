// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:msg/ChannelFloat32.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__CHANNEL_FLOAT32__STRUCT_H_
#define SENSOR_MSGS__MSG__DETAIL__CHANNEL_FLOAT32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__msg__ChannelFloat32__TYPE_HASH = {1, {
    0x92, 0x66, 0x54, 0x37, 0xdd, 0xf3, 0x93, 0x46,
    0xf4, 0xba, 0x39, 0xee, 0x32, 0xe6, 0x48, 0x39,
    0x06, 0x05, 0xb6, 0x33, 0xcc, 0x07, 0x7d, 0x40,
    0xf4, 0xbd, 0x4d, 0x7b, 0x58, 0xaf, 0x6c, 0xd4,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ChannelFloat32 in the package sensor_msgs.
/**
  * This message is used by the PointCloud message to hold optional data
  * associated with each point in the cloud. The length of the values
  * array should be the same as the length of the points array in the
  * PointCloud, and each value should be associated with the corresponding
  * point.
  *
  * Channel names in existing practice include:
  *   "u", "v" - row and column (respectively) in the left stereo image.
  *              This is opposite to usual conventions but remains for
  *              historical reasons. The newer PointCloud2 message has no
  *              such problem.
  *   "rgb" - For point clouds produced by color stereo cameras. uint8
  *           (R,G,B) values packed into the least significant 24 bits,
  *           in order.
  *   "intensity" - laser or pixel intensity.
  *   "distance"
 */
typedef struct sensor_msgs__msg__ChannelFloat32
{
  /// The channel name should give semantics of the channel (e.g.
  /// "intensity" instead of "value").
  rosidl_runtime_c__String name;
  /// The values array should be 1-1 with the elements of the associated
  /// PointCloud.
  rosidl_runtime_c__float__Sequence values;
} sensor_msgs__msg__ChannelFloat32;

// Struct for a sequence of sensor_msgs__msg__ChannelFloat32.
typedef struct sensor_msgs__msg__ChannelFloat32__Sequence
{
  sensor_msgs__msg__ChannelFloat32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__ChannelFloat32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__CHANNEL_FLOAT32__STRUCT_H_
