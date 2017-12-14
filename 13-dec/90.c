/* a program on interactive investment program*/
#include<stdio.h>
main()
{
    int year,period;
    float amount,value,inrate;
    printf("input amount,interest rate,and period \n\n");
    scanf("%f %f %d",&amount,&inrate,&period);
    printf("\n");
    year=1;
    while(year<=period)
    {
        value=amount+inrate*amount;
        printf("%2d %8.2f \n",year,value);
        amount=value;
        year=year+1;
    }
}
