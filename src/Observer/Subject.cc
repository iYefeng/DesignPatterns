/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-08 21:56
 * Last modified : 2016-10-08 22:04
 * Filename      : Subject.cc
 * Description   : 
 * *********************************************************/

#include "Subject.h"
#include "Observer.h"


void Subject::notify()
{
  for (size_t i = 0; i < views_.size(); ++i) {
    views_[i]->update();
  }
}
