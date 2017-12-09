//EXAMPLE PROGRAM FOR UNDEF IN C LANGUAGE
#include <stdio.h>

#define height 100
void main()
{
   printf("First defined value for height    : %d\n",height);
   #undef height
   #define height 600
   printf("value of height after undef \& redefine:%d",height);
}
