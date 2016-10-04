/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 23:01
 * Last modified : 2016-10-04 23:01
 * Filename      : Product.h
 * Description   : 
 * *********************************************************/

#ifndef COMPOSITE_PRODUCT_H_
# define COMPOSITE_PRODUCT_H_

#include <string>
#include <iostream>
#include <stdlib.h>
#include <boost/bimap.hpp>

using namespace std;

class BaseProduct
{
public:
  virtual ~BaseProduct() { cout << "~BaseProduct" << endl; }
  virtual void add(BaseProduct* part) {}
  virtual void remove(BaseProduct* part) {}
  virtual BaseProduct* getChild(int index) { return NULL; }
  virtual int getPrice() {
    return price_;
  }
  virtual void setPrice(int price) {
    price_ = price;
  }

protected:
  BaseProduct(string name)
    : name_(name),
      price_(0)
  {}


private:
  int price_;
  string name_;
};

class Product : public BaseProduct
{
public:
  Product(string name);
  ~Product();
  void add(BaseProduct* part);
  void remove(BaseProduct* part);
  BaseProduct* getChild(int index);
  int getPrice();
  void setPrice(int price);

protected:

private:
  typedef boost::bimap<BaseProduct*, int> Parts;
  Parts parts_;
};

class Part : public BaseProduct
{
public:
  Part(string name);
  ~Part();
  int getPrice();
  void setPrice(int price);

protected:

private:

};

#endif // COMPOSITE_PRODUCT_H_
