/* a program using a user defined function*/
#include<stdio.h>
int mul(int a,int b);
int p;
main()
{
    int a,b,c;
    a=5;
    b=10;
    c=mul(a,b);
    printf("multiplication of %d and %d is %d",a,b,c);
}
int mul(int x,int y)
{
    p=x*y;
    return(p);
}
