// Copyright 2025 Open Source Robotics Foundation, Inc.
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

/// \file

#ifndef RCUTILS__JOIN_H_
#define RCUTILS__JOIN_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "rcutils/allocator.h"
#include "rcutils/types.h"
#include "rcutils/visibility_control.h"

/// Concatenate members of an array into a single string
/**
 * \param[in] string_array with the tokens to concatenate
 * \param[in] separator string to be inserted between tokens
 * \param[in] allocator for allocating new memory for the output string
 * \return concatenated string, or
 * \return `NULL` if there is an error.
 */
RCUTILS_PUBLIC
char *
rcutils_join(
  const rcutils_string_array_t * string_array,
  const char * separator,
  rcutils_allocator_t allocator);

#ifdef __cplusplus
}
#endif

#endif  // RCUTILS__JOIN_H_
