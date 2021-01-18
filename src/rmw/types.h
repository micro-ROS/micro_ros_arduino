// Copyright 2014-2017 Open Source Robotics Foundation, Inc.
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

#ifndef RMW__TYPES_H_
#define RMW__TYPES_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// map rcutils specific log levels to rmw speicfic type
#include <rcutils/logging.h>

#include "rmw/init.h"
#include "rmw/init_options.h"
#include "rmw/ret_types.h"
#include "rmw/security_options.h"
#include "rmw/serialized_message.h"
#include "rmw/visibility_control.h"

// 24 bytes is the most memory needed to represent the GID by any current
// implementation. It may need to be increased in the future.
#define RMW_GID_STORAGE_SIZE 24u

/// Structure which encapsulates an rmw node
typedef struct RMW_PUBLIC_TYPE rmw_node_t
{
  /// Name of the rmw implementation
  const char * implementation_identifier;

  /// Type erased pointer to this node's data
  void * data;

  /// A concise name of this rmw node for identification
  const char * name;

  /// The namespace of this rmw node
  const char * namespace_;

  /// Context information about node's init specific information
  rmw_context_t * context;
} rmw_node_t;

/// Endpoint enumeration type
typedef enum RMW_PUBLIC_TYPE rmw_endpoint_type_t
{
  /// Endpoint type has not yet been set
  RMW_ENDPOINT_INVALID = 0,

  /// Creates and publishes messages to the ROS topic
  RMW_ENDPOINT_PUBLISHER,

  /// Listens for and receives messages from a topic
  RMW_ENDPOINT_SUBSCRIPTION
} rmw_endpoint_type_t;

/// Options that can be used to configure the creation of a publisher in rmw.
typedef struct RMW_PUBLIC_TYPE rmw_publisher_options_t
{
  /// Used to pass rmw implementation specific resources during publisher creation.
  /**
   * This field is type erased (rather than forward declared) because it will
   * usually be a non-owned reference to an language specific object, e.g.
   * C++ it may be a polymorphic class that only the rmw implementation can use.
   *
   * The resource pointed to here needs to outlive this options structure, and
   * any rmw_publisher objects that are created using it, as they copy this
   * structure and may use this payload throughout their lifetime.
   */
  void * rmw_specific_publisher_payload;
} rmw_publisher_options_t;

/// Structure which encapsulates an rmw publisher
typedef struct RMW_PUBLIC_TYPE rmw_publisher_t
{
  /// Name of the rmw implementation
  const char * implementation_identifier;

  /// Type erased pointer to this publisher's data
  void * data;

  /// The name of the ROS topic this publisher publishes to
  const char * topic_name;

  /// Publisher options.
  /**
   * The options structure passed to rmw_create_publisher() should be
   * assigned to this field by the rmw implementation.
   * The fields should not be modified after creation, but
   * the contents of the options structure may or may not be const, i.e.
   * shallow const-ness.
   * This field is not marked const to avoid any const casting during setup.
   */
  rmw_publisher_options_t options;

  /// Indicate whether this publisher supports loaning messages
  bool can_loan_messages;
} rmw_publisher_t;

/// Options that can be used to configure the creation of a subscription in rmw.
typedef struct RMW_PUBLIC_TYPE rmw_subscription_options_t
{
  /// Used to pass rmw implementation specific resources during subscription creation.
  /**
   * All the same details and restrictions of this field in
   * rmw_publisher_options_t apply to this struct as well.
   *
   * \sa rmw_publisher_options_t.rmw_specific_publisher_payload
   */
  void * rmw_specific_subscription_payload;

  /// If true then the middleware should not deliver data from local publishers.
  /**
   * This setting is most often used when data should only be received from
   * remote nodes, especially to avoid "double delivery" when both intra- and
   * inter- process communication is taking place.
   *
   * \TODO(wjwwood): nail this down when participant mapping is sorted out.
   *   See: https://github.com/ros2/design/pull/250
   *
   * The definition of local is somewhat vague at the moment.
   * Right now it means local to the node, and that definition works best, but
   * may become more complicated when/if participants map to a context instead.
   */
  bool ignore_local_publications;
} rmw_subscription_options_t;

