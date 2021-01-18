// Copyright 2015 Open Source Robotics Foundation, Inc.
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

#ifndef RCL__SUBSCRIPTION_H_
#define RCL__SUBSCRIPTION_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

#include "rcl/macros.h"
#include "rcl/node.h"
#include "rcl/visibility_control.h"

#include "rmw/message_sequence.h"

/// Internal rcl implementation struct.
struct rcl_subscription_impl_t;

/// Structure which encapsulates a ROS Subscription.
typedef struct rcl_subscription_t
{
  /// Pointer to the subscription implementation
  struct rcl_subscription_impl_t * impl;
} rcl_subscription_t;

/// Options available for a rcl subscription.
typedef struct rcl_subscription_options_t
{
  /// Middleware quality of service settings for the subscription.
  rmw_qos_profile_t qos;
  /// Custom allocator for the subscription, used for incidental allocations.
  /** For default behavior (malloc/free), see: rcl_get_default_allocator() */
  rcl_allocator_t allocator;
  /// rmw specific subscription options, e.g. the rmw implementation specific payload.
  rmw_subscription_options_t rmw_subscription_options;
} rcl_subscription_options_t;

/// Return a rcl_subscription_t struct with members set to `NULL`.
/**
 * Should be called to get a null rcl_subscription_t before passing to
 * rcl_subscription_init().
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_subscription_t
rcl_get_zero_initialized_subscription(void);

/// Initialize a ROS subscription.
/**
 * After calling this function on a rcl_subscription_t, it can be used to take
 * messages of the given type to the given topic using rcl_take().
 *
 * The given rcl_node_t must be valid and the resulting rcl_subscription_t is
 * only valid as long as the given rcl_node_t remains valid.
 *
 * The rosidl_message_type_support_t is obtained on a per .msg type basis.
 * When the user defines a ROS message, code is generated which provides the
 * required rosidl_message_type_support_t object.
 * This object can be obtained using a language appropriate mechanism.
 * \todo TODO(wjwwood) write these instructions once and link to it instead
 * For C a macro can be used (for example `std_msgs/String`):
 *
 * ```c
 * #include <rosidl_runtime_c/message_type_support_struct.h>
 * #include <std_msgs/msg/string.h>
 * const rosidl_message_type_support_t * string_ts =
 *   ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String);
 * ```
 *
 * For C++ a template function is used:
 *
 * ```cpp
 * #include <rosidl_runtime_cpp/message_type_support.hpp>
 * #include <std_msgs/msgs/string.hpp>
 * using rosidl_typesupport_cpp::get_message_type_support_handle;
 * const rosidl_message_type_support_t * string_ts =
 *   get_message_type_support_handle<std_msgs::msg::String>();
 * ```
 *
 * The rosidl_message_type_support_t object contains message type specific
 * information used to publish messages.
 *
 * The topic name must be a c string which follows the topic and service name
 * format rules for unexpanded names, also known as non-fully qualified names:
 *
 * \see rcl_expand_topic_name
 *
 * The options struct allows the user to set the quality of service settings as
 * well as a custom allocator which is used when (de)initializing the
 * subscription to allocate space for incidental things, e.g. the topic
 * name string.
 *
 * Expected usage (for C messages):
 *
 * ```c
 * #include <rcl/rcl.h>
 * #include <rosidl_runtime_c/message_type_support_struct.h>
 * #include <std_msgs/msg/string.h>
 *
 * rcl_node_t node = rcl_get_zero_initialized_node();
 * rcl_node_options_t node_ops = rcl_node_get_default_options();
 * rcl_ret_t ret = rcl_node_init(&node, "node_name", "/my_namespace", &node_ops);
 * // ... error handling
 * const rosidl_message_type_support_t * ts =
 *   ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String);
 * rcl_subscription_t subscription = rcl_get_zero_initialized_subscription();
 * rcl_subscription_options_t subscription_ops = rcl_subscription_get_default_options();
 * ret = rcl_subscription_init(&subscription, &node, ts, "chatter", &subscription_ops);
 * // ... error handling, and when finished deinitialization
 * ret = rcl_subscription_fini(&subscription, &node);
 * // ... error handling for rcl_subscription_fini()
 * ret = rcl_node_fini(&node);
 * // ... error handling for rcl_node_fini()
 * ```
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Yes
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[out] subscription preallocated subscription structure
 * \param[in] node valid rcl node handle
 * \param[in] type_support type support object for the topic's type
 * \param[in] topic_name the name of the topic
 * \param[in] options subscription options, including quality of service settings
 * \return `RCL_RET_OK` if subscription was initialized successfully, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ALREADY_INIT` if the subcription is already initialized, or
 * \return `RCL_RET_NODE_INVALID` if the node is invalid, or
 * \return `RCL_RET_BAD_ALLOC` if allocating memory failed, or
 * \return `RCL_RET_TOPIC_NAME_INVALID` if the given topic name is invalid, or
 * \return `RCL_RET_ERROR` if an unspecified error occurs.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_subscription_init(
  rcl_subscription_t * subscription,
  const rcl_node_t * node,
  const rosidl_message_type_support_t * type_support,
  const char * topic_name,
  const rcl_subscription_options_t * options
);

/// Finalize a rcl_subscription_t.
/**
 * After calling, the node will no longer be subscribed on this topic
 * (assuming this is the only subscription on this topic in this node).
 *
 * After calling, calls to rcl_wait and rcl_take will fail when using this
 * subscription.
 * Additioanlly rcl_wait will be interrupted if currently blocking.
 * However, the given node handle is still valid.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Yes
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[inout] subscription handle to the subscription to be deinitialized
 * \param[in] node a valid (not finalized) handle to the node used to create the subscription
 * \return `RCL_RET_OK` if subscription was deinitialized successfully, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_SUBSCRIPTION_INVALID` if the subscription is invalid, or
 * \return `RCL_RET_NODE_INVALID` if the node is invalid, or
 * \return `RCL_RET_ERROR` if an unspecified error occurs.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_subscription_fini(rcl_subscription_t * subscription, rcl_node_t * node);

/// Return the default subscription options in a rcl_subscription_options_t.
/**
 * The defaults are:
 *
 * - qos = rmw_qos_profile_default
 * - allocator = rcl_get_default_allocator()
 * - rmw_subscription_options = rmw_get_default_subscription_options();
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_subscription_options_t
rcl_subscription_get_default_options(void);

/// Take a ROS message from a topic using a rcl subscription.
/**
 * It is the job of the caller to ensure that the type of the ros_message
 * argument and the type associated with the subscription, via the type
 * support, match.
 * Passing a different type to rcl_take produces undefined behavior and cannot
 * be checked by this function and therefore no deliberate error will occur.
 *
 * TODO(wjwwood) blocking of take?
 * TODO(wjwwood) pre-, during-, and post-conditions for message ownership?
 * TODO(wjwwood) is rcl_take thread-safe?
 * TODO(wjwwood) Should there be an rcl_message_info_t?
 *
 * The ros_message pointer should point to an already allocated ROS message
 * struct of the correct type, into which the taken ROS message will be copied
 * if one is available.
 * If taken is false after calling, then the ROS message will be unmodified.
 *
 * The taken boolean may be false even if a wait set reports that the
 * subscription was ready to be taken from in some cases, e.g. when the
 * state of the subscription changes it may cause the wait set to wake up
 * but subsequent takes to fail to take anything.
 *
 * If allocation is required when taking the message, e.g. if space needs to
 * be allocated for a dynamically sized array in the target message, then the
 * allocator given in the subscription options is used.
 *
 * The rmw_message_info struct contains meta information about this particular
 * message instance, like what the GUID of the publisher which published it
 * originally or whether or not the message received from within the same
 * process.
 * The message_info argument should be an already allocated rmw_message_info_t
 * structure.
 * Passing `NULL` for message_info will result in the argument being ignored.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Maybe [1]
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 * <i>[1] only if required when filling the message, avoided for fixed sizes</i>
 *
 * \param[in] subscription the handle to the subscription from which to take
 * \param[inout] ros_message type-erased ptr to a allocated ROS message
 * \param[out] message_info rmw struct which contains meta-data for the message
 * \param[in] allocation structure pointer used for memory preallocation (may be NULL)
 * \return `RCL_RET_OK` if the message was taken, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_SUBSCRIPTION_INVALID` if the subscription is invalid, or
 * \return `RCL_RET_BAD_ALLOC` if allocating memory failed, or
 * \return `RCL_RET_SUBSCRIPTION_TAKE_FAILED` if take failed but no error
 *         occurred in the middleware, or
 * \return `RCL_RET_ERROR` if an unspecified error occurs.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_take(
  const rcl_subscription_t * subscription,
  void * ros_message,
  rmw_message_info_t * message_info,
  rmw_subscription_allocation_t * allocation
);

/// Take a sequence of messages from a topic using a rcl subscription.
/**
 * In contrast to `rcl_take`, this function can take multiple messages at
 * the same time.
 * It is the job of the caller to ensure that the type of the message_sequence
 * argument and the type associated with the subscription, via the type
 * support, match.
 *
 * The message_sequence pointer should point to an already allocated sequence
 * of ROS messages of the correct type, into which the taken ROS messages will
 * be copied if messages are available.
 * The message_sequence `size` member will be set to the number of messages
 * correctly taken.
 *
 * The rmw_message_info_sequence struct contains meta information about the
 * corresponding message instance index.
 * The message_info_sequence argument should be an already allocated
 * rmw_message_info_sequence_t structure.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Maybe [1]
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 * <i>[1] only if storage in the serialized_message is insufficient</i>
 *
 * \param[in] subscription the handle to the subscription from which to take.
 * \param[in] count number of messages to attempt to take.
 * \param[inout] message_sequence pointer to a (pre-allocated) message sequence.
 * \param[inout] message_info_sequence pointer to a (pre-allocated) message info sequence.
 * \param[in] allocation structure pointer used for memory preallocation (may be NULL)
 * \return `RCL_RET_OK` if one or more messages was taken, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_SUBSCRIPTION_INVALID` if the subscription is invalid, or
 * \return `RCL_RET_BAD_ALLOC` if allocating memory failed, or
 * \return `RCL_RET_SUBSCRIPTION_TAKE_FAILED` if take failed but no error
 *         occurred in the middleware, or
 * \return `RCL_RET_ERROR` if an unspecified error occurs.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_take_sequence(
  const rcl_subscription_t * subscription,
  size_t count,
  rmw_message_sequence_t * message_sequence,
  rmw_message_info_sequence_t * message_info_sequence,
  rmw_subscription_allocation_t * allocation
);

/// Take a serialized raw message from a topic using a rcl subscription.
/**
 * In contrast to `rcl_take`, this function stores the taken message in
 * its raw binary representation.
 * It is the job of the caller to ensure that the type associate with the subscription
 * matches, and can optionally be deserialized into its ROS message via, the correct
 * type support.
 * If the `serialized_message` parameter contains enough preallocated memory, the incoming
 * message can be taken without any additional memory allocation.
 * If not, the function will dynamically allocate enough memory for the message.
 * Passing a different type to rcl_take produces undefined behavior and cannot
 * be checked by this function and therefore no deliberate error will occur.
 *
 * Apart from the differences above, this function behaves like `rcl_take`.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Maybe [1]
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 * <i>[1] only if storage in the serialized_message is insufficient</i>
 *
 * \param[in] subscription the handle to the subscription from which to take
 * \param[inout] serialized_message pointer to a (pre-allocated) serialized message.
 * \param[out] message_info rmw struct which contains meta-data for the message
 * \param[in] allocation structure pointer used for memory preallocation (may be NULL)
 * \return `RCL_RET_OK` if the message was published, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_SUBSCRIPTION_INVALID` if the subscription is invalid, or
 * \return `RCL_RET_BAD_ALLOC` if allocating memory failed, or
 * \return `RCL_RET_SUBSCRIPTION_TAKE_FAILED` if take failed but no error
 *         occurred in the middleware, or
 * \return `RCL_RET_ERROR` if an unspecified error occurs.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_take_serialized_message(
  const rcl_subscription_t * subscription,
  rcl_serialized_message_t * serialized_message,
  rmw_message_info_t * message_info,
  rmw_subscription_allocation_t * allocation);

/// Take a loaned message from a topic using a rcl subscription.
/**
 * Depending on the middleware, incoming messages can be loaned to the user's callback
 * without further copying.
 * The implicit contract here is that the middleware owns the memory allocated for this message.
 * The user must not destroy the message, but rather has to return it with a call to
 * \sa rcl_return_loaned_message to the middleware.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[in] subscription the handle to the subscription from which to take
 * \param[inout] loaned_message a pointer to the loaned messages.
 * \param[out] message_info rmw struct which contains meta-data for the message.
 * \param[in] allocation structure pointer used for memory preallocation (may be NULL)
 * \return `RCL_RET_OK` if the loaned message sequence was taken, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_SUBSCRIPTION_INVALID` if the subscription is invalid, or
 * \return `RCL_RET_BAD_ALLOC` if allocating memory failed, or
 * \return `RCL_RET_SUBSCRIPTION_TAKE_FAILED` if take failed but no error
 *         occurred in the middleware, or
 * \return `RCL_RET_UNIMPLEMENTED` if the middleware does not support that feature, or
 * \return `RCL_RET_ERROR` if an unspecified error occurs.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_take_loaned_message(
  const rcl_subscription_t * subscription,
  void ** loaned_message,
  rmw_message_info_t * message_info,
  rmw_subscription_allocation_t * allocation);

/// Return a loaned message from a topic using a rcl subscription.
/**
 * If a loaned message was previously obtained from the middleware with a call to
 * \sa rcl_take_loaned_message, this message has to be returned to indicate to the middleware
 * that the user no longer needs that memory.
 * The user must not delete the message.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[in] subscription the handle to the subscription from which to take
 * \param[in] loaned_message a pointer to the loaned messages.
 * \return `RCL_RET_OK` if the message was published, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_SUBSCRIPTION_INVALID` if the subscription is invalid, or
 * \return `RCL_RET_UNIMPLEMENTED` if the middleware does not support that feature, or
 * \return `RCL_RET_ERROR` if an unspecified error occurs.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_return_loaned_message_from_subscription(
  const rcl_subscription_t * subscription,
  void * loaned_message);

/// Get the topic name for the subscription.
/**
 * This function returns the subscription's internal topic name string.
 * This function can fail, and therefore return `NULL`, if the:
 *   - subscription is `NULL`
 *   - subscription is invalid (never called init, called fini, or invalid)
 *
 * The returned string is only valid as long as the subscription is valid.
 * The value of the string may change if the topic name changes, and therefore
 * copying the string is recommended if this is a concern.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[in] subscription the pointer to the subscription
 * \return name string if successful, otherwise `NULL`
 */
