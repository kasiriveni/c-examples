//<stdio.h>
//example shows the usage of vfprintf() function.

#include <stdio.h>
#include <stdarg.h>

void WriteFrmtd(FILE *stream, char *format, ...)
 {
   va_list args;

   va_start(args, format);
   vfprintf(stream, format, args);
   va_end(args);
}

int main () {
   FILE *fp;

   fp = fopen("file.txt","w");

   WriteFrmtd(fp, "This is just one argument %d \n", 10);

   fclose(fp);

   return(0);
}