typedef struct RMW_PUBLIC_TYPE rmw_subscription_t
{
  /// Name of the rmw implementation
  const char * implementation_identifier;

  /// Type erased pointer to this subscription
  void * data;

  /// Name of the ros topic this subscription listens to
  const char * topic_name;

  /// Subscription options.
  /**
   * The options structure passed to rmw_create_subscription() should be
   * assigned to this field by the rmw implementation.
   * The fields should not be modified after creation, but
   * the contents of the options structure may or may not be const, i.e.
   * shallow const-ness.
   * This field is not marked const to avoid any const casting during setup.
   */
  rmw_subscription_options_t options;

  /// Indicates whether this subscription can loan messages
  bool can_loan_messages;
} rmw_subscription_t;

/// A handle to an rmw service
typedef struct RMW_PUBLIC_TYPE rmw_service_t
{
  /// The name of the rmw implementation
  const char * implementation_identifier;

  /// Type erased pointer to this service
  void * data;

  /// The name of this service as exposed to the ros graph
  const char * service_name;
} rmw_service_t;

/// A handle to an rmw service client
typedef struct RMW_PUBLIC_TYPE rmw_client_t
{
  /// The name of the rmw implementation
  const char * implementation_identifier;

  /// Type erased pointer to this service client
  void * data;

  /// The name of this service as exposed to the ros graph
  const char * service_name;
} rmw_client_t;

/// Handle for an rmw guard condition
typedef struct RMW_PUBLIC_TYPE rmw_guard_condition_t
{
  /// The name of the rmw implementation
  const char * implementation_identifier;

  /// Type erased pointer to this guard condition
  void * data;

  /// rmw context associated with this guard condition
  rmw_context_t * context;
} rmw_guard_condition_t;

/// Allocation of memory for an rmw publisher
typedef struct RMW_PUBLIC_TYPE rmw_publisher_allocation_t
{
  /// The name of the rmw implementation
  const char * implementation_identifier;

  /// Type erased pointer to this allocation
  void * data;
} rmw_publisher_allocation_t;

/// Allocation of memory for an rmw subscription
typedef struct RMW_PUBLIC_TYPE rmw_subscription_allocation_t
{
  /// The name of the rmw implementation
  const char * implementation_identifier;

  /// Type erased pointer to this allocation
  void * data;
} rmw_subscription_allocation_t;

/// Array of subscriber handles.
/**
 * An array of void * pointers representing type-erased middleware-specific subscriptions.
 * The number of non-null entries may be smaller than the allocated size of the array.
 * The number of subscriptions represented may be smaller than the allocated size of the array.
 * The creator of this struct is responsible for allocating and deallocating the array.
 */
typedef struct RMW_PUBLIC_TYPE rmw_subscriptions_t
{
  /// The number of subscribers represented by the array.
  size_t subscriber_count;
  /// Pointer to an array of void * pointers of subscriptions.
  void ** subscribers;
} rmw_subscriptions_t;

/// Array of service handles.
/**
 * An array of void * pointers representing type-erased middleware-specific services.
 * The number of non-null entries may be smaller than the allocated size of the array.
 * The number of services represented may be smaller than the allocated size of the array.
 * The creator of this struct is responsible for allocating and deallocating the array.
 */
typedef struct RMW_PUBLIC_TYPE rmw_services_t
{
  /// The number of services represented by the array.
  size_t service_count;
  /// Pointer to an array of void * pointers of services.
  void ** services;
} rmw_services_t;

/// Array of client handles.
/**
 * An array of void * pointers representing type-erased middleware-specific clients.
 * The number of non-null entries may be smaller than the allocated size of the array.
 * The number of clients represented may be smaller than the allocated size of the array.
 * The creator of this struct is responsible for allocating and deallocating the array.
 */
typedef struct RMW_PUBLIC_TYPE rmw_clients_t
{
  /// The number of clients represented by the array.
  size_t client_count;
  /// Pointer to an array of void * pointers of clients.
  void ** clients;
} rmw_clients_t;

