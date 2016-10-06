/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-06 23:56
 * Last modified : 2016-10-06 23:56
 * Filename      : protection_proxy_test.cc
 * Description   : 
 * *********************************************************/
#include <iostream>
#include "Cash.h"

using namespace std;

int main(int argc, char* argv[])
{
  CashProxy proxy;
  Cash account = Cash("yefeng");
  Person user1 = Person("yefeng");
  Person user2 = Person("yefeng1");
  int amount = 200;

  
  proxy.initialize(&account, &user1);
  if (proxy.withdraw(amount)) {
    cout << amount << " dollars for " << user1.name() << '\n';
  } else {
    cout << "No money for " << user1.name() << '\n';
  }

  proxy.initialize(&account, &user2);
  if (proxy.withdraw(amount)) {
    cout << amount << " dollars for " << user2.name() << '\n';
  } else {
    cout << "No money for " << user2.name() << '\n';
  }

  return 0;
}
