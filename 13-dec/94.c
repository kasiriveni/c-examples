/*a program to evaluation of expressions*/
#include<stdio.h>
main()
{
    float a,b,c,x,y,z;
    a=9;
    b=12;
    c=3;
    x=a-b/3+c*2-1;
    y=a-b/(3+c)*(2-1);
    z=a-(b/(3+c)*2)-1;
    printf("x %f\n",x);
    printf("y %f\n",y);
    printf("z %f\n",z);

}
