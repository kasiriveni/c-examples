/* Write a C program to find the area of a triangle, given three sides*/

#include <stdio.h>
#include <math.h>

void main()
{
int s, a, b, c, area;

printf("Enter the values of a,b and c\n");
scanf ("%d %d %d", &a, &b, &c);

   s = (a + b + c) / 2;

area = sqrt ( s * (s-a) * (s-b) * (s-c));

printf ("Area of a triangale = %d\n", area);
}
