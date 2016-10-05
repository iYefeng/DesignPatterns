/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-06 04:11
 * Last modified : 2016-10-06 04:11
 * Filename      : DialogBox.cc
 * Description   : 
 * *********************************************************/
#include <iostream>
#include "Picture.h"
#include "DialogBox.h"

using namespace std;

void DialogBox::addPicture(Picture* pic, int width, int height)
{
  PicElement e = {pic, width, height};
  pics_.push_back(e);
}

void DialogBox::draw()
{
  for (size_t i = 0; i < pics_.size(); ++i) {
    PicElement e = pics_[i];
    cout << "Draw picture width=" << e.width << \
      ", height=" << e.height << endl;
    cout << "----";
    e.pic->draw(); 
  }
}
