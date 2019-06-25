/* Copyright 2018 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#include "tensorflow/core/framework/types.h"
#include "tensorflow/core/platform/types.h"
#include "tensorflow/core/lib/core/errors.h"

namespace tensorflow {
namespace data {


// Checks for valid type for the avro attributes; currently we support bool,
// int, long, float, double, string.
//
// 'dtype' The data type.
//
// returns OK if any of the supported types; otherwise false.
//
tensorflow::Status CheckValidType(const tensorflow::DataType& dtype);

}  // namespace data
}  // namespace tensorflow