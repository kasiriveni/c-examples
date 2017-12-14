//<stdio.h>
//example shows the usage of fwrite() function.

#include<stdio.h>

int main () {
   FILE *fp;
   char str[] = "wellcome to new world";

   fp = fopen( "file.txt" , "w" );
   fwrite(str , 1 , sizeof(str) , fp );

   fclose(fp);

   return(0);
}
