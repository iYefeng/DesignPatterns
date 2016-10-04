/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 13:50
 * Last modified : 2016-10-04 13:50
 * Filename      : singleton_test.cc
 * Description   : 
 * *********************************************************/
#include "Singleton.h"

int main(int argc, char *argv[])
{
    Singleton& test = Singleton::instance();
    test.execute();
    return 0;
}
