/*average of N numbers */
//#define N 10
#include<stdio.h>
main()
{
    int count,n;
    float sum, average,number;
    sum=0;
    printf("number upto u wnt");
    scanf("%d",&n);
    for(count=0;count<=n;count++)
    {
        printf("enter the number");
        scanf("%f",&number);
        sum=sum+number;
    }
    average=sum/n;
    printf("N =%d sum=%f",n,sum);
    printf("Average =%f",average);
}

