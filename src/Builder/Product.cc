/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 12:42
 * Last modified : 2016-10-04 13:37
 * Filename      : Product.cc
 * Description   : 
 * *********************************************************/

#include "Product.h"

BaseProduct::~BaseProduct() {}

void Car::run() {
  for (size_t i = 0 ; i < sequence_.size(); ++i) {
    if (sequence_[i] == "start") {
      this->start();
    } else if (sequence_[i] == "stop") {
      this->stop();
    } else if (sequence_[i] == "alarm") {
      this->alarm();
    } else if (sequence_[i] == "engineBoom") {
      this->engineBoom();
    }
  }
}

void Car::setSequence(vector<string>& seq) {
  sequence_.assign(seq.begin(), seq.end());
}


