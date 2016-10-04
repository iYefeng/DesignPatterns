/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 18:47
 * Last modified : 2016-10-04 18:50
 * Filename      : adapter_oo_test.cc
 * Description   : 
 * *********************************************************/

#include "AdapterOB.h"

int main(int argc, char* argv[])
{
  Target* adp = new Adapter();
  adp->execute();
  delete adp;
  return 0;
}

