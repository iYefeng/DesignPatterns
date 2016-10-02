#include "Singleton.h"

#include <stdlib.h>

Singleton* Singleton::instance_ = NULL;
pthread_once_t Singleton::ponce_ = PTHREAD_ONCE_INIT;

Singleton& Singleton::instance()
{
  ::pthread_once(&ponce_, init);
  return *instance_;
}

void Singleton::init()
{
  instance_ = new Singleton();
  ::atexit(destroy);
}

void Singleton::destroy()
{
  delete instance_;
  instance_ = NULL;
}
