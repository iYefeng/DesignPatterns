/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 17:49
 * Last modified : 2016-10-04 18:17
 * Filename      : Box.h
 * Description   : 
 * *********************************************************/

#ifndef BRIDGE_BOX_H_
# define BRIDGE_BOX_H_

class BoxImp;

class Box
{
public:
  virtual ~Box() {}
  virtual void operation() = 0;

protected:
  Box() {}

private:

};

class RedefinedBox : public Box
{
public:
  RedefinedBox(BoxImp* imp);
  ~RedefinedBox();
  void operation();
private:
  BoxImp* imp_;
};

#endif // BRIDGE_BOX_H_
