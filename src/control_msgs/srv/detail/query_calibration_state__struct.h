// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:srv/QueryCalibrationState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__STRUCT_H_
#define CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__srv__QueryCalibrationState__TYPE_VERSION_HASH__INIT {1, { \
      0x67, 0x67, 0xb8, 0x74, 0xea, 0x4b, 0xe7, 0x19, \
      0x76, 0x75, 0x6f, 0xe0, 0x52, 0x49, 0x78, 0xbe, \
      0xac, 0x52, 0xc1, 0x2c, 0xb0, 0xf6, 0x53, 0x25, \
      0xad, 0x11, 0xda, 0x11, 0x26, 0x8c, 0x17, 0x44, \
    }}
static const rosidl_type_hash_t control_msgs__srv__QueryCalibrationState__TYPE_VERSION_HASH = control_msgs__srv__QueryCalibrationState__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__srv__QueryCalibrationState_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x8f, 0x24, 0x1d, 0x8d, 0x0c, 0x52, 0x4e, 0x2f, \
      0x22, 0xbc, 0x74, 0x4e, 0xa8, 0xb1, 0x98, 0xb0, \
      0x54, 0x14, 0xda, 0x26, 0x1e, 0xd8, 0x89, 0x53, \
      0x3a, 0xf0, 0xd4, 0x24, 0x5d, 0x3f, 0x39, 0xbb, \
    }}
static const rosidl_type_hash_t control_msgs__srv__QueryCalibrationState_Request__TYPE_VERSION_HASH = control_msgs__srv__QueryCalibrationState_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in srv/QueryCalibrationState in the package control_msgs.
typedef struct control_msgs__srv__QueryCalibrationState_Request
{
  uint8_t structure_needs_at_least_one_member;
} control_msgs__srv__QueryCalibrationState_Request;

// Struct for a sequence of control_msgs__srv__QueryCalibrationState_Request.
typedef struct control_msgs__srv__QueryCalibrationState_Request__Sequence
{
  control_msgs__srv__QueryCalibrationState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__srv__QueryCalibrationState_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__srv__QueryCalibrationState_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xf4, 0x34, 0x97, 0x2f, 0x64, 0xdf, 0x21, 0x2f, \
      0x9d, 0x32, 0x46, 0xd4, 0xfa, 0x03, 0xf9, 0xe1, \
      0xea, 0x2e, 0xf6, 0xd8, 0x83, 0xb3, 0xac, 0x98, \
      0x5f, 0x27, 0x23, 0xc0, 0x53, 0x4d, 0x18, 0x98, \
    }}
static const rosidl_type_hash_t control_msgs__srv__QueryCalibrationState_Response__TYPE_VERSION_HASH = control_msgs__srv__QueryCalibrationState_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in srv/QueryCalibrationState in the package control_msgs.
typedef struct control_msgs__srv__QueryCalibrationState_Response
{
  bool is_calibrated;
} control_msgs__srv__QueryCalibrationState_Response;

// Struct for a sequence of control_msgs__srv__QueryCalibrationState_Response.
typedef struct control_msgs__srv__QueryCalibrationState_Response__Sequence
{
  control_msgs__srv__QueryCalibrationState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__srv__QueryCalibrationState_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__srv__QueryCalibrationState_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x73, 0xdc, 0x45, 0xbe, 0xbb, 0x48, 0x40, 0x02, \
      0x00, 0xdc, 0xf3, 0xb8, 0xf8, 0x07, 0x67, 0x8f, \
      0x3d, 0xb0, 0x8e, 0xe9, 0xe5, 0xbd, 0x64, 0xbc, \
      0xdc, 0x3e, 0x29, 0xf5, 0x6a, 0x66, 0x15, 0xe8, \
    }}
static const rosidl_type_hash_t control_msgs__srv__QueryCalibrationState_Event__TYPE_VERSION_HASH = control_msgs__srv__QueryCalibrationState_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  control_msgs__srv__QueryCalibrationState_Event__request__MAX_SIZE = 1
};
// response
enum
{
  control_msgs__srv__QueryCalibrationState_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/QueryCalibrationState in the package control_msgs.
typedef struct control_msgs__srv__QueryCalibrationState_Event
{
  service_msgs__msg__ServiceEventInfo info;
  control_msgs__srv__QueryCalibrationState_Request__Sequence request;
  control_msgs__srv__QueryCalibrationState_Response__Sequence response;
} control_msgs__srv__QueryCalibrationState_Event;

// Struct for a sequence of control_msgs__srv__QueryCalibrationState_Event.
typedef struct control_msgs__srv__QueryCalibrationState_Event__Sequence
{
  control_msgs__srv__QueryCalibrationState_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__srv__QueryCalibrationState_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__STRUCT_H_
