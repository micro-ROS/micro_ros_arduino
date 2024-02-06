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

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__STRUCT_H_
