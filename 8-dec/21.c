/* a program for arithmetic operations*/
#include<stdio.h>
int main()
{
	char op;
	int a,b;
	printf("Enter operator for arithmetic operation: + , - , * , / :\n");
	printf("+ For addition\n - For subtraction\n * For Multiplication\n / For division\n");
	scanf("%c",&op);
	printf("\n Enter any 2 number :");
	scanf("%d%d",&a,&b);
	switch(op)
	{
		case '+':
			printf("\n Addition= %d",a+b);
			break;
		case '-':
			printf("\n Subtraction= %d",a-b);
			break;
		case '*':
			printf("\n Multiplication = %d",a*b);
			break;
		case '/':
			printf("\n Division= %d",a/b);
			break;
		default:
			printf("\n Invalid operator");
			break;
	}
	return 0;
}
