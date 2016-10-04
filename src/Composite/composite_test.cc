/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-05 00:11
 * Last modified : 2016-10-05 00:11
 * Filename      : composite_test.cc
 * Description   : 
 * *********************************************************/

#include <iostream>
#include "Product.h"

using namespace std;

int main(int argc, char* argv[])
{
  BaseProduct* bicycle = new Product("Bicycle");

  BaseProduct* beforeWheel = new Part("Before_Wheel");
  beforeWheel->setPrice(10);
  bicycle->add(beforeWheel);

  BaseProduct* afterWheel = new Part("After_Wheel");
  afterWheel->setPrice(15);
  bicycle->add(afterWheel);

  BaseProduct* seat = new Product("Seat");
  BaseProduct* saddle1 = new Part("Saddle1");
  saddle1->setPrice(1);
  seat->add(saddle1);
  BaseProduct* saddle2 = new Part("Saddle2");
  saddle2->setPrice(1);
  seat->add(saddle2);
  seat->setPrice(5);

  bicycle->add(seat);

  cout << "the price is " << bicycle->getPrice() << endl;
  
  delete bicycle;
  return 0;
}
