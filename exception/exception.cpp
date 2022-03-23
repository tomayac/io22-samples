#include <stdio.h>

int main(void)
{
  try
  {
    puts("throw...");
    throw 1;
    puts("(never reached)");
  }
  catch (...)
  {
    puts("catch!");
  }
  return 0;
}
