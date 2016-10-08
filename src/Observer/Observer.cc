/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-08 21:56
 * Last modified : 2016-10-08 22:04
 * Filename      : Observer.cc
 * Description   : 
 * *********************************************************/

#include <iostream>
#include "Subject.h"
#include "Observer.h"

using namespace std;


Observer::Observer(Subject* model, int div)
{
  model_ = model;
  div_ = div;
  model_->attach(this);
}

void DivObserver::update()
{
  int v = getSubject()->getVal();
  int d = getDivisor();
  cout << v << " div " << d << " is " << v / d << '\n';
}

void ModObserver::update()
{
  int v = getSubject()->getVal();
  int d = getDivisor();
  cout << v << " mod " << d << " is " << v % d << '\n';
};
