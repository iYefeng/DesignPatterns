/** 
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 *  
 *    Author: yefeng
 * Create on: Oct 3, 2016
 **/

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
