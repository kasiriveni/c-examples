// a program on both local and global variable has same names
#include <stdio.h>

int g = 20;

int main ()
{
  int g = 10;

  printf ("value of g = %d\n",  g);

  return 0;
}
