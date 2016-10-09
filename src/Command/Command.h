/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-09 22:17
 * Last modified : 2016-10-09 22:17
 * Filename      : Command.h
 * Description   : 
 * *********************************************************/
#ifndef COMMAND_COMMAND_H_
# define COMMAND_COMMAND_H_

#include <vector>

using namespace std;

class Command
{
public:
  virtual ~Command() {}
  virtual void execute(int& val) = 0;

protected:
  Command() {}
};

template<class Receiver>
class SimpleCommand : public Command
{
public:
  typedef void (Receiver::* Action)(int& val);
  SimpleCommand(Receiver* r, Action a)
    : receiver_(r),
      action_(a)
  {
  }
  virtual void execute(int& val) 
  {
    (receiver_->*action_)(val);
  }
private:
  Receiver* receiver_;
  Action action_;
};

class MacroCommand : public Command
{
public:
  MacroCommand() {}
  virtual void add(Command* cmd) 
  {
    cmds_.push_back(cmd);
  }
  virtual void execute(int& val)
  {
    for (size_t i = 0, iend = cmds_.size(); i < iend; ++i) {
      cmds_[i]->execute(val);
    }
  }

private:
  vector<Command *> cmds_;
};

#endif // COMMAND_COMMAND_H_