typedef struct RMW_PUBLIC_TYPE rmw_events_t
{
  /// The number of events represented by the array.
  size_t event_count;
  /// Pointer to an array of void * pointers of events.
  void ** events;
} rmw_events_t;

/// Array of guard condition handles.
/**
 * An array of void * pointers representing type-erased middleware-specific guard conditions.
 * The number of non-null entries may be smaller than the allocated size of the array.
 * The number of guard conditions represented may be smaller than the allocated size of the array.
 * The creator of this struct is responsible for allocating and deallocating the array.
 */
typedef struct RMW_PUBLIC_TYPE rmw_guard_conditions_t
{
  /// The number of guard conditions represented by the array.
  size_t guard_condition_count;
  /// Pointer to an array of void * pointers of guard conditions.
  void ** guard_conditions;
} rmw_guard_conditions_t;

/// Container for guard conditions to be waited on
typedef struct RMW_PUBLIC_TYPE rmw_wait_set_t
{
  /// The name of the rmw implementation
  const char * implementation_identifier;

  /// The guard condition to be waited on
  rmw_guard_conditions_t * guard_conditions;

  /// Type erased pointer to this wait set's data
  void * data;
} rmw_wait_set_t;

/// An rmw service request identifier
typedef struct RMW_PUBLIC_TYPE rmw_request_id_t
{
  /// The guid of the writer associated with this request
  int8_t writer_guid[16];

  /// Sequence number of this service
  int64_t sequence_number;
} rmw_request_id_t;

/// Struct representing a time point for rmw
typedef struct RMW_PUBLIC_TYPE rmw_time_t
{
  /// Seconds since the epoch
  uint64_t sec;

  /// Nanoseconds component of this time point
  uint64_t nsec;
} rmw_time_t;

typedef rcutils_time_point_value_t rmw_time_point_value_t;

/// Meta-data for a service-related take.
typedef struct RMW_PUBLIC_TYPE rmw_service_info_t
{
  rmw_time_point_value_t source_timestamp;
  rmw_time_point_value_t received_timestamp;
  rmw_request_id_t request_id;
} rmw_service_info_t;

enum RMW_PUBLIC_TYPE rmw_qos_reliability_policy_t
{
  /// Implementation specific default
  RMW_QOS_POLICY_RELIABILITY_SYSTEM_DEFAULT,

  /// Guarantee that samples are delivered, may retry multiple times.
  RMW_QOS_POLICY_RELIABILITY_RELIABLE,

  /// Attempt to deliver samples, but some may be lost if the network is not robust
  RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT,

  /// Reliability policy has not yet been set
  RMW_QOS_POLICY_RELIABILITY_UNKNOWN
};

/// QoS history enumerations describing how samples endure
enum RMW_PUBLIC_TYPE rmw_qos_history_policy_t
{
  /// Implementation default for history policy
  RMW_QOS_POLICY_HISTORY_SYSTEM_DEFAULT,

  /// Only store up to a maximum number of samples, dropping oldest once max is exceeded
  RMW_QOS_POLICY_HISTORY_KEEP_LAST,

  /// Store all samples, subject to resource limits
  RMW_QOS_POLICY_HISTORY_KEEP_ALL,

  /// History policy has not yet been set
  RMW_QOS_POLICY_HISTORY_UNKNOWN
};

/// QoS durability enumerations describing how samples persist
enum RMW_PUBLIC_TYPE rmw_qos_durability_policy_t
{
  /// Impplementation specific default
  RMW_QOS_POLICY_DURABILITY_SYSTEM_DEFAULT,

  /// The rmw publisher is responsible for persisting samples for “late-joining” subscribers
  RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL,

  /// Samples are not persistent
  RMW_QOS_POLICY_DURABILITY_VOLATILE,

  /// Durability policy has not yet been set
  RMW_QOS_POLICY_DURABILITY_UNKNOWN
};

#define RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_NODE_DEPRECATED_MSG \
  "RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_NODE is deprecated. " \
  "Use RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_TOPIC if manually asserted liveliness is needed."

