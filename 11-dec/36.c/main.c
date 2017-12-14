/*
 * C Program to Find Volume and Surface Area of Sphere
 */
 #include <stdio.h>
#include <math.h>

int main()
{

    float radius;
    float surface_area, volume;

    printf("Enter radius of the sphere : \n");
    scanf("%f", &radius);
    surface_area =  4 * (22/7) * radius * radius;
    volume = (4.0/3) * (22/7) * radius * radius * radius;
    printf("Surface area of sphere is: %.3f", surface_area);
    printf("\n Volume of sphere is : %.3f", volume);
    return 0;
}
