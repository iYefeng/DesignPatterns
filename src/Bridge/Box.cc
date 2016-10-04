/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 17:53
 * Last modified : 2016-10-04 18:17
 * Filename      : Box.cc
 * Description   : 
 * *********************************************************/

#include <stdlib.h>
#include "Box.h"
#include "BoxImp.h"

RedefinedBox::RedefinedBox(BoxImp* imp)
{
  imp_ = imp;
}

RedefinedBox::~RedefinedBox()
{
  if (imp_ != NULL) {
    delete imp_;
  }
  imp_ = NULL;
}

void RedefinedBox::operation()
{
  imp_->operation();
}

