//a program to copy strings
#include <stdio.h>

int main() {
   char s1[] = "TajMahal";
   char s2[8];

   int length = 0;

   while(s1[length] != '\0') {
      s2[length] = s1[length];
      length++;
   }
   s2[length] = '\0';
   printf("Value in s1 = %s \n", s1);
   printf("Value in s2 = %s \n", s2);

   return 0;
}
