/*a program to reading integer using scanf*/
#include<stdio.h>
main()
{
    int a,b,c,x,y,z;
    int p,q,r;
    printf("enter three integer numbers \n");
    scanf("%d %*d %d",&a,&b,&c);
    printf("%d %d %d\n\n",a,b,c);
    printf("enter the four digits numbers \n");
    scanf("%2d %4d",&x,&y);
    printf("%d %d",x,y);
    printf("\n enter two integers\n");
    scanf("%d %d",&a,&x);
    printf("%d %d",a,x);
    printf("\n enter a nine digits number \n\n");
    scanf("%3d %4d %3d",&p,&q,&r);
    printf("%d %d %d \n \n \n ",p,q,r);
    printf("\n enter two 3 digits number");
    scanf("%d %d ",&x,&y);
    printf("%d %d",x,y);
}
