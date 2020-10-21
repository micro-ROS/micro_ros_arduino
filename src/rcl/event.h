// Copyright 2019 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RCL__EVENT_H_
#define RCL__EVENT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "rcl/client.h"
#include "rcl/macros.h"
#include "rcl/publisher.h"
#include "rcl/service.h"
#include "rcl/subscription.h"
#include "rcl/visibility_control.h"

typedef enum rcl_publisher_event_type_t
{
  RCL_PUBLISHER_OFFERED_DEADLINE_MISSED,
  RCL_PUBLISHER_LIVELINESS_LOST,
  RCL_PUBLISHER_OFFERED_INCOMPATIBLE_QOS,
} rcl_publisher_event_type_t;

typedef enum rcl_subscription_event_type_t
{
  RCL_SUBSCRIPTION_REQUESTED_DEADLINE_MISSED,
  RCL_SUBSCRIPTION_LIVELINESS_CHANGED,
  RCL_SUBSCRIPTION_REQUESTED_INCOMPATIBLE_QOS,
} rcl_subscription_event_type_t;

/// rmw struct.
typedef struct rmw_event_t rmw_event_t;

/// Internal rcl implementation struct.
struct rcl_event_impl_t;

/// Structure which encapsulates a ROS QoS event handle.
typedef struct rcl_event_t
{
  /// Pointer to the event implementation
  struct rcl_event_impl_t * impl;
} rcl_event_t;

/// Return a rcl_event_t struct with members set to `NULL`.
/**
 * Should be called to get a null rcl_event_t before passing to
 * rcl_event_init().
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_event_t
rcl_get_zero_initialized_event(void);

/// Initialize an rcl_event_t with a publisher.
/**
 * Fill the rcl_event_t with the publisher and desired event_type.
 *
 * \param[in,out] event pointer to fill
 * \param[in] publisher to get events from
 * \param[in] event_type to listen for
 * \return `RCL_RET_OK` if the rcl_event_t is filled, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_BAD_ALLOC` if allocating memory fails, or
 * \return `RCL_RET_UNSUPPORTED` if event_type is not supported, or
 * \return `RCL_RET_ERROR` if an unspecified error occurs.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_publisher_event_init(
  rcl_event_t * event,
  const rcl_publisher_t * publisher,
  const rcl_publisher_event_type_t event_type);

/// Initialize an rcl_event_t with a subscription.
/**
 * Fill the rcl_event_t with the subscription and desired event_type.
 *
 * \param[in,out] event pointer to fill
 * \param[in] subscription to get events from
 * \param[in] event_type to listen for
 * \return `RCL_RET_OK` if the rcl_event_t is filled, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_BAD_ALLOC` if allocating memory fails, or
 * \return `RCL_RET_UNSUPPORTED` if event_type is not supported, or
 * \return `RCL_RET_ERROR` if an unspecified error occurs.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_subscription_event_init(
  rcl_event_t * event,
  const rcl_subscription_t * subscription,
  const rcl_subscription_event_type_t event_type);

// Take event using the event handle.
/**
 * Take an event from the event handle.
 *
 * \param[in] event event object to take from
 * \param[in, out] event_info event info object to write taken data into
 * \return `RCL_RET_OK` if successful, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_BAD_ALLOC` if memory allocation failed, or
 * \return `RCL_RET_EVENT_TAKE_FAILED` if the take event failed, or
 * \return `RCL_RET_ERROR` if an unexpected error occurs.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_take_event(
  const rcl_event_t * event,
  void * event_info);

// Finalize an event.
/**
 * Finalize an event.
 *
 * \param[in] event to finalize
 * \return `RCL_RET_OK` if successful, or
 * \return `RCL_RET_EVENT_INVALID` if event is null, or
 * \return `RCL_RET_ERROR` if an unexpected error occurs.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_event_fini(rcl_event_t * event);

/// Return the rmw event handle.
/**
 * The handle returned is a pointer to the internally held rmw handle.
 * This function can fail, and therefore return `NULL`, if the:
 *   - event is `NULL`
 *   - event is invalid (never called init, called fini, or invalid node)
 *
 * The returned handle is made invalid if the event is finalized or if
 * rcl_shutdown() is called.
 * The returned handle is not guaranteed to be valid for the life time of the
 * event as it may be finalized and recreated itself.
 * Therefore it is recommended to get the handle from the event using
 * this function each time it is needed and avoid use of the handle
 * concurrently with functions that might change it.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Yes
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[in] event pointer to the rcl event
 * \return rmw event handle if successful, otherwise `NULL`
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rmw_event_t *
rcl_event_get_rmw_handle(const rcl_event_t * event);

#ifdef __cplusplus
}
#endif

#endif  // RCL__EVENT_H_
