//<stdio.h>
//example shows the usage of tmpfile() function.

#include <stdio.h>

int main () {
   FILE *fp;

   fp = tmpfile();
   printf("Temporary file created\n");

   fclose(fp);

   return(0);
}

