/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 12:55
 * Last modified : 2016-10-04 12:55
 * Filename      : Builder.h
 * Description   : 
 * *********************************************************/

#ifndef BUILDER_H_
# define BUILDER_H_

#include "Product.h"

class CarBuilder
{
public:
  virtual ~CarBuilder() = 0;
  virtual void setSequence(vector<string>& seq) = 0;
  virtual Car& getCar() = 0;

protected:
  CarBuilder() {}
};

class BenzBuilder : public CarBuilder
{
public:
  BenzBuilder();
  ~BenzBuilder();
  void setSequence(vector<string>& seq);
  Car& getCar();

private:
  BenzCar* benz_;
};

class BMWBuilder : public CarBuilder
{
public:
  BMWBuilder();
  ~BMWBuilder();
  void setSequence(vector<string>& seq);
  Car& getCar();

private:
  BMWCar* bmw_;

};

#endif // BUILDER_H_
