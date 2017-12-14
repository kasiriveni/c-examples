/*
 * C Program to Find Area of rhombus
 */
#include <stdio.h>

int main()
{
    float diagonal1, diagonal2;
    float area;

    printf("Enter diagonals of the given rhombus: \n ");
    scanf("%f%f", &diagonal1, &diagonal2);
    area = 0.5 * diagonal1 * diagonal2;
    printf("Area of rhombus is: %.3f \n", area);
    return 0;
}
