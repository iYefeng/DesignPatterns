/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-07 21:36
 * Last modified : 2016-10-07 21:37
 * Filename      : Context.h
 * Description   : 
 * *********************************************************/

#ifndef STATE_CONTEXT_H_
# define STATE_CONTEXT_H_

#include "Lift.h"

class Context
{
public:
  friend class LiftState;
  static OpenningState kOpenningState;
  static CloseState kClosingState;
  static RunningState kRunningState;
  static StoppingState kStoppingState;
  Context();
  ~Context();
  void setState(LiftState* state);
  void open();
  void close();
  void run();
  void stop();

protected:


private:
  LiftState* state_;

};

#endif // STATE_CONTEXT_H_
