// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:msg/InteractiveMarkerInit.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t visualization_msgs__msg__InteractiveMarkerInit__TYPE_HASH = {1, {
    0x23, 0xfd, 0xa1, 0xb3, 0x37, 0x3b, 0x15, 0x4d,
    0x9d, 0x64, 0x08, 0xdd, 0x7b, 0x9f, 0x81, 0x29,
    0xb2, 0xa2, 0xb7, 0x6b, 0x90, 0x5e, 0xe4, 0x21,
    0xe8, 0xc4, 0x10, 0x9d, 0x8b, 0xf7, 0x1f, 0x78,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'server_id'
#include "rosidl_runtime_c/string.h"
// Member 'markers'
#include "visualization_msgs/msg/detail/interactive_marker__struct.h"

/// Struct defined in msg/InteractiveMarkerInit in the package visualization_msgs.
/**
  * Identifying string. Must be unique in the topic namespace
  * that this server works on.
 */
typedef struct visualization_msgs__msg__InteractiveMarkerInit
{
  rosidl_runtime_c__String server_id;
  /// Sequence number.
  /// The client will use this to detect if it has missed a subsequent
  /// update.  Every update message will have the same sequence number as
  /// an init message.  Clients will likely want to unsubscribe from the
  /// init topic after a successful initialization to avoid receiving
  /// duplicate data.
  uint64_t seq_num;
  /// All markers.
  visualization_msgs__msg__InteractiveMarker__Sequence markers;
} visualization_msgs__msg__InteractiveMarkerInit;

// Struct for a sequence of visualization_msgs__msg__InteractiveMarkerInit.
typedef struct visualization_msgs__msg__InteractiveMarkerInit__Sequence
{
  visualization_msgs__msg__InteractiveMarkerInit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__InteractiveMarkerInit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__STRUCT_H_
