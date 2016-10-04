/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 12:54
 * Last modified : 2016-10-04 13:37
 * Filename      : Product.h
 * Description   : 
 * *********************************************************/

#ifndef PRODUCT_H_
# define PRODUCT_H_

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class BaseProduct
{
public:
  virtual ~BaseProduct() = 0;
  virtual void run() = 0;

protected:
  BaseProduct() {}

private:

};

class Car : public BaseProduct
{
public:
  ~Car() {}
  virtual void start() = 0;
  virtual void stop() = 0;
  virtual void alarm() = 0;
  virtual void engineBoom() = 0;
  void run();
  void setSequence(vector<string>& seq);

protected:
  Car() {}

private:
  vector<string> sequence_;
};

class BenzCar : public Car
{
public:
  BenzCar() {}
  ~BenzCar() {}
  void start() {
    cout << "Benz starting ..." << endl;
  }
  void stop() {
    cout << "Benz stopping ..." << endl;
  }
  void alarm() {
    cout << "Benz alarm !!!" << endl;
  }
  void engineBoom() {
    cout << "Benz's engine is booming." << endl;
  }

protected:

private:

};

class BMWCar : public Car
{
public:
  BMWCar() {}
  ~BMWCar() {}
  void start() {
    cout << "BMW starting ..." << endl;
  }
  void stop() {
    cout << "BMW stopping ..." << endl;
  }
  void alarm() {
    cout << "BMW alarm !!!" << endl;
  }
  void engineBoom() {
    cout << "BMW's engine is booming." << endl;
  }

protected:

private:

};

#endif // PRODUCT_H_

