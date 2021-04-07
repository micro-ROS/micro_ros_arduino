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

// Struct defined in msg/ParameterDescriptor in the package rcl_interfaces.
typedef struct rcl_interfaces__msg__ParameterDescriptor
{
  rosidl_runtime_c__String name;
  uint8_t type;
  rosidl_runtime_c__String description;
  rosidl_runtime_c__String additional_constraints;
  bool read_only;
  rcl_interfaces__msg__FloatingPointRange__Sequence floating_point_range;
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
