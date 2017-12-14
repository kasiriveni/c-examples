//string.h
// example shows the usage of strstr() function.

#include <stdio.h>
#include <string.h>


int main () {
   const char haystack[20] = "fully tiered";
   const char needle[10] = "fully";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);

   return(0);
}
