// a program on both local and global variable has same names accesing global variables

#include <stdio.h>

int g = 20;

int main ()
{
  int g = 10;
  int a;
  {

   extern int g;
    a=g;
  printf ("value of g = %d\n",  a);
  }
  return 0;
}
