//<stdio.h>
// example shows the usage of setbuf() function.

#include <stdio.h>

int main () {
   char buf[BUFSIZ];

   setbuf(stdout, buf);
   puts("helooooo");

   fflush(stdout);
   return(0);
}
