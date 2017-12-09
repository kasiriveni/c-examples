//program to print string length without function in c
#include <stdio.h>
int main()
{
   char s1[] = "TajMahal";
   int i = 0;

   while(s1[i] != '\0') {
      i++;
   }

   printf("Length of string '%s' is %d", s1, i);

   return 0;
}
