/*C program to check nunber is perfect or not.*/

#include <stdio.h>

int main()
{
    int num,loop;
    int sum;

    printf("Enter an integer number: ");
    scanf("%d",&num);


    sum=0;

    for(loop=1; loop<num;loop++)
    {
        if(num%loop==0)
            sum+=loop;
    }

    if(sum==num)
        printf("%d is a perfect number.",num);
    else
        printf("%d is not a perfect number.",num);

    return 0;
}
