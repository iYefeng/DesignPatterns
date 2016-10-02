/** 
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 *  
 *    Author: yefeng
 * Create on: Oct 3, 2016
 **/

#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <iostream>
#include <pthread.h>

using namespace std;

class Singleton
{
public:
  static Singleton& instance();
  void execute() 
  {
     cout << "hello world" << endl;
  }

protected:
  Singleton() {}
  ~Singleton() {}

private:
  static void init();
  static void destroy();
  static Singleton *instance_;
  static pthread_once_t ponce_;
};

#endif // SINGLETON_H_
