/*
 * C Program to find HCF of a given Number using Recursion
 */
#include <stdio.h>

int hcf(int, int);

int main()
{
    int a, b, result;

    printf("Enter the two numbers to find their HCF: ");    scanf("%d%d", &a, &b);
    result = hcf(a, b);
    printf("The HCF of %d and %d is %d.\n", a, b, result);
}

int hcf(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return hcf(a - b, b);
        }
        else
        {
            return hcf(a, b - a);
        }
    }
    return a;
}
