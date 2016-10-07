/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-07 21:28
 * Last modified : 2016-10-07 21:28
 * Filename      : Lift.h
 * Description   : 
 * *********************************************************/

#ifndef STATE_LIFT_H_
# define STATE_LIFT_H_

class Context;

class LiftState
{
public:
  virtual ~LiftState() {}
  virtual void open() = 0;
  virtual void close() = 0;
  virtual void run() = 0;
  virtual void stop() = 0;
  void setContext(Context* ctx);
  void setState(LiftState* state);
  LiftState* getState();

protected:
  LiftState() {}
  Context* ctx_;

private:
};

class OpenningState : public LiftState
{
public:
  void open();
  void close();
  void run();
  void stop();

protected:

private:

};

class CloseState : public LiftState
{
public:
  void open();
  void close();
  void run();
  void stop();


protected:

private:

};

class RunningState : public LiftState
{
public:
  void open();
  void close();
  void run();
  void stop();

protected:

private:

};

class StoppingState : public LiftState
{
public:
  void open();
  void close();
  void run();
  void stop();

protected:

private:

};


#endif // STATE_LIFT_H_
