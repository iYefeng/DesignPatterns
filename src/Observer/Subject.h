/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-08 21:31
 * Last modified : 2016-10-08 21:31
 * Filename      : Subject.h
 * Description   : 
 * *********************************************************/

#ifndef OBSERVER_SUBJECT_H_
# define OBSERVER_SUBJECT_H_

#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

class Observer;

class Subject
{
public:
  virtual ~Subject() {}
  void attach(Observer* obs)
  {
    views_.push_back(obs);
  }
  void remove(Observer* obs)
  {
    views_.erase(remove_if(views_.begin(), views_.end(), [obs](Observer* it){ return obs == it; } ), views_.end());
  }
  void setVal(int val) 
  {
    val_ = val;
    notify();
  }
  int getVal()
  {
    return val_;
  }
  
  void notify();

protected:
  Subject() {}

private:
  vector<Observer*> views_;
  int val_;
};

class ConcreteSubject : public Subject
{
public:
  ConcreteSubject() {}
  ~ConcreteSubject() {}

protected:

private:

};

#endif // OBSERVER_SUBJECT_H_
