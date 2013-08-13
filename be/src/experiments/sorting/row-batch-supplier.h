// Copyright 2012 Cloudera Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef IMPALA_SORTING_ROW_BATCH_SUPPLIER_H_
#define IMPALA_SORTING_ROW_BATCH_SUPPLIER_H_

namespace impala {

class Status;
class RuntimeState;
class RowBatch;

// Interface for providing a set of RowBatches, in a manner identical to an ExecNode,
// but for lighter-weight components.
class RowBatchSupplier {
 public:
  virtual Status GetNext(RowBatch* row_batch, bool* eos) = 0;
  virtual ~RowBatchSupplier() { }
};

}

#endif