#ifndef _WIN32
# define RMW_DECLARE_DEPRECATED(name, msg) name __attribute__((deprecated(msg)))
#else
# define RMW_DECLARE_DEPRECATED(name, msg) name __pragma(deprecated(name))
#endif

/// QoS liveliness enumerations that describe a publisher's reporting policy for its alive status.
/// For a subscriber, these are its requirements for its topic's publishers.
// Suppress syntax errors, as cppcheck does not seem to handle enumerator attributes.
// cppcheck-suppress syntaxError
enum RMW_PUBLIC_TYPE rmw_qos_liveliness_policy_t
{
  /// Implementation specific default
  RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT = 0,

  /// The signal that establishes a Topic is alive comes from the ROS rmw layer.
  RMW_QOS_POLICY_LIVELINESS_AUTOMATIC = 1,

  /// Explicitly asserting node liveliness is required in this case.
  /// This option is deprecated, use RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_TOPIC if your application
  /// requires to assert liveliness manually.
  RMW_DECLARE_DEPRECATED(
    RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_NODE,
    RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_NODE_DEPRECATED_MSG) = 2,

  /// The signal that establishes a Topic is alive is at the Topic level. Only publishing a message
  /// on the Topic or an explicit signal from the application to assert liveliness on the Topic
  /// will mark the Topic as being alive.
  // Using `3` for backwards compatibility.
  RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_TOPIC = 3,

  /// Liveliness policy has not yet been set
  RMW_QOS_POLICY_LIVELINESS_UNKNOWN = 4
};

/// QoS Deadline default, 0s indicates deadline policies are not tracked or enforced
#define RMW_QOS_DEADLINE_DEFAULT {0, 0}

/// QoS Lifespan default, 0s indicate lifespan policies are not tracked or enforced
#define RMW_QOS_LIFESPAN_DEFAULT {0, 0}

/// QoS Liveliness lease duration default, 0s indicate lease durations are not tracked or enforced
#define RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT {0, 0}

/// ROS MiddleWare quality of service profile.
typedef struct RMW_PUBLIC_TYPE rmw_qos_profile_t
{
  enum rmw_qos_history_policy_t history;
  /// Size of the message queue.
  size_t depth;
  /// Reliabiilty QoS policy setting
  enum rmw_qos_reliability_policy_t reliability;
  /// Durability QoS policy setting
  enum rmw_qos_durability_policy_t durability;
  /// The period at which messages are expected to be sent/received
  struct rmw_time_t deadline;
  /// The age at which messages are considered expired and no longer valid
  struct rmw_time_t lifespan;
  /// Liveliness QoS policy setting
  enum rmw_qos_liveliness_policy_t liveliness;
  /// The time within which the RMW node or publisher must show that it is alive
  struct rmw_time_t liveliness_lease_duration;

  /// If true, any ROS specific namespacing conventions will be circumvented.
  /**
   * In the case of DDS and topics, for example, this means the typical
   * ROS specific prefix of `rt` would not be applied as described here:
   *
   *   http://design.ros2.org/articles/topic_and_service_names.html#ros-specific-namespace-prefix
   *
   * This might be useful when trying to directly connect a native DDS topic
   * with a ROS 2 topic.
   */
  bool avoid_ros_namespace_conventions;
} rmw_qos_profile_t;

/// ROS graph ID of the topic
typedef struct RMW_PUBLIC_TYPE rmw_gid_t
{
  /// Name of the rmw implementation
  const char * implementation_identifier;

  /// Bype data Gid value
  uint8_t data[RMW_GID_STORAGE_SIZE];
} rmw_gid_t;

/// Information describing an rmw message
typedef struct RMW_PUBLIC_TYPE rmw_message_info_t
{
  rmw_time_point_value_t source_timestamp;
  rmw_time_point_value_t received_timestamp;
  rmw_gid_t publisher_gid;

  /// Whether this message is from intra_process communication or not
  bool from_intra_process;
} rmw_message_info_t;

/// Get zero initialized mesage info.
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_message_info_t
rmw_get_zero_initialized_message_info(void);

