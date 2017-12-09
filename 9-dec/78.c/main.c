//printing the ASCII values of all uppercase alphabets.
#include<stdio.h>

int main()
{
	int count;
	count= 'A';
	start:
	printf("%c [%d] ",count,count);
	count++;
	if(count <= 'Z')
		goto start;
	return 0;
}
