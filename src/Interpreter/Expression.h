/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-09 23:34
 * Last modified : 2016-10-10 21:50
 * Filename      : Expression.h
 * Description   : 
 * *********************************************************/

#ifndef INTERPRETER_EXPRESSION_H_
# define INTERPRETER_EXPRESSION_H_

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Context
{
public:
  Context() {}
  ~Context() {}
  void assign(string key, int val);
  int lookup(string key);
  
private:
  map<string, int> kv_;
};

class Expression
{
public:
  virtual ~Expression() 
  {
    cout << "~Expression" << endl;
  }
  virtual int evaluate(Context& ctx) = 0;

protected:
  Expression() {}
};

class Constant : public Expression
{
public:
  Constant(int val) 
    : val_(val)
  {  
  }
  int evaluate(Context& ctx)
  {
    return val_;
  }
private:
  int val_;
};

class VariableExp : public Expression
{
public:
  VariableExp(const string& name);
  ~VariableExp() {}
  int evaluate(Context& ctx);

private:
  string name_;
};

class AddExp : public Expression
{
public:
  AddExp(Expression* x, Expression* y);
  ~AddExp();
  int evaluate(Context& ctx);

private:
  Expression* x_;
  Expression* y_;  
};

class SubExp : public Expression
{
public:
  SubExp(Expression* x, Expression* y);
  ~SubExp();
  int evaluate(Context& ctx);
private:
  Expression* x_;
  Expression* y_;
};



#endif // INTERPRETER_EXPRESSION_H_
