//Give a number (N) and we have to print its table using C program.
#include<stdio.h>

int main()
{

	int count,t,r;
	printf("Enter number: ");
	scanf("%d",&t);

	count=1;

	start:
	if(count<=10)
	{
		r=t*count;
		printf("%d*%d=%d\n",t,count,r);
		count++;
		goto start;
	}

	return 0;
}
