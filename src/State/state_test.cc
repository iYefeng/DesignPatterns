/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-07 22:15
 * Last modified : 2016-10-07 22:15
 * Filename      : state_test.cc
 * Description   : 
 * *********************************************************/

#include "Lift.h"
#include "Context.h"


int main(int argc, char* argv[])
{
  Context context;
  context.setState(&Context::kClosingState);
  context.open();
  context.close();
  context.run();
  context.stop();

  return 0;
}
