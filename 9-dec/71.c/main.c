// EXAMPLE PROGRAM FOR #IFNDEF AND #ENDIF IN C
#include <stdio.h>
#define RAJU 100
int main()
{
   #ifndef SELVA
   {
      printf("SELVA is not defined. So, now we are going to " \
             "define here\n");
      #define SELVA 300
   }
   #else
   printf("SELVA is already defined in the program”);

   #endif
   return 0;

}
