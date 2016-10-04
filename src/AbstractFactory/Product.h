/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 13:49
 * Last modified : 2016-10-04 13:49
 * Filename      : Product.h
 * Description   : 
 * *********************************************************/

#ifndef PRODUCT_H_
# define PRODUCT_H_

#include <string>
#include <iostream>

using namespace std;

class BaseProduct
{
public:
  virtual ~BaseProduct() = 0;
  virtual void execute() = 0;

protected:
  BaseProduct() {}

private:

};

template<char* Type, int Version=0>
class Product : public BaseProduct
{
public:
  Product();
  ~Product() {}
  void execute();

protected:

private:
  string type_;
  int version_;
};

template<char* Type, int Version>
Product<Type, Version>::Product() : 
  type_(Type), 
  version_(Version)
{
}

template<char* Type, int Version>
void Product<Type, Version>::execute()
{
  cout << "Product type=" << type_ << " version=" << version_ << endl;
}

#endif // PRODUCT_H_
