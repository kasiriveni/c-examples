/* a program to find the given triangle is equilateral ,isosceles,scalene*/
#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("Enter three sides of the triangle");
	scanf("%d%d%d",&side1,&side2,&side3);
	if(side1==side2&&side2==side3)
		printf("The triangle is equilateral");
	else if(side1==side2||side2==side3||side3==side1)
		printf("The triangle is isosceles");
	else
		printf("The triangle is scalene");
	return 0;
}
