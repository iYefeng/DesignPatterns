/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-07 16:09
 * Last modified : 2016-10-07 16:09
 * Filename      : template_test.cc
 * Description   : 
 * *********************************************************/

#include "CarModel.h"

int main(int argc, char* argv[])
{
  BaseCarModel* benz = new BenzCarModel();
  benz->run();
  delete benz;
  return 0;
}
