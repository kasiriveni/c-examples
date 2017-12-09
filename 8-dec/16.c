/* else if ladder*/
#include <stdio.h>
int main() {
	int num;
	printf("Enter a integer numbers:");
	scanf("%d",&num);

	if(num > 0)
		printf("Number is positive\n");
	else if(num < 0)
		printf("Number is Negative\n");
	else
		printf("Number is Zero\n");
	return 0;
}
