//<stdio.h>
//example shows the usage of ungetc() function.

#include <stdio.h>

int main () {
   FILE *fp;
   int c;
   char buffer [256];

   fp = fopen("file.txt", "r");
   if( fp == NULL ) {
      perror("Error in opening file");
      return(-1);
   }
   while(!feof(fp)) {
      c = getc (fp);
      /* replace ! with + */
      if( c == '!' ) {
         ungetc ('+', fp);
      } else {
         ungetc(c, fp);
      }
      fgets(buffer, 255, fp);
      fputs(buffer, stdout);
   }
   return(0);
}
