/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-15 01:15
 * Last modified : 2016-10-15 01:15
 * Filename      : Chain.h
 * Description   : 
 * *********************************************************/

#ifndef CHAIN_CHAIN_H_
# define CHAIN_CHAIN_H_

#include <string>
#include <stdlib.h>

using namespace std;

class DNS
{
public:
  virtual ~DNS() {}
  virtual string query(int req) = 0;
  void setNext(DNS* next)
  {
    next_ = next;
  }
  void add(DNS* next)
  {
    if (next_ != NULL) {
      next_->add(next);
    } else {
      next_ = next;
    }
  }

protected:
  DNS* next_;
  DNS() 
    : next_(NULL)
  {}

private:
};

// 10000 > L1DNS >= 1000
// 999 >= L2DNS >= 100
// 99 >= L3DNS >= 10
// 9 >= L4DNS >= 1

class L1DNS : public DNS
{
public:
  string query(int req)
  {
    if (req >= 1000 && req < 10000) {
      
      return "belongs to L1DNS";
    } else {
      return "not belongs to L1DNS";
    }
  }

};

class L2DNS : public DNS
{
public:
  string query(int req)
  {
    if (req >= 1000) {
      return "not belongs to L2DNS | " + next_->query(req);
    } else {
      return "belongs to L2DNS";
    }
  }
};

class L3DNS : public DNS
{
public:
  string query(int req)
  {
    if (req >= 100) {
      return "not belongs to L3DNS | " + next_->query(req);
    } else {
      return "belongs to L3DNS";
    }
  }
};

class L4DNS : public DNS
{
public:
  string query(int req) {
    if (req >= 10) {
      return "not belongs to L4DNS | " + next_->query(req); 
    } else {
      return "belongs to L4DNS";
    }
  }
};


#endif // CHAIN_CHAIN_H_
