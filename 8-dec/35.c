// C Program to demonstrate the working of relational operators
#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10;

    printf("%d == %d = %d \n", a, b, a == b);
    printf("%d == %d = %d \n", a, c, a == c);

    printf("%d > %d = %d \n", a, b, a > b);
    printf("%d > %d = %d \n", a, c, a > c);


    printf("%d < %d = %d \n", a, b, a < b);
    printf("%d < %d = %d \n", a, c, a < c);


    printf("%d != %d = %d \n", a, b, a != b);
    printf("%d != %d = %d \n", a, c, a != c);


    printf("%d >= %d = %d \n", a, b, a >= b);
    printf("%d >= %d = %d \n", a, c, a >= c);


    printf("%d <= %d = %d \n", a, b, a <= b);
    printf("%d <= %d = %d \n", a, c, a <= c);

    return 0;
}


