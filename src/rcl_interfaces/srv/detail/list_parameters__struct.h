// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:srv/ListParameters.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DETAIL__LIST_PARAMETERS__STRUCT_H_
#define RCL_INTERFACES__SRV__DETAIL__LIST_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEPTH_RECURSIVE'.
enum
{
  rcl_interfaces__srv__ListParameters_Request__DEPTH_RECURSIVE = 0ull
};

// Include directives for member types
// Member 'prefixes'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ListParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__ListParameters_Request
{
  /// The list of parameter prefixes to query.
  rosidl_runtime_c__String__Sequence prefixes;
  /// Relative depth from given prefixes to return.
  ///
  /// Use DEPTH_RECURSIVE to get the recursive parameters and prefixes for each prefix.
  uint64_t depth;
} rcl_interfaces__srv__ListParameters_Request;

// Struct for a sequence of rcl_interfaces__srv__ListParameters_Request.
typedef struct rcl_interfaces__srv__ListParameters_Request__Sequence
{
  rcl_interfaces__srv__ListParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__ListParameters_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rcl_interfaces/msg/detail/list_parameters_result__struct.h"

/// Struct defined in srv/ListParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__ListParameters_Response
{
  rcl_interfaces__msg__ListParametersResult result;
} rcl_interfaces__srv__ListParameters_Response;

// Struct for a sequence of rcl_interfaces__srv__ListParameters_Response.
typedef struct rcl_interfaces__srv__ListParameters_Response__Sequence
{
  rcl_interfaces__srv__ListParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__ListParameters_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__DETAIL__LIST_PARAMETERS__STRUCT_H_
