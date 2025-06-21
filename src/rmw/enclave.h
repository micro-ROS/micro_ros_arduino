// Copyright 2025 Sony Group Corporation.
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

#ifndef RMW__ENCLAVE_H_
#define RMW__ENCLAVE_H_

#include "rcutils/allocator.h"

#include "rmw/macros.h"
#include "rmw/ret_types.h"
#include "rmw/visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

/// Perform a deep copy of the enclave options from src into dst using the
/// given allocator.
/**
 * The dst will be left with an owned copy of the enclave whose
 * string values match the src.
 * If successful, src and dst will evaluate as equal.
 *
 * \param[in] src enclave options to be copied.
 * \param[in] allocator to use.
 * \param[out] dst Destination options to use.
 * \return RMW_RET_OK if success.
 * \return RMW_RET_INVALID_ARGUMENT if the src, dst or allocator is null.
 * \return RMW_RET_BAD_ALLOC if allocation fails.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_enclave_options_copy(
  const char * src,
  const rcutils_allocator_t * allocator,
  char ** dst);

/// Destructor for enclave options
/**
 * \param[in] enclave_options to destroy
 * \param[in] allocator to be used for destruction.
 * \return RMW_RET_OK if success.
 * \return RMW_RET_INVALID_ARGUMENT if allocator is invalid
 * or enclave_options is null.
 */
RMW_PUBLIC
rmw_ret_t
rmw_enclave_options_fini(
  char * enclave_options,
  const rcutils_allocator_t * allocator
);
#ifdef __cplusplus
}
#endif

#endif  // RMW__ENCLAVE_H_
