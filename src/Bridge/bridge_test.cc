/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 18:03
 * Last modified : 2016-10-04 18:03
 * Filename      : bridge_test.cc
 * Description   : 
 * *********************************************************/

#include "Box.h"
#include "BoxImp.h"

int main(int argc, char* argv[])
{
  BoxImp* impA = new ConcreteBoxImpA();
  BoxImp* impB = new ConcreteBoxImpB();

  Box* boxA = new RedefinedBox(impA);
  Box* boxB = new RedefinedBox(impB);

  boxA->operation();
  boxB->operation();

  delete boxA;
  delete boxB;
  return 0;
}
