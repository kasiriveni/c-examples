//<stdlib>
//example shows the usage of abort() function.

#include <stdio.h>
#include <stdlib.h>

int main () {
   FILE *fp;

   printf("Going to open nofile.txt\n");
   fp = fopen( "nofile.txt","r" );
   if(fp == NULL) {
      printf("Going to abort the program\n");
      abort();
   }
   printf("Going to close nofile.txt\n");
   fclose(fp);

   return(0);
}
