/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-08 22:35
 * Last modified : 2016-10-08 22:35
 * Filename      : observer_test.cc
 * Description   : 
 * *********************************************************/

#include "Observer.h"
#include "Subject.h"

int main(int argc, char* argv[])
{
  ConcreteSubject sub;
  DivObserver divObs1(&sub, 3);
  ModObserver modObs1(&sub, 4);
  DivObserver divObs2(&sub, 2);
  sub.setVal(14);
}

