// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/InterfaceValue.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__INTERFACE_VALUE__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__INTERFACE_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'interface_names'
#include "rosidl_runtime_c/string.h"
// Member 'values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/InterfaceValue in the package control_msgs.
/**
  * List of resource interface names
 */
typedef struct control_msgs__msg__InterfaceValue
{
  rosidl_runtime_c__String__Sequence interface_names;
  /// Values corresponding to the list of interfaces in `interface_names`, [1.0, 0.0] for example
  rosidl_runtime_c__double__Sequence values;
} control_msgs__msg__InterfaceValue;

// Struct for a sequence of control_msgs__msg__InterfaceValue.
typedef struct control_msgs__msg__InterfaceValue__Sequence
{
  control_msgs__msg__InterfaceValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__InterfaceValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__INTERFACE_VALUE__STRUCT_H_
