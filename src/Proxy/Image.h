/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-06 22:51
 * Last modified : 2016-10-06 22:51
 * Filename      : Image.h
 * Description   : 
 * *********************************************************/

#ifndef PROXY_IMAGE_H_
# define PROXY_IMAGE_H_

#include <string>
#include <stdlib.h>

using namespace std;

class Image
{
public:
  Image(const string& name) 
    : name_(name)
  {}
  ~Image() {}
  void draw();
  static Image* loadAnImageFile(const string& name);
  
protected:

private:
  string name_;
  int width_;
  int height_;

};


class ImagePtr
{
public:
  ImagePtr(const string& name) 
    : name_(name),
      pImg_(NULL)
  {}

  ~ImagePtr()
  {
    if (pImg_ != NULL) {
      delete pImg_;
      pImg_ = NULL;
    }
  }

  Image* operator->();
  Image& operator*();

protected:
  

private:
  Image* loadImage();

  string name_;
  Image* pImg_;
};

#endif // PROXY_IMAGE_H_
