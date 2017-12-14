//<stdio.h>
//example shows the usage of freopen() function.

#include <stdio.h>

int main () {
   FILE *fp;

   printf("This text is redirected to stdout\n");

   fp = freopen("file.txt", "w+", stdout);

   printf("This text is redirected to file.txt\n");

   fclose(fp);

   return(0);
}
