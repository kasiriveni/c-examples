// pointers multipilication
#include <stdio.h>

int main()
{
   int first, second, *p, *q, mul;

   printf("Enter two integers for multipilication\n");
   scanf("%d%d", &first, &second);

   p = &first;
   q = &second;

   mul = *p * *q;

   printf("difference of entered numbers = %d\n",mul);

   return 0;
}
