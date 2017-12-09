/* a program to displaying grade based on marks*/
#include<stdio.h>
int main()
{
    int marks,i;
    printf("\n enter the marks\n");
    scanf("%d",&marks);
    i=marks/10;
    switch(i)
    {
    case 10:
    case 9:
        printf("your grade is O");
        break;
    case 8:
        printf("your grade is E");
        break;
    case 7:
        printf("your grade is A");
        break;
    case 6:
        printf("your grade is B");
        break;
    case 5:
        printf("your grade is C");
        break;
    case 4:
        printf("your grade is D");
        break;
    case 3:
    case 2:
    case 1:
    case 0:
        printf("fail");
    default:
        printf("invalid range");
        break;
    }
    return 0;
}
