//Reading from a binary file using fread()
#include <stdio.h>

struct threeNum
{
   int n1, n2, n3;
};

int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;

   if ((fptr = fopen("program.bin","rb")) == NULL){
       printf("Error! opening file");
       exit(1);
   }

   for(n = 1; n < 5; ++n)
   {
      fread(&num, sizeof(struct threeNum), 1, fptr);
      printf("n1: %d\t n2: %d\t n3: %d \t", num.n1, num.n2, num.n3);
   }
   fclose(fptr);

   return 0;
}
