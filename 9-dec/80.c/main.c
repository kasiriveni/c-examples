//Program to print name (string) 10 times using goto in C
#include<stdio.h>

int main()
{
	int count;
	char name[50];

	printf("Enter the name: ");
	scanf("%s",name);

	count=1;

	start:
	printf("%s, ",name);
	count++;
	if(count<=10)
		goto start;

	return 0;
}
