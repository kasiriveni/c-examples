/* Write a C program to accept an array of 10 elements and swap 3rd  *
 *  element with 4th element using pointers. And display the results */
#include <stdio.h>

void main()
{

float x[10];
int i,n;

void swap34(float *ptr1, float *ptr2 );

printf("How many Elements...\n");

scanf("%d", &n);

printf("Enter Elements one by one\n");

for(i=0;i<n;i++)
{
scanf("%f",x+i);
}

swap34(x+2, x+3);

printf("\nResultant Array...\n");
for(i=0;i<n;i++)
{
printf("X[%d] = %f\n",i,x[i]);
}
}

void swap34(float *ptr1, float *ptr2 )
{
float temp;

temp = *ptr1;
*ptr1 = *ptr2;
*ptr2 = temp;
}
