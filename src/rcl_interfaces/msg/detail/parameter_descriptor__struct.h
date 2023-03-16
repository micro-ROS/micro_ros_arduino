// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:msg/ParameterDescriptor.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__PARAMETER_DESCRIPTOR__STRUCT_H_
#define RCL_INTERFACES__MSG__DETAIL__PARAMETER_DESCRIPTOR__STRUCT_H_

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
#define rcl_interfaces__msg__ParameterDescriptor__TYPE_VERSION_HASH__INIT {1, { \
      0x7b, 0xc7, 0xdb, 0xf7, 0x7e, 0x12, 0x51, 0x2c, \
      0x95, 0x5b, 0xfd, 0x94, 0x03, 0x3e, 0x60, 0x11, \
      0x7e, 0x04, 0x40, 0xfb, 0x26, 0xe0, 0xb0, 0xe0, \
      0x5f, 0x57, 0xb4, 0xe4, 0xd5, 0xe8, 0x78, 0xe2, \
    }}
static const rosidl_type_hash_t rcl_interfaces__msg__ParameterDescriptor__TYPE_VERSION_HASH = rcl_interfaces__msg__ParameterDescriptor__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'description'
// Member 'additional_constraints'
#include "rosidl_runtime_c/string.h"
// Member 'floating_point_range'
#include "rcl_interfaces/msg/detail/floating_point_range__struct.h"
// Member 'integer_range'
#include "rcl_interfaces/msg/detail/integer_range__struct.h"

// constants for array fields with an upper bound
// floating_point_range
enum
{
  rcl_interfaces__msg__ParameterDescriptor__floating_point_range__MAX_SIZE = 1
};
// integer_range
enum
{
  rcl_interfaces__msg__ParameterDescriptor__integer_range__MAX_SIZE = 1
};

/// Struct defined in msg/ParameterDescriptor in the package rcl_interfaces.
/**
  * This is the message to communicate a parameter's descriptor.
 */
typedef struct rcl_interfaces__msg__ParameterDescriptor
{
  /// The name of the parameter.
  rosidl_runtime_c__String name;
  /// Enum values are defined in the `ParameterType.msg` message.
  uint8_t type;
  /// Description of the parameter, visible from introspection tools.
  rosidl_runtime_c__String description;
  /// Parameter constraints
  /// Plain English description of additional constraints which cannot be expressed
  /// with the available constraints, e.g. "only prime numbers".
  ///
  /// By convention, this should only be used to clarify constraints which cannot
  /// be completely expressed with the parameter constraints below.
  rosidl_runtime_c__String additional_constraints;
  /// If 'true' then the value cannot change after it has been initialized.
  bool read_only;
  /// If true, the parameter is allowed to change type.
  bool dynamic_typing;
  /// If any of the following sequences are not empty, then the constraint inside of
  /// them apply to this parameter.
  ///
  /// FloatingPointRange and IntegerRange are mutually exclusive.
  /// FloatingPointRange consists of a from_value, a to_value, and a step.
  rcl_interfaces__msg__FloatingPointRange__Sequence floating_point_range;
  /// IntegerRange consists of a from_value, a to_value, and a step.
  rcl_interfaces__msg__IntegerRange__Sequence integer_range;
} rcl_interfaces__msg__ParameterDescriptor;

// Struct for a sequence of rcl_interfaces__msg__ParameterDescriptor.
typedef struct rcl_interfaces__msg__ParameterDescriptor__Sequence
{
  rcl_interfaces__msg__ParameterDescriptor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__ParameterDescriptor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__DETAIL__PARAMETER_DESCRIPTOR__STRUCT_H_
