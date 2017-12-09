// file input and output
#include <stdio.h>

main() {
   FILE *fp;

   fp = fopen("M:\\ui\\c-lang\\examples\\dec\\9-dec\\temp\\sample.txt", "r+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
}
