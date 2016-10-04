/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 15:48
 * Last modified : 2016-10-04 16:56
 * Filename      : prototype_test.cc
 * Description   : 
 * *********************************************************/

#include <iostream>
#include "Product.h"

using namespace std;

int main(int argc, char* argv[])
{
  Product* one = new Product("Benz Car", 1);
  Product* two = one->clone();
  cout << "before initialize" << endl;
  one->toString();
  two->toString();
  
  cout << "after initialize" << endl;
  two->initialize("BMW Car", 101);
  one->toString();
  two->toString();
  

  delete one;
  delete two;
  return 0;
}
