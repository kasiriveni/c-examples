/*a c program on round-off errors in floating point computations*/
#include<stdio.h>
main()
{
    float sum,n,term;
    int count=1;
    sum=0;
    printf("Enter the value of  n\n");
    scanf("%f",&n);
    term=1.0/n;
    while(count<=n)
    {
        sum=sum+term;
        count++;
    }
    printf("sum=%f\n",sum);
}
