// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from micro_ros_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef MICRO_ROS_MSGS__MSG__DETAIL__NODE__STRUCT_H_
#define MICRO_ROS_MSGS__MSG__DETAIL__NODE__STRUCT_H_

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
#define micro_ros_msgs__msg__Node__TYPE_VERSION_HASH__INIT {1, { \
      0x76, 0x92, 0xc8, 0x4e, 0xe5, 0x13, 0x44, 0xaa, \
      0x3f, 0xe8, 0x01, 0x04, 0x83, 0xde, 0x6e, 0xaa, \
      0x89, 0xb5, 0x13, 0xb1, 0xa8, 0xe1, 0xe3, 0x20, \
      0x35, 0x5b, 0x46, 0x3b, 0x98, 0x57, 0xb4, 0xd4, \
    }}
static const rosidl_type_hash_t micro_ros_msgs__msg__Node__TYPE_VERSION_HASH = micro_ros_msgs__msg__Node__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'node_namespace'
// Member 'node_name'
#include "rosidl_runtime_c/string.h"
// Member 'entities'
#include "micro_ros_msgs/msg/detail/entity__struct.h"

// constants for array fields with an upper bound
// node_namespace
enum
{
  micro_ros_msgs__msg__Node__node_namespace__MAX_STRING_SIZE = 256
};
// node_name
enum
{
  micro_ros_msgs__msg__Node__node_name__MAX_STRING_SIZE = 256
};

/// Struct defined in msg/Node in the package micro_ros_msgs.
typedef struct micro_ros_msgs__msg__Node
{
  rosidl_runtime_c__String node_namespace;
  rosidl_runtime_c__String node_name;
  micro_ros_msgs__msg__Entity__Sequence entities;
} micro_ros_msgs__msg__Node;

// Struct for a sequence of micro_ros_msgs__msg__Node.
typedef struct micro_ros_msgs__msg__Node__Sequence
{
  micro_ros_msgs__msg__Node * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} micro_ros_msgs__msg__Node__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICRO_ROS_MSGS__MSG__DETAIL__NODE__STRUCT_H_
