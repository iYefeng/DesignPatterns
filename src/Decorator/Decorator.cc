/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 20:29
 * Last modified : 2016-10-04 20:29
 * Filename      : Decorator.cc
 * Description   : 
 * *********************************************************/

#include <stdlib.h>
#include <iostream>
#include "Decorator.h"

using namespace std;

Decorator::Decorator(Report* report)
{
  report_ = report;
}

Decorator::~Decorator()
{
  cout << "~Decorator" << endl;
  if (report_ != NULL) {
    cout << "delete decorator report" << endl;
    delete report_;
    report_ = NULL;
  }
}

void Decorator::report()
{
  report_->report();
}

void Decorator::sign(string name)
{
  report_->sign(name);
}

HighScoreDecorator::HighScoreDecorator(Report* report)
  : Decorator(report)
{
}

HighScoreDecorator::~HighScoreDecorator() 
{
  cout << "~HighScoreDecorator" << endl;
}

void HighScoreDecorator::reportHighScore()
{
  cout << "本次考试语文最高是 75，数学是78，自然是80" << endl;
}

void HighScoreDecorator::report()
{
  reportHighScore();
  Decorator::report();
}

SortDecorator::SortDecorator(Report* report)
  : Decorator(report)
{
}

SortDecorator::~SortDecorator()
{
  cout << "~SortDecorator" << endl;
}

void SortDecorator::reportSort()
{
  cout << "我的排名是第38名..." << endl;
}

void SortDecorator::report()
{
  Decorator::report();
  reportSort();
}


