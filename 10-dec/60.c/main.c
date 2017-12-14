//<stdio.h>
//example shows the usage of fgetpos() function.

#include <stdio.h>

int main () {
   FILE *fp;
   fpos_t position;

   fp = fopen("file.txt","w+");
   fgetpos(fp, &position);
   fputs("Hello, World!", fp);

   fsetpos(fp, &position);
   fputs("This is going to override previous content", fp);
   fclose(fp);

   return(0);
}
