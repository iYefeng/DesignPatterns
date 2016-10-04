/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 12:55
 * Last modified : 2016-10-04 12:55
 * Filename      : Builder.cc
 * Description   : 
 * *********************************************************/

#include "Builder.h"

CarBuilder::~CarBuilder() {}

BenzBuilder::BenzBuilder()
  : benz_(new BenzCar())
{
}

BenzBuilder::~BenzBuilder()
{
  delete benz_;
}

void BenzBuilder::setSequence(vector<string>& seq) 
{
  benz_->setSequence(seq);
}

Car& BenzBuilder::getCar() 
{
  return *benz_;
}

BMWBuilder::BMWBuilder()
  : bmw_(new BMWCar)
{
}

BMWBuilder::~BMWBuilder()
{
  delete bmw_;
}

void BMWBuilder::setSequence(vector<string>& seq)
{
  bmw_->setSequence(seq);
}

Car& BMWBuilder::getCar()
{
  return *bmw_;
}


