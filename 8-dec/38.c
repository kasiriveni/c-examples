/*a program on conditional operator*/
#include <stdio.h>
int main(){
   char February;
   int days;
   printf("If this year is leap year, enter 1. If not enter any integer: ");
   scanf("%c",&February);
   days = (February == '1') ? 29 : 28;

   printf("Number of days in February = %d",days);
   return 0;
}
