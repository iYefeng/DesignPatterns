/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 18:57
 * Last modified : 2016-10-04 18:57
 * Filename      : AdapterOO.h
 * Description   : 
 * *********************************************************/

#ifndef ADAPTER_ADAPTER_OO_H_
# define ADAPTER_ADAPTER_OO_H_

#include "Target.h"
#include "Adaptee.h"

class Adapter : public Target, private Adaptee
{
public:
  Adapter() {}
  ~Adapter() {}
  void execute();

protected:

private:

};


#endif // ADAPTER_ADAPTER_OO_H_
