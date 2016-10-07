/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-07 19:45
 * Last modified : 2016-10-07 19:45
 * Filename      : Calculator.h
 * Description   : 
 * *********************************************************/

#ifndef STRATEGY_CALCULATOR_H_
# define STRATEGY_CALCULATOR_H_

#include <stdlib.h>

class Calculator
{
public:
  virtual ~Calculator() {}
  virtual int exec(int a, int b) = 0;

protected:
  Calculator() {}

private:

};

class Add : public Calculator
{
public:
  int exec(int a, int b);
};

class Sub : public Calculator
{
public:
  int exec(int a, int b);
};

class Context
{
public:
  Context(Calculator* cal)
    : cal_(cal)
  {}
  ~Context() {
    if (cal_ != NULL) {
      delete cal_;
      cal_ = NULL;
    }
  }
  int exec(int a, int b);

private:
  Calculator* cal_;

};



#endif // STRATEGY_CALCULATOR_H_
