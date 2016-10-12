/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-13 00:39
 * Last modified : 2016-10-13 00:39
 * Filename      : iterator_test.cc
 * Description   : 
 * *********************************************************/
#include <iostream>
#include "Queue.h"

using namespace std;

int main(int argc, char* argv[])
{
  Queue<int> q;
  q.push_back(new Node<int>(new int(12)));
  q.push_back(new Node<int>(new int(3)));
  q.push_back(new Node<int>(new int(-4)));
  q.push_back(new Node<int>(new int(0)));
  q.push_back(new Node<int>(new int(10)));
  q.push_back(new Node<int>(new int(23)));

  shared_ptr<QueueIterator<int>> it = q.iterator();
  while (it->hasNext()) { 
    cout << *(it->next()->value()) << endl;
  }
  it->first();
  while (it->hasNext()) { 
    cout << *(it->next()->value()) << endl;
  }

  return 0;
}
