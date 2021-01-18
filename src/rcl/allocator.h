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

#ifndef RCL__ALLOCATOR_H_
#define RCL__ALLOCATOR_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "rcutils/allocator.h"

typedef rcutils_allocator_t rcl_allocator_t;

#define rcl_get_default_allocator rcutils_get_default_allocator

#define rcl_reallocf rcutils_reallocf

#define RCL_CHECK_ALLOCATOR(allocator, fail_statement) \
  RCUTILS_CHECK_ALLOCATOR(allocator, fail_statement)

#define RCL_CHECK_ALLOCATOR_WITH_MSG(allocator, msg, fail_statement) \
  RCUTILS_CHECK_ALLOCATOR_WITH_MSG(allocator, msg, fail_statement)

#ifdef __cplusplus
}
#endif

#endif  // RCL__ALLOCATOR_H_
