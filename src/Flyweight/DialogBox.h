/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-06 03:48
 * Last modified : 2016-10-06 03:48
 * Filename      : DialogBox.h
 * Description   : 
 * *********************************************************/

#ifndef FLYWEIGHT_DIALOG_H_
# define FLYWEIGHT_DIALOG_H_

#include <vector>
#include "Picture.h"

using namespace std;

class DialogBox
{
public:
  void addPicture(Picture* pic, int width, int height);
  void draw();

protected:

private:
  struct PicElement {
    Picture* pic;
    int width;
    int height;
  };
  vector<PicElement> pics_;
};

#endif // FLYWEIGHT_DIALOG_H_
