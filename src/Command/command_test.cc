/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-09 22:32
 * Last modified : 2016-10-09 22:32
 * Filename      : command_test.cc
 * Description   : 
 * *********************************************************/
#include <iostream>
#include "Command.h"

using namespace std;

class Number
{
public:
  void dubble(int& val) 
  {
    val *= 2;
  }
};


int main(int argc, char* argv[])
{
  Number obj;
  Command *cmds[2];
  SimpleCommand<Number> command = SimpleCommand<Number>(&obj, &Number::dubble);

  cmds[0] = &command;

  MacroCommand command1;
  command1.add(cmds[0]);
  command1.add(cmds[0]);

  cmds[1] = &command1;

  int num = 3;
  cmds[0]->execute(num);
  cout << num << endl;

  num = 3;
  cmds[1]->execute(num);
  cout << num << endl;

  return 0;
}
