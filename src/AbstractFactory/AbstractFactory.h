/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 13:48
 * Last modified : 2016-10-04 13:48
 * Filename      : AbstractFactory.h
 * Description   : 
 * *********************************************************/

#ifndef ABSTRACTFACTORY_H_
# define ABSTRACTFACTORY_H_

class BaseProduct;

class AbstractFactory
{
public:
  virtual ~AbstractFactory() = 0;
  virtual BaseProduct* createProductA() = 0;
  virtual BaseProduct* createProductB() = 0;

protected:
  AbstractFactory() {}

private:

};

class ConcreteFactory1 : public AbstractFactory
{
public:
  ConcreteFactory1() {}
  ~ConcreteFactory1() {}
  BaseProduct* createProductA();
  BaseProduct* createProductB();

protected:


private:


};

class ConcreteFactory2 : public AbstractFactory
{
public:
  ConcreteFactory2() {}
  ~ConcreteFactory2() {}
  BaseProduct* createProductA();
  BaseProduct* createProductB();

protected:

private:

};

#endif // ABSTRACTFACTORY_H_
