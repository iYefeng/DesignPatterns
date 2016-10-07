/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-07 19:54
 * Last modified : 2016-10-07 19:54
 * Filename      : strategy_test.cc
 * Description   : 
 * *********************************************************/
#include <iostream>
#include "Calculator.h"

using namespace std;

int main(int argc, char* argv[])
{
  Context con = Context(new Add());
  cout << con.exec(100, 200) << endl;

  Context con1 = Context(new Sub());
  cout << con1.exec(100, 200) << endl;

  return 0;
}
