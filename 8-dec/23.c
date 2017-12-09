/*a program to print largest number from given three numbers using if else*/
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values for a and b and c");
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c))
    printf("the largest =%d",a);
else if(b>c)
    printf("the largest =%d",b);
else
    printf("the largest =%d",c);
return 0;
}
