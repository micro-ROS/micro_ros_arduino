// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from micro_ros_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef MICRO_ROS_MSGS__MSG__DETAIL__GRAPH__STRUCT_H_
#define MICRO_ROS_MSGS__MSG__DETAIL__GRAPH__STRUCT_H_

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
#define micro_ros_msgs__msg__Graph__TYPE_VERSION_HASH__INIT {1, { \
      0xdf, 0x8c, 0x1c, 0xa8, 0x14, 0xb3, 0x51, 0xad, \
      0x73, 0xa2, 0x5e, 0xbc, 0xb0, 0x5e, 0x90, 0xec, \
      0x51, 0x18, 0x16, 0xc1, 0x09, 0x40, 0xd9, 0xb9, \
      0xb0, 0xda, 0xdd, 0x1e, 0x3e, 0x93, 0xed, 0xa2, \
    }}
static const rosidl_type_hash_t micro_ros_msgs__msg__Graph__TYPE_VERSION_HASH = micro_ros_msgs__msg__Graph__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'nodes'
#include "micro_ros_msgs/msg/detail/node__struct.h"

/// Struct defined in msg/Graph in the package micro_ros_msgs.
typedef struct micro_ros_msgs__msg__Graph
{
  micro_ros_msgs__msg__Node__Sequence nodes;
} micro_ros_msgs__msg__Graph;

// Struct for a sequence of micro_ros_msgs__msg__Graph.
typedef struct micro_ros_msgs__msg__Graph__Sequence
{
  micro_ros_msgs__msg__Graph * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} micro_ros_msgs__msg__Graph__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICRO_ROS_MSGS__MSG__DETAIL__GRAPH__STRUCT_H_
