// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_srvs:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__TRIGGER__STRUCT_H_
#define STD_SRVS__SRV__DETAIL__TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Trigger in the package std_srvs.
typedef struct std_srvs__srv__Trigger_Request
{
  uint8_t structure_needs_at_least_one_member;
} std_srvs__srv__Trigger_Request;

// Struct for a sequence of std_srvs__srv__Trigger_Request.
typedef struct std_srvs__srv__Trigger_Request__Sequence
{
  std_srvs__srv__Trigger_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__Trigger_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Trigger in the package std_srvs.
typedef struct std_srvs__srv__Trigger_Response
{
  bool success;
  rosidl_runtime_c__String message;
} std_srvs__srv__Trigger_Response;

// Struct for a sequence of std_srvs__srv__Trigger_Response.
typedef struct std_srvs__srv__Trigger_Response__Sequence
{
  std_srvs__srv__Trigger_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__Trigger_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__DETAIL__TRIGGER__STRUCT_H_
