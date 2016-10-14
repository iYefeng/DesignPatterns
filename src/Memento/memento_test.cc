/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-14 23:45
 * Last modified : 2016-10-14 23:45
 * Filename      : memento_test.cc
 * Description   : 
 * *********************************************************/
#include <iostream>
#include "Number.h"

using namespace std;

int main(int argc, char* argv[])
{
  Number num(111);

  Command cmd;

  cmd.execute(&num, &Number::half);
  cout << "half, " << num.getValue() << endl;
  
  cmd.execute(&num, &Number::half);
  cout << "half, " << num.getValue() << endl;
  
  cmd.undo(&num);
  cout << "undo, " << num.getValue() << endl;

  cmd.execute(&num, &Number::dobble);
  cout << "double, " << num.getValue() << endl;
  
  cmd.undo(&num);
  cout << "undo, " << num.getValue() << endl;

  cmd.undo(&num);
  cout << "undo, " << num.getValue() << endl;
  cmd.undo(&num);
  cout << "undo, " << num.getValue() << endl;
  cmd.undo(&num);
  cout << "undo, " << num.getValue() << endl;
  cmd.undo(&num);
  cout << "undo, " << num.getValue() << endl;

  return 0;
}
