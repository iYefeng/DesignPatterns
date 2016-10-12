/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-10 23:27
 * Last modified : 2016-10-13 00:42
 * Filename      : Queue.h
 * Description   : 
 * *********************************************************/

#ifndef ITERATOR_QUEUE_H_
# define ITERATOR_QUEUE_H_

#include <iostream>
#include <memory>
#include <stdlib.h>

using namespace std;

template <class T>
class Queue;

template <class T>
class QueueIterator;

template <class T>
class Node
{
public:
  typedef shared_ptr<Node<T>> NodePtr;
  Node(T* val)
    : next_(NULL),
      val_(val)
  {}
  ~Node()
  {
    cout << "~Node" << endl;
    delete val_;
  }
  T* value()
  {
    return val_;
  }

private:
  friend class Queue<T>;
  friend class QueueIterator<T>;
  NodePtr next_;
  T* val_;
};

template <class T>
class Queue
{
public:
  typedef shared_ptr<Node<T>> NodePtr;
  Queue()
    : sp_(0),
      root_(NULL),
      tail_(NULL)
  {}
  ~Queue()
  {
    NodePtr tmp;
    while (root_ != NULL) {
      tmp = root_->next_;
      root_ = tmp;
    }
  }
  shared_ptr<QueueIterator<T>> iterator()
  {
    return shared_ptr<QueueIterator<T>>(new QueueIterator<T>(this));
  }
  bool push_back(Node<T>* node)
  {
    sp_ ++;
    NodePtr tmp = NodePtr(node);
    if (tail_ == NULL) {
      root_ = tmp;
      tail_ = tmp;
    } else {
      tail_->next_ = tmp;
      tail_ = tmp;
    }
    return true;
  }
  NodePtr pop_front()
  {
    if (root_ != NULL) {
      sp_ --;
      NodePtr tmp = root_;
      root_ = root_->next_;
      return tmp;
    } else {
      return NULL;
    }
  }

private:
  friend class QueueIterator<T>;
  size_t sp_;
  NodePtr root_;
  NodePtr tail_;
};

template <class T>
class QueueIterator
{
public:
  typedef shared_ptr<Node<T>> NodePtr;
  QueueIterator(Queue<T>* q) 
    : queue_(q),
      current_(q->root_)
  {}
  void first()
  {
    current_ = queue_->root_;
  }

  bool hasNext()
  {
    return current_ != NULL;
  }

  NodePtr next()
  {
    NodePtr tmp = current_;
    current_ = current_->next_;
    return tmp;
  }

private:
  Queue<T>* queue_;
  NodePtr current_;
};

#endif // ITERATOR_QUEUE_H_
