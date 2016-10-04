/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 17:04
 * Last modified : 2016-10-04 17:04
 * Filename      : Product.cc
 * Description   : 
 * *********************************************************/

#include <iostream>
#include "Product.h"

using namespace std;

Product::Product(string name, int id)
  : name_(name),
    id_(id)
{
}

Product::Product(const Product& other) 
{
  name_ = other.name_;
  id_ = other.id_;
}

Product* Product::clone() const
{
  return new Product(*this);
}

void Product::toString() const
{
  cout << "name: " << name_ << endl;
  cout << "id: " << id_ << endl;
}

void Product::initialize(string name, int id)
{
  name_ = name;
  id_ = id;
}
