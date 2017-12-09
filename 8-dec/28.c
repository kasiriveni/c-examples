/* a program to find the given number is leaap year or not*/
#include<stdio.h>
int main()
{
	int year;
	printf("Enter value of a year :");
	scanf("%d",&year);
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
	printf("\n The year is leap year");
	else
	printf("\n The year is not a leap year");
	return 0;
}