RCL_PUBLIC
RCL_WARN_UNUSED
const char *
rcl_subscription_get_topic_name(const rcl_subscription_t * subscription);

/// Return the rcl subscription options.
/**
 * This function returns the subscription's internal options struct.
 * This function can fail, and therefore return `NULL`, if the:
 *   - subscription is `NULL`
 *   - subscription is invalid (never called init, called fini, or invalid)
 *
 * The returned struct is only valid as long as the subscription is valid.
 * The values in the struct may change if the subscription's options change,
 * and therefore copying the struct is recommended if this is a concern.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[in] subscription pointer to the subscription
 * \return options struct if successful, otherwise `NULL`
 */
RCL_PUBLIC
RCL_WARN_UNUSED
const rcl_subscription_options_t *
rcl_subscription_get_options(const rcl_subscription_t * subscription);

/// Return the rmw subscription handle.
/**
 * The handle returned is a pointer to the internally held rmw handle.
 * This function can fail, and therefore return `NULL`, if the:
 *   - subscription is `NULL`
 *   - subscription is invalid (never called init, called fini, or invalid)
 *
 * The returned handle is made invalid if the subscription is finalized or if
 * rcl_shutdown() is called.
 * The returned handle is not guaranteed to be valid for the life time of the
 * subscription as it may be finalized and recreated itself.
 * Therefore it is recommended to get the handle from the subscription using
 * this function each time it is needed and avoid use of the handle
 * concurrently with functions that might change it.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[in] subscription pointer to the rcl subscription
 * \return rmw subscription handle if successful, otherwise `NULL`
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rmw_subscription_t *
rcl_subscription_get_rmw_handle(const rcl_subscription_t * subscription);

/// Check that the subscription is valid.
/**
 * The bool returned is `false` if `subscription` is invalid.
 * The bool returned is `true` otherwise.
 * In the case where `false` is to be returned, an error message is set.
 * This function cannot fail.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[in] subscription pointer to the rcl subscription
 * \return `true` if `subscription` is valid, otherwise `false`
 */
