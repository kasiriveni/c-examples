//a program to print simple interest
#include<stdio.h>
main()
{
float SI,P,N,R;
printf("Enter Radius: ");
scanf("%f%f%f",&P,&N,&R);
SI=(P*N*R)/100;
printf("Area of the given is : %6.2f",SI);
}
