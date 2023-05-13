// Copyright 2022 Open Source Robotics Foundation, Inc.
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

#ifndef ROSIDL_DYNAMIC_TYPESUPPORT__UCHAR_H_
#define ROSIDL_DYNAMIC_TYPESUPPORT__UCHAR_H_

#ifdef __cplusplus
extern "C" {
#endif


#if defined __has_include
#  if __has_include(<uchar.h>)
#    include <uchar.h>
#    define INCLUDED_UCHAR 1
#  endif
#endif
#if !defined(INCLUDED_UCHAR) && __cplusplus <= 199711L
#  include <stdint.h>
typedef uint_least16_t char16_t;
#endif


#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_DYNAMIC_TYPESUPPORT__UCHAR_H_
