/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 13:48
 * Last modified : 2016-10-04 13:48
 * Filename      : factory_test.cc
 * Description   : 
 * *********************************************************/

#include "Factory.h"
#include "Product.h"

int main(int argc, char *argv[])
{
  Factory *fac = new ConcreteFactory();
  BaseProduct* p = fac->createProduct();
  p->execute();
  delete p;
  delete fac;
  
  return 0;
}
