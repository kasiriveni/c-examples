//<stdlib.h>
//example shows the usage of atexit() function.

#include <stdio.h>
#include <stdlib.h>

void functionA () {
   printf("This is functionA\n");
}

int main () {
   /* register the termination function */
   atexit(functionA );

   printf("Starting  main program...\n");

   printf("Exiting main program...\n");

   return(0);
}
