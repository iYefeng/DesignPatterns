/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-08 21:57
 * Last modified : 2016-10-08 21:57
 * Filename      : Observer.h
 * Description   : 
 * *********************************************************/

#ifndef OBSERVER_OBSERVER_H_
# define OBSERVER_OBSERVER_H_

class Subject;

class Observer
{
public:
  Observer(Subject* model, int div);
  ~Observer() {}
  virtual void update() = 0;
  Subject* getSubject()
  {
    return model_;
  }
  int getDivisor()
  {
    return div_;
  }

protected:

private:
  Subject* model_;
  int div_;
};

class DivObserver : public Observer
{
public:
  DivObserver(Subject* sub, int div) : Observer(sub, div) {}
  void update();

};

class ModObserver : public Observer
{
public:
  ModObserver(Subject* sub, int div) : Observer(sub, div) {}
  void update();

};


#endif // OBSERVER_OBSERVER_H_
