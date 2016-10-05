/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-06 03:34
 * Last modified : 2016-10-06 03:34
 * Filename      : Picture.h
 * Description   : 
 * *********************************************************/

#ifndef FLYWEIGHT_PICTURE_H_
#define FLYWEIGHT_PICTURE_H_

#include <iostream>
#include <string>


using namespace std;

class Picture
{
public:
  Picture(string name) 
    : name_(name)
  {
  }

  ~Picture() {}

  void setWidth(int width) 
  {
    width_ = width;
  }

  void setHeight(int height)
  {
    height_ = height;
  }

  void draw() {
    cout << "picture (name:" << name_ << ", width:" \
      << width_ << ", height: " << height_ << ")" << endl;
  }

protected:

private:
  string name_;
  int width_;
  int height_;

};


#endif // FLYWEIGHT_PICTURE_H_
