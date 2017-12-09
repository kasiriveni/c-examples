/* conversion specification %[] for strings 2*/
#include<stdio.h>
main()
{
    char address[80];
    printf("enter address\n");
    scanf("%[^\n]",address);
    printf("%-80s",address);
}
