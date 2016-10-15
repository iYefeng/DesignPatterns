/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-15 17:34
 * Last modified : 2016-10-15 17:34
 * Filename      : mediator_test.cc
 * Description   : 
 * *********************************************************/
#include <iostream>
#include "Mediator.h"

using namespace std;

int main(int argc, char* argv[])
{
  srand(time(NULL));

  Mediator mediator;
  cout << "----------purchase 250---------" << endl;
  Purchase purchase = Purchase(&mediator);
  purchase.buyProduct(250);
  
  cout << "---------Sale sell 100---------" << endl;
  Sale sale = Sale(&mediator);
  sale.sellProduct(100);

  cout << "----------clear stock----------" << endl;
  Stock stock = Stock(&mediator);
  stock.clearStock();

}
