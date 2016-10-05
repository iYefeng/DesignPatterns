/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-06 04:20
 * Last modified : 2016-10-06 04:20
 * Filename      : flyweight_test.cc
 * Description   : 
 * *********************************************************/
#include "DialogBox.h"
#include "Picture.h"
#include "PictureFactory.h"

int main(int argc, char* argv[])
{
  PictureFactory pfac;
  DialogBox dialogbox;
  Picture* img;

  img = pfac.getPicture("dog");
  dialogbox.addPicture(img, 60, 40); // add first img1
  
  img = pfac.getPicture("cat");
  dialogbox.addPicture(img, 200, 160); // add second img1

  img = pfac.getPicture("elephant");
  dialogbox.addPicture(img, 800, 600);
  
  img = pfac.getPicture("dog");
  dialogbox.addPicture(img, 40, 30);

  dialogbox.draw();
  pfac.reportPicture();

  return 0;
}
