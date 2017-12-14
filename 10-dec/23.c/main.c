//<float.h>
//example shows the usage of few of the constants defined in float.h file.

#include <stdio.h>
#include <float.h>

int main ()
{
   printf("The maximum value of float = %.10e\n", FLT_MAX);
   printf("The minimum value of float = %.10e\n", FLT_MIN);

   printf("The number of digits in the number = %.10e\n", FLT_MANT_DIG);
}
