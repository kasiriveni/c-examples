// program to adding numbers using call by reference
#include <stdio.h>

long add(long *, long *);

int main()
{
   long first, second, *p, *q, sum;

   printf("Input two integers to add\n");
   scanf("%ld%ld", &first, &second);

   sum = add(&first, &second);

   printf("(%ld) + (%ld) = (%ld)\n", first, second, sum);

   return 0;
}

long add(long *x, long *y) {
   long sum;

   sum = *x + *y;

   return sum;
}
