/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-06 05:10
 * Last modified : 2016-10-06 05:10
 * Filename      : Facade.h
 * Description   : 
 * *********************************************************/

#ifndef FACADE_FACADE_H_
# define FACADE_FACADE_H_

#include <iostream>

using namespace std;

class Scanner
{
public:
  void doSomething()
  {
    cout << "Scanner do something ... " << endl;
  }
  
};

class Parser
{
public:
  void parseString() 
  {
    cout << "start parse string ..." << endl;   
  }
};

class Compiler
{
public:
  void compile() 
  {
    scanner.doSomething();
    parser.parseString();
  }

private:
  Scanner scanner;
  Parser parser;

};

#endif // FACADE_FACADE_H_
