// Copyright 2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#ifndef RMW__INCOMPATIBLE_QOS_EVENTS_STATUSES_H_
#define RMW__INCOMPATIBLE_QOS_EVENTS_STATUSES_H_

#include <stdint.h>

#include "rmw/visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

/// QoS Policy Kinds
typedef enum RMW_PUBLIC_TYPE rmw_qos_policy_kind_t
{
  RMW_QOS_POLICY_INVALID = 1 << 0,
  RMW_QOS_POLICY_DURABILITY = 1 << 1,
  RMW_QOS_POLICY_DEADLINE = 1 << 2,
  RMW_QOS_POLICY_LIVELINESS = 1 << 3,
  RMW_QOS_POLICY_RELIABILITY = 1 << 4,
  RMW_QOS_POLICY_HISTORY = 1 << 5,
  RMW_QOS_POLICY_LIFESPAN = 1 << 6
} rmw_qos_policy_kind_t;

struct RMW_PUBLIC_TYPE rmw_qos_incompatible_event_status_t
{
  /**
   * Total cumulative number of times the concerned subscription discovered a
   * publisher for the same topic with an offered QoS that was incompatible
   * with that requested by the subscription.
   */
  int32_t total_count;
  /**
   * The change in total_count since the last time the status was read.
   */
  int32_t total_count_change;
  /**
   * The Qos Policy Kind of one of the policies that was found to be
   * incompatible the last time an incompatibility was detected.
   */
  rmw_qos_policy_kind_t last_policy_kind;
};

/// Event state for a subscription's 'RMW_EVENT_REQUESTED_QOS_INCOMPATIBLE' events.
typedef struct rmw_qos_incompatible_event_status_t rmw_requested_qos_incompatible_event_status_t;

/// Event state for a publisher's 'RMW_EVENT_OFFERED_QOS_INCOMPATIBLE' events.
typedef struct rmw_qos_incompatible_event_status_t rmw_offered_qos_incompatible_event_status_t;

#ifdef __cplusplus
}
#endif

#endif  // RMW__INCOMPATIBLE_QOS_EVENTS_STATUSES_H_
