/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-10 22:13
 * Last modified : 2016-10-10 22:13
 * Filename      : Expression.cc
 * Description   : 
 * *********************************************************/
#include <stdlib.h>
#include "Expression.h"

void Context::assign(string key, int val)
{
  kv_.insert(make_pair(key, val));
}

int Context::lookup(string key)
{
  map<string, int>::iterator it = kv_.find(key);
  if (it != kv_.end()) {
    return it->second;
  } else {
    return 0;
  }
}

VariableExp::VariableExp(const string& name)
  : name_(name)
{
}

int VariableExp::evaluate(Context& ctx)
{
  return ctx.lookup(name_);
}

AddExp::AddExp(Expression* x, Expression* y)
  : x_(x),
    y_(y)
{  
}

AddExp::~AddExp()
{
  if (x_ != NULL) {
    delete x_;
    x_ = NULL;
  }
  if (y_ != NULL) {
    delete y_;
    y_ = NULL;
  }
}

int AddExp::evaluate(Context& ctx)
{
  return x_->evaluate(ctx) + y_->evaluate(ctx);
}

SubExp::SubExp(Expression* x, Expression* y)
  : x_(x),
    y_(y)
{
}

SubExp::~SubExp()
{
  if (x_ != NULL) {
    delete x_;
    x_= NULL;
  }
  if (y_ != NULL) {
    delete y_;
    y_ = NULL;
  }
}

int SubExp::evaluate(Context& ctx)
{
  return x_->evaluate(ctx) - y_->evaluate(ctx);
}


