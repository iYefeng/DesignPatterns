/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 19:01
 * Last modified : 2016-10-04 19:01
 * Filename      : Target.h
 * Description   : 
 * *********************************************************/

#ifndef ADAPTER_TARGET_H_
# define ADAPTER_TARGET_H_

class Target
{
public:
  virtual ~Target() {}
  virtual void execute();

protected:
  Target() {}

private:

};

#endif // ADAPTER_TARGET_H_
