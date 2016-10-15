/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-15 12:27
 * Last modified : 2016-10-15 12:32
 * Filename      : Mediator.h
 * Description   : 
 * *********************************************************/

#ifndef MEDIATOR_MEDIATOR_H_
# define MEDIATOR_MEDIATOR_H_

#include <iostream>
#include <string>
#include <stdarg.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

class Mediator
{
public:
  Mediator();
  ~Mediator();

  void execute(string action, ...);

protected:

private:
  void buyProduct(int number);
  void sellProduct(int number);
  void offSell();
  void clearStock();


  class Sale* sale_;
  class Purchase* purchase_;
  class Stock* stock_;
};

class Colleague
{
public:
  virtual ~Colleague() {}

protected:
  Colleague(Mediator* med)
    : mediator_(med)
  {}
  Mediator* getMediator()
  {
    return mediator_;
  }

private:
  class Mediator* mediator_;
};

class Purchase : public Colleague
{
public:
  Purchase(Mediator* med)
    : Colleague(med)
  {}

  void buyProduct(int number)
  {
    getMediator()->execute("purchase.buy", number);
  }

  void refuseProduct()
  {
    cout << "不再采购" << endl;
  }

protected:

private:

};

class Stock : public Colleague
{
public:
  Stock(Mediator* med) 
    : Colleague(med)
  {}

  void increase(int delta)
  {
    current_number_ += delta;
  }

  void decrease(int delta)
  {
    current_number_ -= delta;
  }

  int getCurrentNumber()
  {
    return current_number_;
  }

  void clearStock()
  {
    cout << "清理存货数量：" << current_number_ << endl;
    getMediator()->execute("stock.clear");
  }

protected:


private:
  static int current_number_;

};

class Sale : public Colleague
{
public:
  Sale(Mediator* med)
    : Colleague(med)
  {
  }

  void sellProduct(int number)
  {
    getMediator()->execute("sale.sell", number);
  }
  int getSaleStatus()
  {
    int saleStatus = rand() % 100;
    cout << "销售情况: " << saleStatus << endl;
    return saleStatus;
  }
  void offSale()
  {
    getMediator()->execute("sale.offsell");
  }

protected:

private:

};



#endif // MEDIATOR_MEDIATOR_H_
