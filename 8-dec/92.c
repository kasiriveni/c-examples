//a program to reverse copy array
#include <stdio.h>

int main() {
   int original[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int copied[10];
   int loop, count;

   count = 9;

   for(loop = 0; loop < 10; loop++) {
      copied[count] = original[loop];
      count--;
   }

   printf("original -> copied \n");

   for(loop = 0; loop < 10; loop++) {
      printf("   %2d        %2d\n", original[loop], copied[loop]);
   }


   return 0;
}
