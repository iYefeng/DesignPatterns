/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-15 01:36
 * Last modified : 2016-10-15 01:36
 * Filename      : chainofresponsibility_test.cc
 * Description   : 
 * *********************************************************/
#include <iostream>
#include "Chain.h"

using namespace std;

int main(int argc, char* argv[])
{
  L4DNS l4;
  L3DNS l3;
  L2DNS l2;
  L1DNS l1;

  l4.add(&l3);
  l4.add(&l2);
  l4.add(&l1);

  cout << l4.query(2000) << endl;
  cout << l4.query(200) << endl;
  cout << l4.query(40) << endl;
  cout << l4.query(8) << endl;

}
