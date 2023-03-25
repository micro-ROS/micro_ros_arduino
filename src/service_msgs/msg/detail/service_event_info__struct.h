// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from service_msgs:msg/ServiceEventInfo.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_MSGS__MSG__DETAIL__SERVICE_EVENT_INFO__STRUCT_H_
#define SERVICE_MSGS__MSG__DETAIL__SERVICE_EVENT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__TYPE_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};

// Constants defined in the message

/// Constant 'REQUEST_SENT'.
enum
{
  service_msgs__msg__ServiceEventInfo__REQUEST_SENT = 0
};

/// Constant 'REQUEST_RECEIVED'.
enum
{
  service_msgs__msg__ServiceEventInfo__REQUEST_RECEIVED = 1
};

/// Constant 'RESPONSE_SENT'.
enum
{
  service_msgs__msg__ServiceEventInfo__RESPONSE_SENT = 2
};

/// Constant 'RESPONSE_RECEIVED'.
enum
{
  service_msgs__msg__ServiceEventInfo__RESPONSE_RECEIVED = 3
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/ServiceEventInfo in the package service_msgs.
typedef struct service_msgs__msg__ServiceEventInfo
{
  /// The type of event this message represents
  uint8_t event_type;
  /// Timestamp for when the event occurred (sent or received time)
  builtin_interfaces__msg__Time stamp;
  /// Unique identifier for the client that sent the service request
  /// Note, this is only unique for the current session.
  /// The size here has to match the size of rmw_dds_common/msg/Gid,
  /// but unfortunately we cannot use that message directly due to a
  /// circular dependency.
  uint8_t client_gid[16];
  /// Sequence number for the request
  /// Combined with the client ID, this creates a unique ID for the service transaction
  int64_t sequence_number;
} service_msgs__msg__ServiceEventInfo;

// Struct for a sequence of service_msgs__msg__ServiceEventInfo.
typedef struct service_msgs__msg__ServiceEventInfo__Sequence
{
  service_msgs__msg__ServiceEventInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} service_msgs__msg__ServiceEventInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVICE_MSGS__MSG__DETAIL__SERVICE_EVENT_INFO__STRUCT_H_
