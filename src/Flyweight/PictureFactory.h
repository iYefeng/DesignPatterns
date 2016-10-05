/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-06 04:00
 * Last modified : 2016-10-06 04:00
 * Filename      : PictureFactory.h
 * Description   : 
 * *********************************************************/

#ifndef FLYWEIGHT_PICTUREFACTORY_H_
#define FLYWEIGHT_PICTUREFACTORY_H_

#include <map>
#include <string>
#include "Picture.h"

using namespace std;

class PictureFactory
{
public:
  ~PictureFactory();
  Picture* getPicture(const string& name);
  void reportPicture();

protected:

private:
  map<string, Picture*> pics_;
};

#endif // FLYWEIGHT_PICTUREFACTORY_H_
