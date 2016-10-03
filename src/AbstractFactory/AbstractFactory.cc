/** 
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 *  
 *    Author: yefeng
 * Create on: Oct 3, 2016
 **/

#include "AbstractFactory.h"
#include "Product.h"

AbstractFactory::~AbstractFactory() {}

char kTypeA[] = "A";
char kTypeB[] = "B";

BaseProduct* ConcreteFactory1::createProductA() {
  return static_cast<BaseProduct*>(new Product<kTypeA, 1>());
}
BaseProduct* ConcreteFactory1::createProductB() {
  return static_cast<BaseProduct*>(new Product<kTypeB, 1>());
}

BaseProduct* ConcreteFactory2::createProductA() {
  return static_cast<BaseProduct*>(new Product<kTypeA, 2>());
}
BaseProduct* ConcreteFactory2::createProductB() {
  return static_cast<BaseProduct*>(new Product<kTypeB, 2>());
}
