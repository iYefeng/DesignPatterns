/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 12:54
 * Last modified : 2016-10-04 13:37
 * Filename      : builder_test.cc
 * Description   : 
 * *********************************************************/

#include "Director.h"

int main(int argc, char* argv[])
{
  Director director;
  
  for (size_t i = 0; i < 10; ++i) {
    director.getBenzA().run();
  }
  for (size_t i = 0; i < 10; ++i) {
    director.getBenzB().run();
  }
  for (size_t i = 0; i < 10; ++i) {
    director.getBMWA().run();
  }
  for (size_t i = 0; i < 10; ++i) {
    director.getBMWB().run();
  }

  return 0;
}
