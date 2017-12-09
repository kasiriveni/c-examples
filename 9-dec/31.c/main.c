// program to multiplying numbers using call by reference
#include <stdio.h>

long mul(long *, long *);

int main()
{
   long first, second, *p, *q, product;

   printf("Input two integers to multiplication\n");
   scanf("%ld%ld", &first, &second);

   product = mul(&first, &second);

   printf("(%ld) * (%ld) = (%ld)\n", first, second, product);

   return 0;
}

long mul(long *x, long *y) {
   long product;

   product = *x * *y;

   return product;
}

