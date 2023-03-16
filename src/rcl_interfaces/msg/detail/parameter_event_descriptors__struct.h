// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:msg/ParameterEventDescriptors.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__PARAMETER_EVENT_DESCRIPTORS__STRUCT_H_
#define RCL_INTERFACES__MSG__DETAIL__PARAMETER_EVENT_DESCRIPTORS__STRUCT_H_

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
#define rcl_interfaces__msg__ParameterEventDescriptors__TYPE_VERSION_HASH__INIT {1, { \
      0x4d, 0x92, 0x79, 0x90, 0x34, 0x24, 0x0c, 0x69, \
      0x80, 0x2c, 0x21, 0xb5, 0x48, 0x08, 0xc6, 0xa8, \
      0xa7, 0x53, 0x48, 0x78, 0x38, 0x2c, 0x2e, 0x0e, \
      0xd7, 0x6d, 0xe9, 0xa3, 0xc9, 0x36, 0xdb, 0x4b, \
    }}
static const rosidl_type_hash_t rcl_interfaces__msg__ParameterEventDescriptors__TYPE_VERSION_HASH = rcl_interfaces__msg__ParameterEventDescriptors__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'new_parameters'
// Member 'changed_parameters'
// Member 'deleted_parameters'
#include "rcl_interfaces/msg/detail/parameter_descriptor__struct.h"

/// Struct defined in msg/ParameterEventDescriptors in the package rcl_interfaces.
/**
  * This message contains descriptors of a parameter event.
  * It was an atomic update.
  * A specific parameter name can only be in one of the three sets.
 */
typedef struct rcl_interfaces__msg__ParameterEventDescriptors
{
  rcl_interfaces__msg__ParameterDescriptor__Sequence new_parameters;
  rcl_interfaces__msg__ParameterDescriptor__Sequence changed_parameters;
  rcl_interfaces__msg__ParameterDescriptor__Sequence deleted_parameters;
} rcl_interfaces__msg__ParameterEventDescriptors;

// Struct for a sequence of rcl_interfaces__msg__ParameterEventDescriptors.
typedef struct rcl_interfaces__msg__ParameterEventDescriptors__Sequence
{
  rcl_interfaces__msg__ParameterEventDescriptors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__ParameterEventDescriptors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__DETAIL__PARAMETER_EVENT_DESCRIPTORS__STRUCT_H_
