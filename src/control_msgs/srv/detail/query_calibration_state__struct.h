// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:srv/QueryCalibrationState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/srv/query_calibration_state.h"


#ifndef CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__STRUCT_H_
#define CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


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
