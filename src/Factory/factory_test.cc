/** 
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 *  
 *    Author: yefeng
 * Create on: Oct 3, 2016
 **/

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
