/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 13:46
 * Last modified : 2016-10-04 13:46
 * Filename      : Factory.h
 * Description   : 
 * *********************************************************/

#ifndef FACTORY_H_
# define FACTORY_H_

class BaseProduct;

class Factory
{
public:
  virtual ~Factory() = 0;
  virtual BaseProduct* createProduct() = 0;

protected:
  Factory() {}

private:

};

class ConcreteFactory : public Factory
{
public:
  ConcreteFactory() {}
  ~ConcreteFactory() {}
  BaseProduct* createProduct();

protected:


private:


};

#endif // FACTORY_H_ 
