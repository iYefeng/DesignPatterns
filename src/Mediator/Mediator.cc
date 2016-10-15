/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-15 16:42
 * Last modified : 2016-10-15 16:42
 * Filename      : Mediator.cc
 * Description   : 
 * *********************************************************/

#include "Mediator.h"

Mediator::Mediator()
{
  sale_ = new Sale(this);
  purchase_ = new Purchase(this);
  stock_ = new Stock(this);
}

Mediator::~Mediator()
{
  delete sale_;
  delete purchase_;
  delete stock_;
}

void Mediator::execute(string action, ...)
{
  if (action == "purchase.buy") {
    int number;
    va_list argptr;
    va_start(argptr, action); //初始化变元指针
    number = va_arg(argptr, int);
    va_end(argptr);
    buyProduct(number);
  } else if (action == "sale.sell") {
    int number;
    va_list argptr;
    va_start(argptr, action); //初始化变元指针
    number = va_arg(argptr, int);
    va_end(argptr);
    sellProduct(number);
  } else if (action == "sale.offsell") {
    offSell();
  } else if (action == "stock.clear") {
    clearStock();
  }
}

void Mediator::buyProduct(int number)
{
  int saleStatus = sale_->getSaleStatus();
  cout << "statue: " << saleStatus << endl;
  if (saleStatus > 80) {
    cout << "采购: " << number << endl;
    stock_->increase(number);
  } else {
    int buyNumber = number / 2;
    cout << "采购: " << buyNumber << endl;
    stock_->increase(buyNumber);
  }
}

void Mediator::sellProduct(int number)
{
  int remain = stock_->getCurrentNumber();
  if (remain < number) {
    cout << "库存不足" << endl;
    //purchase_->buyProduct(number-remain);
    stock_->increase(number - remain);
  }
  cout << "Sell: " << number << endl;
  stock_->decrease(number);
}

void Mediator::offSell()
{
  cout << "打折销售" << stock_->getCurrentNumber() << endl;
}

void Mediator::clearStock()
{
  sale_->offSale();
  purchase_->refuseProduct();
}

int Stock::current_number_ = 100;
