/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 20:49
 * Last modified : 2016-10-04 20:49
 * Filename      : decorator_test.cc
 * Description   : 
 * *********************************************************/

#include "Decorator.h"
#include "Report.h"

int main(int argc, char* argv[])
{
  Report* report = new SchoolReport();
  report = new HighScoreDecorator(report);
  report = new SortDecorator(report);

  report->report();
  report->sign("YYYY");
  delete report;
  return 0;
}
