// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:msg/MenuEntry.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FEEDBACK'.
enum
{
  visualization_msgs__msg__MenuEntry__FEEDBACK = 0
};

/// Constant 'ROSRUN'.
enum
{
  visualization_msgs__msg__MenuEntry__ROSRUN = 1
};

/// Constant 'ROSLAUNCH'.
enum
{
  visualization_msgs__msg__MenuEntry__ROSLAUNCH = 2
};

// Include directives for member types
// Member 'title'
// Member 'command'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/MenuEntry in the package visualization_msgs.
typedef struct visualization_msgs__msg__MenuEntry
{
  uint32_t id;
  uint32_t parent_id;
  rosidl_runtime_c__String title;
  rosidl_runtime_c__String command;
  uint8_t command_type;
} visualization_msgs__msg__MenuEntry;

// Struct for a sequence of visualization_msgs__msg__MenuEntry.
typedef struct visualization_msgs__msg__MenuEntry__Sequence
{
  visualization_msgs__msg__MenuEntry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__MenuEntry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__STRUCT_H_
