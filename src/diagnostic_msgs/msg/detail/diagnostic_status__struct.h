// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from diagnostic_msgs:msg/DiagnosticStatus.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__STRUCT_H_
#define DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OK'.
enum
{
  diagnostic_msgs__msg__DiagnosticStatus__OK = 0
};

/// Constant 'WARN'.
enum
{
  diagnostic_msgs__msg__DiagnosticStatus__WARN = 1
};

/// Constant 'ERROR'.
enum
{
  diagnostic_msgs__msg__DiagnosticStatus__ERROR = 2
};

/// Constant 'STALE'.
enum
{
  diagnostic_msgs__msg__DiagnosticStatus__STALE = 3
};

// Include directives for member types
// Member 'name'
// Member 'message'
// Member 'hardware_id'
#include "rosidl_runtime_c/string.h"
// Member 'values'
#include "diagnostic_msgs/msg/detail/key_value__struct.h"

// Struct defined in msg/DiagnosticStatus in the package diagnostic_msgs.
typedef struct diagnostic_msgs__msg__DiagnosticStatus
{
  uint8_t level;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String hardware_id;
  diagnostic_msgs__msg__KeyValue__Sequence values;
} diagnostic_msgs__msg__DiagnosticStatus;

// Struct for a sequence of diagnostic_msgs__msg__DiagnosticStatus.
typedef struct diagnostic_msgs__msg__DiagnosticStatus__Sequence
{
  diagnostic_msgs__msg__DiagnosticStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__msg__DiagnosticStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__STRUCT_H_
