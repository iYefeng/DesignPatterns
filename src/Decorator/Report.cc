/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 20:19
 * Last modified : 2016-10-04 20:19
 * Filename      : Report.cc
 * Description   : 
 * *********************************************************/

#include <iostream>
#include "Report.h"

using namespace std;

Report::~Report() 
{
  cout << "~Report" << endl;
}

void SchoolReport::report()
{
  cout << "尊敬的XXX家长：" << endl;
  cout << "  ......" << endl;
  cout << "  语文 62   数学 65   体育 98    自然 63" << endl;
  cout << "  ......" << endl;
  cout << "           家长签名：    " << endl;
}

void SchoolReport::sign(string name)
{
  cout << "家长签名为：" << name << endl;
}


