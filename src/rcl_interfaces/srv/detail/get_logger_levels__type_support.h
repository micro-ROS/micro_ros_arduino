// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from rcl_interfaces:srv/GetLoggerLevels.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DETAIL__GET_LOGGER_LEVELS__TYPE_SUPPORT_H_
#define RCL_INTERFACES__SRV__DETAIL__GET_LOGGER_LEVELS__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "rcl_interfaces/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  rcl_interfaces,
  srv,
  GetLoggerLevels_Request
)();

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  rcl_interfaces,
  srv,
  GetLoggerLevels_Response
)();

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  rcl_interfaces,
  srv,
  GetLoggerLevels_Event
)();

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  rcl_interfaces,
  srv,
  GetLoggerLevels
)();

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  rcl_interfaces,
  srv,
  GetLoggerLevels
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  rcl_interfaces,
  srv,
  GetLoggerLevels
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__DETAIL__GET_LOGGER_LEVELS__TYPE_SUPPORT_H_
