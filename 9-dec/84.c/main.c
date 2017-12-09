/* program to find sum and product of all digits of a number.*/
#include <stdio.h>
int main()
{
    int n;
    int dig, sum,pro;
    printf("\nEnter an integer number :");
    scanf("%d",&n);
    sum=0;
    pro=1;
    while(n>0)
    {
        dig=n%10;
        sum=sum+dig;
        pro=pro*dig;
        n=n/10;
    }

    printf("\nSUM of all Digits is : %d",sum);
    printf("\nPRODUCT of all digits: %d",pro);

    return 0;
}
