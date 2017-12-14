#include<stdio.h>
main()
{
    int number;
    printf("enter an integer number \n");
    scanf("%d",&number);
    if(number<100)
        printf("your number is smaller than 100 \n\n");
    else
        printf("your number contains more than two digits \n");

}
