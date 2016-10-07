/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-07 21:43
 * Last modified : 2016-10-07 21:43
 * Filename      : Context.cc
 * Description   : 
 * *********************************************************/

#include "Context.h"
#include "Lift.h"

OpenningState Context::kOpenningState = OpenningState();
CloseState Context::kClosingState = CloseState();
RunningState Context::kRunningState = RunningState();
StoppingState Context::kStoppingState = StoppingState();

Context::Context()
{
}

Context::~Context()
{
}

void Context::setState(LiftState* state)
{
  state_ = state;
  state_->setContext(this);
}

void Context::open()
{
  state_->open();
}

void Context::close()
{
  state_->close();
}

void Context::run()
{
  state_->run();
}

void Context::stop()
{
  state_->stop();
}



