/* a  program to decide the sides from a square or rectangle*/
#include<stdio.h>
int main()
{
    int side1,side2,side3,side4;
    printf("enter the sides ");
    scanf("%d %d %d %d",&side1,&side2,&side3,&side4);
    if(side1==side2&&side2==side3&&side3==side4&&side4==side1)
        printf("the sides form the square");
    else if(side1==side3&&side2==side4)
        printf("the sides form the rectngle");
    else
        printf("it does not form rectangle and square");
    return 0;

}
