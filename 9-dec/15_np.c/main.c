//nested if else to find positive or negative numbers
#include <stdio.h>
int main()
{
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number < 0.0)
        printf("You entered a negative number.");

    else if ( number > 0.0)
        printf("You entered a positive number.");

    else
        printf("You entered 0.");
    return 0;
}
