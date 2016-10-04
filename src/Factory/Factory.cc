/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 13:47
 * Last modified : 2016-10-04 13:47
 * Filename      : Factory.cc
 * Description   : 
 * *********************************************************/

#include <iostream>

#include "Factory.h"
#include "Product.h"

using namespace std;

Factory::~Factory() {} // 基类的纯虚函数必须定义

BaseProduct* ConcreteFactory::createProduct()
{
  return static_cast<BaseProduct*>(new Product<1>());
}
