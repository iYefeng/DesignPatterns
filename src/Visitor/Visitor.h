/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-13 23:22
 * Last modified : 2016-10-13 23:22
 * Filename      : Visitor.h
 * Description   : 
 * *********************************************************/

#ifndef VISITOR_VISITOR_H_
# define VISITOR_VISITOR_H_

#include <iostream>

using namespace std;

class Manager;
class Employee;
class ConcreteA;
class ConcreteB;

class Visitor
{
public:
  virtual void visit(ConcreteA* ele) = 0;
  virtual void visit(ConcreteB* ele) = 0;
};

class Element
{
public:
  virtual ~Element() {}
  virtual void accept(Visitor& v) = 0;

protected:
  Element() {}

};

class ConcreteA : public Element
{
public:
  void accept(Visitor& v)
  {
    v.visit(this);
  }
  string concreteAToString()
  {
    return  "ConcreteA";
  }

protected:

private:

};

class ConcreteB : public Element
{
public:
  void accept(Visitor& v)
  {
    v.visit(this);
  }
  string concreteBToString()
  {
    return "ConcreteB";
  }

protected:

private:
};


class Manager : public Visitor
{
public:
  void visit(ConcreteA* ele) 
  {
    cout << "Manager " << ele->concreteAToString() << endl;
  }

  void visit(ConcreteB* ele)
  {
    cout << "Manager " << ele->concreteBToString() << endl;
  }

};

class Employee : public Visitor
{
public:
  void visit(ConcreteA* ele) 
  {
    cout << "Employee " << ele->concreteAToString() << endl;
  }

  void visit(ConcreteB* ele)
  {
    cout << "Employee " << ele->concreteBToString() << endl;
  }

};

#endif // VISITOR_VISITOR_H_
