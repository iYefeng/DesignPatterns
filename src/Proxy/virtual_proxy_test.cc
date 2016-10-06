/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-06 23:07
 * Last modified : 2016-10-06 23:07
 * Filename      : virtual_proxy_test.cc
 * Description   : 
 * *********************************************************/

#include "Image.h"

int main(int argc, char* argv[])
{
  ImagePtr image = ImagePtr("hello_world");
  image->draw();
  (*image).draw();
  return 0;
}
