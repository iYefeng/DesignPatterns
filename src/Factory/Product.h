/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 13:47
 * Last modified : 2016-10-04 13:47
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
};

template<int Type=0>
class Product : public BaseProduct
{
public:
  Product(int type=Type) : type_(type) {}
  ~Product() {}
  void execute();

protected:

private:
  int type_;

};

// 模板类成员函数的定义不能在源文件中，因为模板类的成员函数的定义，是一种不完整的定义
// 编译器不知道模板参数的具体类型，无法为其成员函数生成代码，只能定义在头文件中
template<int Type>
void Product<Type>::execute()
{
  cout << "Product type=" << type_ << endl;
}

#endif // PRODUCT_H_
