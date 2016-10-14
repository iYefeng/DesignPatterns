/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-14 23:38
 * Last modified : 2016-10-14 23:38
 * Filename      : Number.h
 * Description   : 
 * *********************************************************/

#ifndef MEMENTO_NUMBER_H_
# define MEMENTO_NUMBER_H_

#include <vector>
#include <memory>

using namespace std;

class Memento
{
public:
  Memento(int status) 
    : status_(status)
  {}

private:
  friend class Number;
  int status_;
};

class Number
{
public:
  Number(int val)
    : val_(val)
  {}

  void half()
  {
    val_ = val_ / 2;
  }

  void dobble()
  {
    val_ = val_ * 2;
  }

  int getValue()
  {
    return val_;
  }

  Memento* createMemento()
  {
    return new Memento(val_);
  }

  void reinstateMemento(Memento* mem)
  {
    val_ = mem->status_;
  }

private:
  int val_;
};

class Command
{
public:
  typedef void (Number::*Action)();
  Command()
    : sp_(0)
  {
  }
  void execute(Number* receiver, Action action)
  {
    sp_ ++;
    mems_.push_back(MementoPtr(receiver->createMemento()));
    (receiver->*action)();
  }

  void undo(Number* receiver)
  {
    if (sp_ > 0) { 
      receiver->reinstateMemento(mems_[--sp_].get());
    }
  }

protected:

private:
  typedef shared_ptr<Memento> MementoPtr;
  int sp_;
  vector<MementoPtr> mems_;
};

#endif // MEMENTO_NUMBER_H_
