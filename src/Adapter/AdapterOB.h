/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 19:13
 * Last modified : 2016-10-04 19:13
 * Filename      : AdapterOB.h
 * Description   : 
 * *********************************************************/

#ifndef ADAPTER_ADAPTER_OB_H_
# define ADAPTER_ADAPTER_OB_H_

#include "Target.h"
#include "Adaptee.h"

class Adapter : public Target
{
public:
  Adapter() {}
  ~Adapter() {}
  void execute();

protected:

private:
  Adaptee apt_;

};


#endif // ADAPTER_ADAPTER_OB_H_
