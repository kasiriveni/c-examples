//<stdio.h>
//example shows the usage of rewind() function.

#include <stdio.h>

int main () {
   char str[] = "tomorrow onwards college starts to horrible ";
   FILE *fp;
   int ch;
   fp = fopen( "file.txt" , "w" );
   fwrite(str , 1 , sizeof(str) , fp );
   fclose(fp);

   fp = fopen( "file.txt" , "r" );
   while(1) {
      ch = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }
      printf("%c", ch);
   }
   rewind(fp);
   printf("\n");
   while(1) {
      ch = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }
      printf("%c", ch);

   }
   fclose(fp);

   return(0);
}
