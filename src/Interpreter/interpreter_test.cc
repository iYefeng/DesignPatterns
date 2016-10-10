/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-10 22:26
 * Last modified : 2016-10-10 22:26
 * Filename      : interpreter_test.cc
 * Description   : 
 * *********************************************************/

#include <iostream>
#include "Expression.h"

using namespace std;

int main(int argc, char* argv[])
{
  // a = 1, b = 3
  // (a - 5) + (6 + b)
  // result: (1-5)+(6+3) = 5
  VariableExp* a = new VariableExp("a");
  VariableExp* b = new VariableExp("b");

  SubExp* exp1 = new SubExp(a, new Constant(5));
  AddExp* exp2 = new AddExp(new Constant(6), b);
  
  AddExp* exp3 = new AddExp(exp1, exp2);

  Context ctx;
  ctx.assign("a", 1);
  ctx.assign("b", 3);
  
  cout << exp3->evaluate(ctx) << endl;
  
  delete exp3;
  return 0;
}
