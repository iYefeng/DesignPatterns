/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-06 23:00
 * Last modified : 2016-10-06 23:00
 * Filename      : Image.cc
 * Description   : 
 * *********************************************************/
#include <iostream>
#include "Image.h"

using namespace std;

void Image::draw()
{
  cout << "name:" << name_ << " , width: " << width_ \
    << " , height: " << height_ << endl; 
}

Image* Image::loadAnImageFile(const string& name) 
{
  Image* tmp = new Image(name);
  tmp->width_ = 100;
  tmp->height_ = 80;
  return tmp;
}

Image* ImagePtr::operator->()
{
  return loadImage();
}

Image& ImagePtr::operator*()
{
  return *loadImage();
}

Image* ImagePtr::loadImage()
{
  if (pImg_ != NULL) {
    return pImg_;
  } else {
    pImg_ = Image::loadAnImageFile(name_);
    return pImg_;
  }
}


