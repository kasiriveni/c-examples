//string program to count vowels
#include <stdio.h>

int main()
 {
   char s[] = "TajMahal";
   int i = 0;
   int vowels = 0;
   int consonants = 0;

   while(s[i++] != '\0') {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
         vowels++;
      else
         consonants++;
   }

   printf("'%s' contains %d vowels and %d consonants.", s, vowels, consonants);

   return 0;
}

