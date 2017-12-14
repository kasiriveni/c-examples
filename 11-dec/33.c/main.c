/*
 * C Program to Find the Volume and Surface Area of cylinder
 */
#include <stdio.h>
#include <math.h>

int main()
{

    float radius, height;
    float surface_area, volume;

    printf("Enter  value for  radius and height of a cylinder : \n");
    scanf("%f%f", &radius, &height);
    surface_area = 2 * (22 / 7) * radius * (radius + height);
    volume = (22 / 7) * radius * radius * height;
    printf("Surface area of cylinder is: %.3f", surface_area);
    printf("\n Volume of cylinder is : %.3f", volume);
    return 0;
}
