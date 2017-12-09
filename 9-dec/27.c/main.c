//pointer substraction
#include <stdio.h>

int main()
{
   int first, second, *p, *q, diff;

   printf("Enter two integers for subtraction\n");
   scanf("%d%d", &first, &second);

   p = &first;
   q = &second;

   diff = *p -*q;

   printf("difference of entered numbers = %d\n",diff);

   return 0;
}
