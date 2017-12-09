/* global variable declaration */
#include <stdio.h>
int g;

int main ()
{
  int a, b;

  a = 10;
  b = 20;
  g = a + b;

  printf ("value of a = %d, b = %d and g = %d\n", a, b, g);

  return 0;
}
