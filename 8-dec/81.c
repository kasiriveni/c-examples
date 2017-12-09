// a string program to count characters
#include <stdio.h>

int main() {
   char s[] = "TajMahal";
   char ch = 'a';

   int i = 0;
   int count = 0;

   while(s[i] != '\0')
    {
      if(s[i] == ch)
         count++;

      i++;
   }

   if(count > 0)
    {
      if(count == 1)
         printf("%c appears %d time in '%s'", ch, count, s);
      else
         printf("%c appears %d times in '%s'", ch, count, s);
   }else
      printf("%c did not appear in %s", ch, s);

   return 0;
}
