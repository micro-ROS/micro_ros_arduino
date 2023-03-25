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


static const rosidl_type_hash_t control_msgs__srv__QueryCalibrationState__TYPE_HASH = {1, {
    0xc6, 0xb9, 0xd1, 0xfd, 0x88, 0xcb, 0xa4, 0x88,
    0x07, 0x5e, 0xe9, 0xfd, 0x7b, 0x69, 0xea, 0x4f,
    0xf6, 0xb1, 0x2b, 0xcd, 0xd0, 0x1a, 0xfe, 0xb9,
    0xc6, 0x08, 0xdd, 0x6f, 0x82, 0x74, 0xde, 0x57,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__srv__QueryCalibrationState_Request__TYPE_HASH = {1, {
    0x9f, 0x30, 0x4f, 0x2b, 0x04, 0xa8, 0x1a, 0x22,
    0x5a, 0x8a, 0xf7, 0x80, 0x11, 0xc1, 0xb4, 0x3e,
    0xa7, 0xc0, 0xe5, 0xf2, 0xf9, 0xbe, 0x89, 0x1e,
    0x50, 0xa7, 0x30, 0x4b, 0x01, 0x54, 0x1e, 0xa4,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__srv__QueryCalibrationState_Response__TYPE_HASH = {1, {
    0x3c, 0xd0, 0xe4, 0x83, 0x3f, 0x9e, 0x0c, 0xda,
    0x53, 0x59, 0x9f, 0x79, 0x17, 0xea, 0x6a, 0xd3,
    0x8a, 0x45, 0x56, 0x9f, 0x04, 0x6b, 0x6e, 0xb1,
    0x4e, 0x7c, 0x02, 0xbb, 0x24, 0xad, 0x86, 0xc6,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__srv__QueryCalibrationState_Event__TYPE_HASH = {1, {
    0xbc, 0x51, 0x0f, 0x85, 0x2c, 0x8e, 0xeb, 0x65,
    0x2b, 0x55, 0x98, 0xe1, 0x37, 0x55, 0x04, 0x8d,
    0x1b, 0x96, 0x76, 0xf9, 0xf9, 0xf4, 0xc7, 0xc6,
    0x37, 0x46, 0x70, 0xc4, 0x1d, 0x3c, 0xd6, 0x56,
  }};

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
