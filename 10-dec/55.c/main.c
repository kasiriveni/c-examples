//<stddef.h>
//example shows the usage of NULL Macro.

#include <stddef.h>
#include <stdio.h>

int main () {
   FILE *fp;

   fp = fopen("file.txt", "r");
   if( fp != NULL ) {
      printf("Opend file file.txt successfully\n");
      fclose(fp);
   }

   fp = fopen("nofile.txt", "r");
   if( fp == NULL ) {
      printf("Could not open file nofile.txt\n");
   }

   return(0);
}
