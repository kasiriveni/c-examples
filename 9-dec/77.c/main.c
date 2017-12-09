//printing the ASCII values of all lowercase alphabets.
#include<stdio.h>

int main()
{

	int count;
	count= 'a';
	start:
	printf("%c [%d] ",count,count);
	count++;
	if(count <= 'z')
		goto start;
	return 0;
}
