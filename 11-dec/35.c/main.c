/*
 * C Program to Find the volume and surface area of cone
 */
#include <stdio.h>
#include <math.h>

int main()
{

    float radius, height;
    float surface_area, volume;

    printf("Enter value of radius and height of a cone :\n ");
    scanf("%f%f", &radius, &height);
    surface_area = (22 / 7) * radius * (radius + sqrt(radius * radius + height * height));
    volume = (1.0/3) * (22 / 7) * radius * radius * height;
    printf("Surface area of cone is: %.3f", surface_area);
    printf("\n Volume of cone is : %.3f", volume);
    return 0;
}
