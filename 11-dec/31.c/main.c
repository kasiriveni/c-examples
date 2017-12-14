/*
 * C program to compute the surface area and volume of a cube
 */
#include <stdio.h>
#include <math.h>

void main()
{
    float side, surfacearea, volume;

    printf("Enter the length of a side \n");
    scanf("%f", &side);
    surfacearea = 6.0 * side * side;
    volume = pow(side, 3);
    printf("Surface area = %6.2f and Volume = %6.2f \n", surfacearea,
     volume);
}
