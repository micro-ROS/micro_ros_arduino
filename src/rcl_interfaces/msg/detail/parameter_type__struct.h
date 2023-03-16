// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:msg/ParameterType.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__PARAMETER_TYPE__STRUCT_H_
#define RCL_INTERFACES__MSG__DETAIL__PARAMETER_TYPE__STRUCT_H_

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
#define rcl_interfaces__msg__ParameterType__TYPE_VERSION_HASH__INIT {1, { \
      0x12, 0x53, 0xfc, 0x4c, 0x36, 0x52, 0x47, 0xc0, \
      0x65, 0x9c, 0xf7, 0x51, 0x86, 0x5f, 0x7f, 0x06, \
      0x94, 0x67, 0x29, 0x73, 0xec, 0xd1, 0x05, 0x57, \
      0x81, 0x59, 0x15, 0x31, 0xcb, 0x76, 0xd2, 0xfc, \
    }}
static const rosidl_type_hash_t rcl_interfaces__msg__ParameterType__TYPE_VERSION_HASH = rcl_interfaces__msg__ParameterType__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Constant 'PARAMETER_NOT_SET'.
/**
  * Default value, which implies this is not a valid parameter.
 */
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_NOT_SET = 0
};

/// Constant 'PARAMETER_BOOL'.
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_BOOL = 1
};

/// Constant 'PARAMETER_INTEGER'.
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_INTEGER = 2
};

/// Constant 'PARAMETER_DOUBLE'.
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_DOUBLE = 3
};

/// Constant 'PARAMETER_STRING'.
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_STRING = 4
};

/// Constant 'PARAMETER_BYTE_ARRAY'.
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_BYTE_ARRAY = 5
};

/// Constant 'PARAMETER_BOOL_ARRAY'.
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_BOOL_ARRAY = 6
};

/// Constant 'PARAMETER_INTEGER_ARRAY'.
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_INTEGER_ARRAY = 7
};

/// Constant 'PARAMETER_DOUBLE_ARRAY'.
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_DOUBLE_ARRAY = 8
};

/// Constant 'PARAMETER_STRING_ARRAY'.
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_STRING_ARRAY = 9
};

/// Struct defined in msg/ParameterType in the package rcl_interfaces.
/**
  * These types correspond to the value that is set in the ParameterValue message.
 */
typedef struct rcl_interfaces__msg__ParameterType
{
  uint8_t structure_needs_at_least_one_member;
} rcl_interfaces__msg__ParameterType;

// Struct for a sequence of rcl_interfaces__msg__ParameterType.
typedef struct rcl_interfaces__msg__ParameterType__Sequence
{
  rcl_interfaces__msg__ParameterType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__ParameterType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__DETAIL__PARAMETER_TYPE__STRUCT_H_
