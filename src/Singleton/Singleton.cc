/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 13:50
 * Last modified : 2016-10-04 13:50
 * Filename      : Singleton.cc
 * Description   : 
 * *********************************************************/
#include "Singleton.h"

#include <stdlib.h>

Singleton* Singleton::instance_ = NULL;
pthread_once_t Singleton::ponce_ = PTHREAD_ONCE_INIT;

Singleton& Singleton::instance()
{
  ::pthread_once(&ponce_, init);
  return *instance_;
}

void Singleton::init()
{
  instance_ = new Singleton();
  ::atexit(destroy);
}

void Singleton::destroy()
{
  delete instance_;
  instance_ = NULL;
}
