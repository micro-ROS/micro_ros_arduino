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


// Type Hash for interface
static const rosidl_type_hash_t micro_ros_msgs__msg__Graph__TYPE_HASH = {1, {
    0x43, 0xaa, 0xc5, 0x88, 0x23, 0x93, 0x27, 0x50,
    0x60, 0x7f, 0xe3, 0xb8, 0xdd, 0x34, 0x2c, 0xa1,
    0x68, 0xbe, 0xf4, 0x81, 0xb4, 0x08, 0x89, 0xf8,
    0x93, 0xcb, 0xea, 0xa3, 0xd5, 0xc4, 0xc7, 0x37,
  }};

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
