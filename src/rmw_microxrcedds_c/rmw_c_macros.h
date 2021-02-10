// Copyright 2019 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

#ifndef RMW_MICROXRCEDDS_C__RMW_C_MACROS_H_
#define RMW_MICROXRCEDDS_C__RMW_C_MACROS_H_

#define RMW_CHECK_TYPE_IDENTIFIERS_MATCH(ElementName, ElementTypeID, ExpectedTypeID, OnFailure) \
    {                                                                                           \
        if (strcmp(ElementTypeID, ExpectedTypeID) != 0) {                                       \
            RMW_SET_ERROR_MSG("Implementation identifiers does not match");                     \
            OnFailure;                                                                          \
        }                                                                                       \
    }

#endif  // RMW_MICROXRCEDDS_C__RMW_C_MACROS_H_