RCL_PUBLIC
bool
rcl_subscription_is_valid(const rcl_subscription_t * subscription);

/// Get the number of publishers matched to a subscription.
/**
 * Used to get the internal count of publishers matched to a subscription.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | Yes
 * Uses Atomics       | Maybe [1]
 * Lock-Free          | Maybe [1]
 * <i>[1] only if the underlying rmw doesn't make use of this feature </i>
 *
 * \param[in] subscription pointer to the rcl subscription
 * \param[out] publisher_count number of matched publishers
 * \return `RCL_RET_OK` if the count was retrieved, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_SUBSCRIPTION_INVALID` if the subscription is invalid, or
 * \return `RCL_RET_ERROR` if an unspecified error occurs.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rmw_ret_t
rcl_subscription_get_publisher_count(
  const rcl_subscription_t * subscription,
  size_t * publisher_count);

/// Get the actual qos settings of the subscription.
/**
 * Used to get the actual qos settings of the subscription.
 * The actual configuration applied when using RMW_*_SYSTEM_DEFAULT
 * can only be resolved after the creation of the subscription, and it
 * depends on the underlying rmw implementation.
 * If the underlying setting in use can't be represented in ROS terms,
 * it will be set to RMW_*_UNKNOWN.
 * The returned struct is only valid as long as the rcl_subscription_t is valid.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | Yes
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[in] subscription pointer to the rcl subscription
 * \return qos struct if successful, otherwise `NULL`
 */
RCL_PUBLIC
RCL_WARN_UNUSED
const rmw_qos_profile_t *
rcl_subscription_get_actual_qos(const rcl_subscription_t * subscription);

/// Check if subscription instance can loan messages.
/**
 * Depending on the middleware and the message type, this will return true if the middleware
 * can allocate a ROS message instance.
 */
RCL_PUBLIC
bool
rcl_subscription_can_loan_messages(const rcl_subscription_t * subscription);

#ifdef __cplusplus
}
#endif

#endif  // RCL__SUBSCRIPTION_H_
