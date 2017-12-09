//Given the value of N and we have to print all number from 1 to N using C program
#include <stdio.h>

int main()
{

	int count,n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	count =1;

	start:
	printf("%d ",count);
	count++;

	if(count<=n)
		goto start;

	return 0;
}
