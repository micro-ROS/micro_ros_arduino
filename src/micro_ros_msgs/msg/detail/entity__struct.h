// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from micro_ros_msgs:msg/Entity.idl
// generated code does not contain a copyright notice

#ifndef MICRO_ROS_MSGS__MSG__DETAIL__ENTITY__STRUCT_H_
#define MICRO_ROS_MSGS__MSG__DETAIL__ENTITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t micro_ros_msgs__msg__Entity__TYPE_HASH = {1, {
    0xf6, 0x6f, 0x49, 0xcb, 0xcc, 0x49, 0xd8, 0x60,
    0x2b, 0xed, 0xa0, 0xff, 0xc3, 0xb6, 0x00, 0x6e,
    0x5a, 0xdd, 0xf5, 0xa7, 0x8e, 0x9d, 0x7d, 0x62,
    0xe8, 0x31, 0xb2, 0x7c, 0x91, 0x2a, 0x3e, 0x08,
  }};

// Constants defined in the message

/// Constant 'PUBLISHER'.
enum
{
  micro_ros_msgs__msg__Entity__PUBLISHER = 0
};

/// Constant 'SUBSCRIBER'.
enum
{
  micro_ros_msgs__msg__Entity__SUBSCRIBER = 1
};

/// Constant 'SERVICE_SERVER'.
enum
{
  micro_ros_msgs__msg__Entity__SERVICE_SERVER = 2
};

/// Constant 'SERVICE_CLIENT'.
enum
{
  micro_ros_msgs__msg__Entity__SERVICE_CLIENT = 3
};

// Include directives for member types
// Member 'name'
// Member 'types'
#include "rosidl_runtime_c/string.h"

// constants for array fields with an upper bound
// name
enum
{
  micro_ros_msgs__msg__Entity__name__MAX_STRING_SIZE = 256
};
// types
enum
{
  micro_ros_msgs__msg__Entity__types__MAX_STRING_SIZE = 256
};

/// Struct defined in msg/Entity in the package micro_ros_msgs.
typedef struct micro_ros_msgs__msg__Entity
{
  uint8_t entity_type;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String__Sequence types;
} micro_ros_msgs__msg__Entity;

// Struct for a sequence of micro_ros_msgs__msg__Entity.
typedef struct micro_ros_msgs__msg__Entity__Sequence
{
  micro_ros_msgs__msg__Entity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} micro_ros_msgs__msg__Entity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICRO_ROS_MSGS__MSG__DETAIL__ENTITY__STRUCT_H_
