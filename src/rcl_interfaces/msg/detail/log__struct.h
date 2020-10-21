// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:msg/Log.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__LOG__STRUCT_H_
#define RCL_INTERFACES__MSG__DETAIL__LOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEBUG'.
enum
{
  rcl_interfaces__msg__Log__DEBUG = 10
};

/// Constant 'INFO'.
enum
{
  rcl_interfaces__msg__Log__INFO = 20
};

/// Constant 'WARN'.
enum
{
  rcl_interfaces__msg__Log__WARN = 30
};

/// Constant 'ERROR'.
enum
{
  rcl_interfaces__msg__Log__ERROR = 40
};

/// Constant 'FATAL'.
enum
{
  rcl_interfaces__msg__Log__FATAL = 50
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'name'
// Member 'msg'
// Member 'file'
// Member 'function'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Log in the package rcl_interfaces.
typedef struct rcl_interfaces__msg__Log
{
  builtin_interfaces__msg__Time stamp;
  uint8_t level;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String msg;
  rosidl_runtime_c__String file;
  rosidl_runtime_c__String function;
  uint32_t line;
} rcl_interfaces__msg__Log;

// Struct for a sequence of rcl_interfaces__msg__Log.
typedef struct rcl_interfaces__msg__Log__Sequence
{
  rcl_interfaces__msg__Log * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__Log__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__DETAIL__LOG__STRUCT_H_
