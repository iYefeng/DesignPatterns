/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-07 19:50
 * Last modified : 2016-10-07 19:50
 * Filename      : Calculator.cc
 * Description   : 
 * *********************************************************/

#include "Calculator.h"

int Add::exec(int a, int b)
{
  return a + b;
}

int Sub::exec(int a, int b)
{
  return a - b;
}

int Context::exec(int a, int b)
{
  return cal_->exec(a, b);
}
