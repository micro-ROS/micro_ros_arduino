// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from diagnostic_msgs:srv/AddDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__STRUCT_H_
#define DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'load_namespace'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/AddDiagnostics in the package diagnostic_msgs.
typedef struct diagnostic_msgs__srv__AddDiagnostics_Request
{
  rosidl_runtime_c__String load_namespace;
} diagnostic_msgs__srv__AddDiagnostics_Request;

// Struct for a sequence of diagnostic_msgs__srv__AddDiagnostics_Request.
typedef struct diagnostic_msgs__srv__AddDiagnostics_Request__Sequence
{
  diagnostic_msgs__srv__AddDiagnostics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__srv__AddDiagnostics_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/AddDiagnostics in the package diagnostic_msgs.
typedef struct diagnostic_msgs__srv__AddDiagnostics_Response
{
  bool success;
  rosidl_runtime_c__String message;
} diagnostic_msgs__srv__AddDiagnostics_Response;

// Struct for a sequence of diagnostic_msgs__srv__AddDiagnostics_Response.
typedef struct diagnostic_msgs__srv__AddDiagnostics_Response__Sequence
{
  diagnostic_msgs__srv__AddDiagnostics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__srv__AddDiagnostics_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__STRUCT_H_
