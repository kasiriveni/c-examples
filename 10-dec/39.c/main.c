//<math.h>
//example shows the usage of log() function.

#include <stdio.h>
#include <math.h>

int main () {
   double x, ret;
   x = 2.7;

   /* finding log(2.7) */
   ret = log(x);
   printf("log(%lf) = %lf", x, ret);

   return(0);
}
