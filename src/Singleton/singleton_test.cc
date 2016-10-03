/** 
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 *  
 *    Author: yefeng
 * Create on: Oct 3, 2016
 **/
#include "Singleton.h"

int main(int argc, char *argv[])
{
    Singleton& test = Singleton::instance();
    test.execute();
    return 0;
}
