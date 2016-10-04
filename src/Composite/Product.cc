/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 23:40
 * Last modified : 2016-10-04 23:40
 * Filename      : Product.cc
 * Description   : 
 * *********************************************************/

#include <stdlib.h>
#include "Product.h"

Product::Product(string name)
  : BaseProduct(name)
{
}

Product::~Product()
{
  for(Parts::iterator it = parts_.begin(), iend = parts_.end(); it != iend; ++it) {
    delete it->left;
  }
}

void Product::add(BaseProduct* part)
{
  parts_.insert(Parts::value_type(part, parts_.size() + 1));
}

void Product::remove(BaseProduct* part)
{
  Parts::left_iterator left_itor = parts_.left.find(part);
  if (left_itor != parts_.left.end()) {
    delete left_itor->first;
  }
}

BaseProduct* Product::getChild(int index)
{
  Parts::right_iterator right_itor = parts_.right.find(index);
  if (right_itor != parts_.right.end()) {
    return right_itor->second;
  } else {
    return NULL;
  }
}

int Product::getPrice()
{
  int total = 0;
  for (Parts::iterator it = parts_.begin(), iend = parts_.end(); it != iend; ++it) {
    total += (it->left)->getPrice();
  }
  total += BaseProduct::getPrice();
  return total;
}

void Product::setPrice(int price)
{
  BaseProduct::setPrice(price);
}

Part::Part(string name)
  : BaseProduct(name)
{
}

Part::~Part() 
{
}

int Part::getPrice()
{
  return BaseProduct::getPrice();
}

void Part::setPrice(int price)
{
  BaseProduct::setPrice(price);
}



