/*displaying digit in the word format*/
#include<stdio.h>
int main()
{

	int digit;
	printf("Enter one digit ");
	scanf("%d",&digit);
	switch(digit){
		case 0: printf("It is zero\n");
		break;
		case 1: printf("It is one\n");
		break;
		case 2: printf("It is two\n");
		break;
		case 3: printf("It is three\n");
		break;
		case 4: printf("It is four\n");
		break;
		case 5: printf("It is five\n");
		break;
		case 6: printf("It is six\n");
		break;
		case 7: printf("It is seven\n");
		break;
		case 8: printf("It is eight\n");
		break;
		case 9: printf("It is nine\n");
		break;
		default: printf("Invalid digit\n");
	}
	return 0;
	}
