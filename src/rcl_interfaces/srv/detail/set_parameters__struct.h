// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:srv/SetParameters.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DETAIL__SET_PARAMETERS__STRUCT_H_
#define RCL_INTERFACES__SRV__DETAIL__SET_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parameters'
#include "rcl_interfaces/msg/detail/parameter__struct.h"

/// Struct defined in srv/SetParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__SetParameters_Request
{
  rcl_interfaces__msg__Parameter__Sequence parameters;
} rcl_interfaces__srv__SetParameters_Request;

// Struct for a sequence of rcl_interfaces__srv__SetParameters_Request.
typedef struct rcl_interfaces__srv__SetParameters_Request__Sequence
{
  rcl_interfaces__srv__SetParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__SetParameters_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'results'
#include "rcl_interfaces/msg/detail/set_parameters_result__struct.h"

/// Struct defined in srv/SetParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__SetParameters_Response
{
  rcl_interfaces__msg__SetParametersResult__Sequence results;
} rcl_interfaces__srv__SetParameters_Response;

// Struct for a sequence of rcl_interfaces__srv__SetParameters_Response.
typedef struct rcl_interfaces__srv__SetParameters_Response__Sequence
{
  rcl_interfaces__srv__SetParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__SetParameters_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__DETAIL__SET_PARAMETERS__STRUCT_H_
