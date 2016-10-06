/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-06 23:38
 * Last modified : 2016-10-06 23:38
 * Filename      : Cash.h
 * Description   : 
 * *********************************************************/

#ifndef PROXY_CASH_H_
# define PROXY_CASH_H_

#include <string>

using namespace std;

class Person
{
public:
  Person(string name)
    : name_(name)
  {}

  string name() 
  {
    return name_;
  }

private:
  string name_;
};

class BaseCash
{
public:
  virtual ~BaseCash() {}
  virtual bool withdraw(int amount) = 0;

protected:
    BaseCash() {}
};

class Cash : public BaseCash
{
public:
  Cash(string name)
    : name_(name),
      balance_(500)
  {}

  bool withdraw(int amount)
  {
    if (amount > balance_) {
      return false;
    }
    balance_ -= amount;
    return true;
  }
  string name() 
  {
    return name_;
  }
  int getBalance()
  {
    return balance_;
  }

private:
  string name_;
  int balance_;
};

class CashProxy : public BaseCash
{
public:
  CashProxy() 
    : account_(NULL),
      user_(NULL)
  {}
  CashProxy(Cash* account, Person* user) 
    : account_(account),
      user_(user)
  {}
  ~CashProxy() 
  {
  }

  void initialize(Cash* account, Person* user)
  {
    account_ = account;
    user_ = user;
  }

  bool withdraw(int amount)
  {
    if (account_ == NULL || user_ == NULL) {
      return false;
    }
    if (user_->name() == account_->name()) {
      return account_->withdraw(amount);
    } else {
      return false;
    }
  }
  int getBalance()
  {
    if (account_ == NULL || user_ == NULL) {
      return 0;
    }
    return account_->getBalance();
  }

private:
  Cash* account_;
  Person* user_;
};


#endif // PROXY_CASH_H_
