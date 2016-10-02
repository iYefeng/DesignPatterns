#include "Singleton.h"

int main(int argc, char *argv[])
{
    Singleton& test = Singleton::instance();
    test.execute();
    return 0;
}
