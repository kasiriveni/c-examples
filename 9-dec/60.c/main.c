// program on typedef
#include <stdio.h>
#include <limits.h>

int main()
{
   typedef long long int LLI;

   printf("Storage size for long long int data " \
          "type  : %ld \n", sizeof(LLI));

   return 0;
}
