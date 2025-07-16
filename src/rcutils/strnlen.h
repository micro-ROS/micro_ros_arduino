// Copyright 2023 Open Source Robotics Foundation, Inc.
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

#ifndef RCUTILS__STRNLEN_H_
#define RCUTILS__STRNLEN_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "rcutils/macros.h"
#include "rcutils/visibility_control.h"

/// Determine the length of a fixed-size string
/**
 * \param[in] s Null terminated string to find the length of.
 * \param[in] maxlen Maximum length to look to find the trailing \0.
 * \return The length of the string if it is less than maxlen, or
 * \return maxlen if there is no \0 among the first maxlen characters.
 */
RCUTILS_PUBLIC
RCUTILS_WARN_UNUSED
size_t
rcutils_strnlen(const char * s, size_t maxlen);

#ifdef __cplusplus
}
#endif

#endif  // RCUTILS__STRNLEN_H_
