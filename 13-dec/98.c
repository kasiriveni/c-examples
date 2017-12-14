/* a c program on quadratic  equation*/
#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,discriminant,root1,root2;
    printf("input values of a,b,and c\n");
    scanf("%f %f %f",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if(discriminant<0)
        printf("\n \n Roots are imaginary\n");
    else
    {
     root1=(-b+sqrt(discriminant))/(2.0*a);
     root2=(-b-sqrt(discriminant))/(2.0*a);
     printf("\n \n root1=%5.2f\n \n root2=%5.2f\n",root1,root2);

    }
}
