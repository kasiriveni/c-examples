/* Write a C program to accept a string and find the sum of *
*  all digits present in the string                         */
#include <stdio.h>
void main()
{
char string[80];
int count,nc=0,sum=0;

printf("Enter the string containing both digits and alphabet\n");
scanf("%s",string);

for(count=0;string[count]!='\0'; count++)
{
if((string[count]>='0') && (string[count]<='9'))
{
nc += 1;
sum += (string[count] - '0');
}
}

printf("NO. of Digits in the string=%d\n",nc);
printf("Sum of all digits=%d\n",sum);

}
