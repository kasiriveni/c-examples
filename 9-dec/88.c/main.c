/*C program to check nunber is perfect or not.*/

#include <stdio.h>

int isPerfect(int num)
{
    int loop,sum=0;

    for(loop=1; loop<num; loop++)
    {
        if(num%loop==0)
            sum+=loop;
    }

    if(sum==num)
        return 1;
    else
        return 0;
}


int main()
{
    int num,loop;
    int sum;

    printf("Enter an integer number: ");
    scanf("%d",&num);

    if(isPerfect(num))
        printf("%d is a perfect number.",num);
    else
        printf("%d is not a perfect number.",num);

    return 0;
}
