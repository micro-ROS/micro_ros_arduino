// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from diagnostic_msgs:msg/DiagnosticArray.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__STRUCT_H_
#define DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__STRUCT_H_

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
#define diagnostic_msgs__msg__DiagnosticArray__TYPE_VERSION_HASH__INIT {1, { \
      0x14, 0xfe, 0x60, 0xcb, 0x7c, 0xdf, 0x1e, 0x3e, \
      0xf5, 0x01, 0xce, 0x49, 0x50, 0x50, 0x2d, 0x0a, \
      0x4b, 0xf2, 0x8c, 0x31, 0xa1, 0xa6, 0x2f, 0xa5, \
      0x31, 0xd8, 0xee, 0x02, 0xcb, 0x2a, 0x7a, 0x0e, \
    }}
static const rosidl_type_hash_t diagnostic_msgs__msg__DiagnosticArray__TYPE_VERSION_HASH = diagnostic_msgs__msg__DiagnosticArray__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'status'
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.h"

/// Struct defined in msg/DiagnosticArray in the package diagnostic_msgs.
/**
  * This message is used to send diagnostic information about the state of the robot.
 */
typedef struct diagnostic_msgs__msg__DiagnosticArray
{
  /// for timestamp
  std_msgs__msg__Header header;
  /// an array of components being reported on
  diagnostic_msgs__msg__DiagnosticStatus__Sequence status;
} diagnostic_msgs__msg__DiagnosticArray;

// Struct for a sequence of diagnostic_msgs__msg__DiagnosticArray.
typedef struct diagnostic_msgs__msg__DiagnosticArray__Sequence
{
  diagnostic_msgs__msg__DiagnosticArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__msg__DiagnosticArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__STRUCT_H_
