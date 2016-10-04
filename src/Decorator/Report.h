/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 20:14
 * Last modified : 2016-10-04 20:14
 * Filename      : Report.h
 * Description   : 
 * *********************************************************/

#ifndef DECORATOR_REPORT_H_
# define DECORATOR_REPORT_H_

#include <string>
#include <iostream>

using namespace std;

class Report
{
public:
  virtual ~Report() = 0;
  virtual void report() = 0;
  virtual void sign(string name) = 0;

protected:
  Report() {}

private:

};

class SchoolReport : public Report
{
public:
  SchoolReport() {}
  ~SchoolReport() {
    cout << "~SchoolReport" << endl;
  }
  void report();
  void sign(string name);

protected:

private:

};


#endif // DECORATOR_REPORT_H_
