/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-06 04:05
 * Last modified : 2016-10-06 04:05
 * Filename      : PictureFactory.cc
 * Description   : 
 * *********************************************************/
#include <iostream>
#include "PictureFactory.h"

using namespace std;

PictureFactory::~PictureFactory()
{
  for (map<string, Picture*>::iterator it = pics_.begin(), iend = pics_.end(); it != iend; ++it) {
    delete it->second;
  }
}

Picture* PictureFactory::getPicture(const string& name) 
{
  map<string, Picture*>::iterator it = pics_.find(name);
  if (it != pics_.end()) {
    return it->second;
  } else {
    Picture* tmp = new Picture(name);
    tmp->setWidth(100);
    tmp->setHeight(80);
    pics_.insert(make_pair(name, tmp));
    return tmp;
  }
}

void PictureFactory::reportPicture()
{
  cout << "total pictures:" << endl;
  for (map<string, Picture*>::iterator it = pics_.begin(), iend = pics_.end(); it != iend; ++it) {
    it->second->draw();
  }
}
