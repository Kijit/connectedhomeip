/*
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 *  @file
 *    This file contains definitions for Callback objects for registering with
 *     Clusters and the Device
 */

#pragma once

#include "CHIPCallbackManager.h"
#include <stddef.h>
#include <stdint.h>

using namespace chip;
using namespace Callback;

void CallbackManager::AddPostAttributeChangeHandler(EndpointId endpoint, ClusterId cluster,
                                                    Callback::Callback<> * onPostAttributeChange)
{
    CallbackType callbackType = kPostAttributeChangeCallbackType;

    // CallbackInfo info                 = { endpoint, cluster };
    // Callback::Cancelable * cancelable = onReport->Cancel();

    // nlSTATIC_ASSERT_PRINT(sizeof(info) <= sizeof(cancelable->mInfoScalar), "Size of CallbackInfo should be <= size of
    // mInfoScalar");

    // cancelable->mInfoScalar = 0;
    // memmove(&cancelable->mInfoScalar, &info, sizeof(info));
    // mReports.Enqueue(cancelable);
}