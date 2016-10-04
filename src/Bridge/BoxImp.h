/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 17:55
 * Last modified : 2016-10-04 17:55
 * Filename      : BoxImp.h
 * Description   : 
 * *********************************************************/

#ifndef BRIDGE_BOXIMP_H_
# define BRIDGE_BOXIMP_H_

class BoxImp
{
public:
  virtual ~BoxImp() {}
  virtual void operation() = 0;

protected:
  BoxImp() {}

private:

};

class ConcreteBoxImpA : public BoxImp
{
public:
  ConcreteBoxImpA() {}
  ~ConcreteBoxImpA() {}
  void operation();

protected:

private:

};

class ConcreteBoxImpB : public BoxImp
{
public:
  ConcreteBoxImpB() {}
  ~ConcreteBoxImpB() {}
  void operation();

protected:

private:

};

#endif // BRIDGE_BOXIMP_H_
