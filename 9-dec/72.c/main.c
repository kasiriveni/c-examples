//EXAMPLE PROGRAM FOR #IF, #ELSE AND #ENDIF IN C
#include <stdio.h>
#define a 100
int main()
{
   #if (a==100)
   printf("This line will be added in this C file since " \
          "a \= 100\n");
   #else
   printf("This line will be added in this C file since " \
          "a is not equal to 100\n");
   #endif
   return 0;
}
