/** 
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 *  
 *    Author: yefeng
 * Create on: Oct 3, 2016
 **/

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
};

template<int Type=0>
class Product : public BaseProduct
{
public:
  Product(int type=Type) : type_(type) {}
  ~Product() {}
  void execute() {
    cout << "Product type=" << type_ << endl;
  }

protected:

private:
  int type_;

};

#endif // PRODUCT_H_
