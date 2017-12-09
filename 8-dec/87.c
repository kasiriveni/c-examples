//a program to compare two strings
#include <stdio.h>
int main()
{
   char s1[] = "advise";
   char s2[] = "advice";
  int n = 0;
   unsigned short flag = 1;

   while (s1[n] != '\0')
    {
      if(s1[n] != s2[n])
      {
         flag = 0;
         break;
      }
      n++;
   }

   if(flag == 1) {
      printf("%s and %s are identical\n", s1, s2);
   }else {
      printf("%s and %s are NOT identical\n", s1, s2);
   }

   return 0;
}