/// Default size of the rmw queue when history is set to RMW_QOS_POLICY_HISTORY_KEEP_LAST,
/// 0 indicates it is currently not set
enum {RMW_QOS_POLICY_DEPTH_SYSTEM_DEFAULT = 0};

/// Type mapping of rcutils log severity types to rmw specific types.
typedef enum RMW_PUBLIC_TYPE
{
  /// Debug log severity, for pedantic messaging
  RMW_LOG_SEVERITY_DEBUG = RCUTILS_LOG_SEVERITY_DEBUG,

  /// Informational log severity, for reporting expected but not overwhelming information
  RMW_LOG_SEVERITY_INFO = RCUTILS_LOG_SEVERITY_INFO,

  /// Warning log severity, for reporting recoverable issues
  RMW_LOG_SEVERITY_WARN = RCUTILS_LOG_SEVERITY_WARN,

  /// Error log severity, for reporting uncoverable issues
  RMW_LOG_SEVERITY_ERROR = RCUTILS_LOG_SEVERITY_ERROR,

  /// Fatal log severity, for reporting issue causing imminent shutdown
  RMW_LOG_SEVERITY_FATAL = RCUTILS_LOG_SEVERITY_FATAL
} rmw_log_severity_t;

/// QoS Liveliness Changed information provided by a subscription.
typedef struct RMW_PUBLIC_TYPE rmw_liveliness_changed_status_t
{
  /**
   * The total number of currently active Publishers which publish to the topic associated with
   * the Subscription.
   * This count increases when a newly matched Publisher asserts its liveliness for the first time
   * or when a Publisher previously considered to be not alive reasserts its liveliness.
   * The count decreases when a Publisher considered alive fails to assert its liveliness and
   * becomes not alive, whether because it was deleted normally or for some other reason.
   */
  int32_t alive_count;
  /**
   * The total count of current Publishers which publish to the topic associated with the
   * Subscription that are no longer asserting their liveliness.
   * This count increases when a Publisher considered alive fails to assert its liveliness and
   * becomes not alive for some reason other than the normal deletion of that Publisher.
   * It decreases when a previously not alive Publisher either reasserts its liveliness or is
   * deleted normally.
   */
  int32_t not_alive_count;
  /// The change in the alive_count since the status was last read.
  int32_t alive_count_change;
  /// The change in the not_alive_count since the status was last read.
  int32_t not_alive_count_change;
} rmw_liveliness_changed_status_t;

/// QoS Requested Deadline Missed information provided by a subscription.
typedef struct RMW_PUBLIC_TYPE rmw_requested_deadline_missed_status_t
{
  /**
   * Lifetime cumulative number of missed deadlines detected for any instance read by the
   * subscription.
   * Missed deadlines accumulate; that is, each deadline period the total_count will be incremented
   * by one for each instance for which data was not received.
   */
  int32_t total_count;
  /// The incremental number of deadlines detected since the status was read.
  int32_t total_count_change;
} rmw_requested_deadline_missed_status_t;

/// QoS Liveliness Lost information provided by a publisher.
typedef struct RMW_PUBLIC_TYPE rmw_liveliness_lost_status_t
{
  /**
   * Lifetime cumulative number of times that a previously-alive Publisher became not alive due to
   * a failure to actively signal its liveliness within its offered liveliness period.
   * This count does not change when an already not alive Publisher simply remains not alive for
   * another liveliness period.
   */
  int32_t total_count;
  /// The change in total_count since the last time the status was last read.
  int32_t total_count_change;
} rmw_liveliness_lost_status_t;

/// QoS Deadline Missed information provided by a publisher.
typedef struct RMW_PUBLIC_TYPE rmw_offered_deadline_missed_status_t
{
  /**
   * Lifetime cumulative number of offered deadline periods elapsed during which a Publisher failed
   * to provide data.
   * Missed deadlines accumulate; that is, each deadline period the total_count will be incremented
   * by one.
   */
  int32_t total_count;
  /// The change in total_count since the last time the status was last read.
  int32_t total_count_change;
} rmw_offered_deadline_missed_status_t;

#ifdef __cplusplus
}
#endif

#endif  // RMW__TYPES_H_
