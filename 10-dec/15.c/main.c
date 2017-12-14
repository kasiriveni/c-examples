//<ctype.h>
//example shows the usage of iscntrl() function.

#include <stdio.h>
#include <ctype.h>

int main () {
   int i = 0, j = 0;
   char str1[] = "all \a about \t programming";
   char str2[] = "c \n coding";

   /* Prints string till control character \a */
   while( !iscntrl(str1[i]) ) {
      putchar(str1[i]);
      i++;
   }

   /* Prints string till control character \n */
   while( !iscntrl(str2[j]) ) {
      putchar(str2[j]);
      j++;
   }

   return(0);
}
