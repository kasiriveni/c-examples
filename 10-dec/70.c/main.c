//<stdio.h>
//example shows the usage of tmpnam() function.

#include <stdio.h>

int main () {
   char buffer[L_tmpnam];
   char *ptr;

   tmpnam(buffer);
   printf("Temporary name 1: %s\n", buffer);

   ptr = tmpnam(NULL);
   printf("Temporary name 2: %s\n", ptr);

   return(0);
}
