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

#include "rosidl_runtime_c/type_hash.h"


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define diagnostic_msgs__msg__DiagnosticStatus__TYPE_VERSION_HASH__INIT {1, { \
      0x42, 0x24, 0x30, 0xb6, 0xd7, 0x94, 0xa8, 0x56, \
      0x01, 0x3b, 0xfe, 0x35, 0x37, 0xb2, 0x01, 0xe1, \
      0xe9, 0x72, 0x4e, 0x36, 0x14, 0x89, 0x53, 0x22, \
      0x10, 0x07, 0xa5, 0x8e, 0xf8, 0x96, 0x38, 0xc1, \
    }}
static const rosidl_type_hash_t diagnostic_msgs__msg__DiagnosticStatus__TYPE_VERSION_HASH = diagnostic_msgs__msg__DiagnosticStatus__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Constant 'OK'.
/**
  * Possible levels of operations.
 */
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

/// Struct defined in msg/DiagnosticStatus in the package diagnostic_msgs.
/**
  * This message holds the status of an individual component of the robot.
 */
typedef struct diagnostic_msgs__msg__DiagnosticStatus
{
  /// Level of operation enumerated above.
  uint8_t level;
  /// A description of the test/component reporting.
  rosidl_runtime_c__String name;
  /// A description of the status.
  rosidl_runtime_c__String message;
  /// A hardware unique string.
  rosidl_runtime_c__String hardware_id;
  /// An array of values associated with the status.
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
