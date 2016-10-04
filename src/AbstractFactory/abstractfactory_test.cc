/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 13:49
 * Last modified : 2016-10-04 13:49
 * Filename      : abstractfactory_test.cc
 * Description   : 
 * *********************************************************/

#include "AbstractFactory.h"
#include "Product.h"

int main(int argc, char* argv[])
{
  AbstractFactory *cf;
  BaseProduct *p1;
  BaseProduct *p2;

  cf = new ConcreteFactory1();
  p1 = cf->createProductA();
  p2 = cf->createProductB();
  p1->execute();
  p2->execute();
  delete p1;
  delete p2;
  delete cf;

  cf = new ConcreteFactory2();
  p1 = cf->createProductA();
  p2 = cf->createProductB();
  p1->execute();
  p2->execute();
  delete p1;
  delete p2;
  delete cf;


  return 0;
}
