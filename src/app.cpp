#include <dlfcn.h>
#include <unistd.h>
#include <iostream>
#include "dynlib.hpp"

using namespace std;

int main()
{
  for(;;) {
    print();
    cout << "Going to sleep ..." << endl;
    sleep(3);
    cout << "Waked up ..." << endl;
  }

  return 0;
}
