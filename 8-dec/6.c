/*conversion specification %[] for strings*/
#include<stdio.h>
main()
{
    char address[80];
    printf("enter address\n");
    scanf("%[a-z]",address);
    printf("%-80s\n\n",address);
}

