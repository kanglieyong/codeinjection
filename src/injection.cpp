#include <stdlib.h>

extern "C" void print();

extern "C" void injection()
{
  print();
  system("date");
}
