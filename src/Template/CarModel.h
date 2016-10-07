/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-07 16:00
 * Last modified : 2016-10-07 16:00
 * Filename      : CarModel.h
 * Description   : 
 * *********************************************************/

#ifndef TEMPLATE_CARMODEL_H_
# define TEMPLATE_CARMODEL_H_

class BaseCarModel
{
public:
  virtual ~BaseCarModel() {}
  void run();
  virtual void start() = 0;
  virtual void stop() = 0;

protected:
  BaseCarModel() {}

private:

};

class BenzCarModel : public BaseCarModel
{
public:
  BenzCarModel() {}
  ~BenzCarModel() {}
  void start();
  void stop();

protected:

private:

};


#endif // TEMPLATE_CARMODEL_H_
