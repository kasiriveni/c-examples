/*
 * C Program to Find Area of Parallelogram
 */
#include <stdio.h>

int main()
{
    float base, altitude;
    float area;

    printf("Enter base and altitude of the given Parallelogram: \n ");
    scanf("%f%f", &base, &altitude);
    area = base * altitude;
    printf("Area of Parallelogram is: %.3f\n", area);
    return 0;
}
