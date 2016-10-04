/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 17:01
 * Last modified : 2016-10-04 17:01
 * Filename      : Product.h
 * Description   : 
 * *********************************************************/

#ifndef PRODUCT_H_
# define PRODUCT_H_

#include <string>

using namespace std;

class Product
{
public:
  Product(string name, int id);
  Product(const Product& other);
  ~Product() {}
  Product* clone() const;
  void toString() const;
  void initialize(string name, int id);

private:
  string name_;
  int id_;
};

#endif // PRODUCT_H_
