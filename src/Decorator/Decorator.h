/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 20:25
 * Last modified : 2016-10-04 20:25
 * Filename      : Decorator.h
 * Description   : 
 * *********************************************************/

#ifndef DECORATOR_DECORATOR_H_
# define DECORATOR_DECORATOR_H_

#include "Report.h"

class Decorator : public Report
{
public:
  Decorator(Report* report);
  ~Decorator();
  void report();
  void sign(string name);

private:
  Report* report_;
  
};

class HighScoreDecorator : public Decorator
{
public:
  HighScoreDecorator(Report* report);
  ~HighScoreDecorator();
  void reportHighScore();
  void report();

protected:

private:

};

class SortDecorator : public Decorator
{
public:
  SortDecorator(Report* report);
  ~SortDecorator();
  void reportSort();
  void report();

protected:

private:

};

#endif // DECORATOR_DECORATOR_H_

