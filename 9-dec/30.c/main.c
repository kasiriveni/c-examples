// program to difference numbers using call by reference
#include <stdio.h>

long sub(long *, long *);

int main()
{
   long first, second, *p, *q, diff;

   printf("Input two integers for difference\n");
   scanf("%ld%ld", &first, &second);

   diff = sub(&first, &second);

   printf("(%ld) - (%ld) = (%ld)\n", first, second, diff);

   return 0;
}

long sub(long *x, long *y) {
   long diff;

   diff = *x - *y;

   return diff;
}

