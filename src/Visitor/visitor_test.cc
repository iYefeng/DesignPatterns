/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-13 23:44
 * Last modified : 2016-10-13 23:51
 * Filename      : visitor_test.cc
 * Description   : 
 * *********************************************************/

#include "Visitor.h"

int main(int argc, char* argv[])
{
  Element *list[] = 
  {
    new ConcreteA(), new ConcreteA(), new ConcreteB()
  };

  Manager manager;
  Employee employee;

  for (size_t i = 0; i < 3; ++i) {
    list[i]->accept(manager);
  }

  for (size_t i = 0; i < 3; ++i) {
    list[i]->accept(employee);
  }

  return 0;
}
