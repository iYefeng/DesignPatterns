/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-07 16:05
 * Last modified : 2016-10-07 16:05
 * Filename      : CarModel.cc
 * Description   : 
 * *********************************************************/

#include <iostream>
#include "CarModel.h"

using namespace std;

void BaseCarModel::run()
{
  start();
  stop();
}

void BenzCarModel::start()
{
  cout << "Benz starting ..." << endl;
}

void BenzCarModel::stop()
{
  cout << "Benz stopping ..." << endl;
}
