/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-07 21:42
 * Last modified : 2016-10-07 21:42
 * Filename      : Lift.cc
 * Description   : 
 * *********************************************************/

#include <iostream>
#include "Lift.h"
#include "Context.h"

using namespace std;

void LiftState::setContext(Context* ctx)
{
  ctx_ = ctx;
}

void LiftState::setState(LiftState* state)
{
  ctx_->setState(state);
}

LiftState* LiftState::getState()
{
  return ctx_->state_;
}

void OpenningState::open()
{
  cout << "电梯门开启..." << endl;
}

void OpenningState::close()
{
  setState(&Context::kClosingState);
  getState()->close();
}

void OpenningState::run()
{
}

void OpenningState::stop()
{
}

void CloseState::open()
{
  setState(&Context::kOpenningState);
  getState()->open();
}

void CloseState::close()
{
  cout << "电梯门关闭..." << endl;
}

void CloseState::run()
{
  setState(&Context::kRunningState);
  getState()->run();
}

void CloseState::stop()
{
  setState(&Context::kStoppingState);
  getState()->stop();
}

void RunningState::open()
{
}

void RunningState::close()
{
}

void RunningState::run()
{
  cout << "电梯运行中..." << endl;
}

void RunningState::stop()
{
  setState(&Context::kStoppingState);
  getState()->stop();
}

void StoppingState::open()
{
  setState(&Context::kOpenningState);
  getState()->open();
}

void StoppingState::close()
{
}

void StoppingState::run()
{
  setState(&Context::kRunningState);
  getState()->run();
}

void StoppingState::stop()
{
  cout << "电梯停止了..." << endl;
}
