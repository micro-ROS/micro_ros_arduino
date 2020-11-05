// Copyright 2020 Open Source Robotics Foundation, Inc.
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

#ifndef RCL__RMW_IMPLEMENTATION_IDENTIFIER_CHECK_H_
#define RCL__RMW_IMPLEMENTATION_IDENTIFIER_CHECK_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "rcl/visibility_control.h"

#define RMW_IMPLEMENTATION_ENV_VAR_NAME "RMW_IMPLEMENTATION"
#define RCL_ASSERT_RMW_ID_MATCHES_ENV_VAR_NAME "RCL_ASSERT_RMW_ID_MATCHES"

RCL_PUBLIC
rcl_ret_t rcl_rmw_implementation_identifier_check(void);

#ifdef __cplusplus
}
#endif

#endif  // RCL__RMW_IMPLEMENTATION_IDENTIFIER_CHECK_H_
