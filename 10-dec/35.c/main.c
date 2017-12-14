//<math.h>
//example shows the usage of tanh() function.

#include <stdio.h>
#include <math.h>

int main () {
   double x, ret;
   x = 0.5;

   ret = tanh(x);
   printf("The hyperbolic tangent of %lf is %lf degrees", x, ret);

   return(0);
}
