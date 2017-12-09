/* a program to print given number is even or odd*/
#include <stdio.h>
int main()
{
   int num;

   printf("Enter an integer\n");
   scanf("%d", &num);

   if (num%2 == 0)
      printf("It is an Even number\n");
   else
      printf("It is an Odd number\n");

   return 0;
}
