//diff between union and structures
#include <stdio.h>
union unionJob
{

   char name[32];
   float salary;
   int workerNo;
} uJob;

struct structJob
{
   char name[32];
   float salary;
   int workerNo;
} sJob;

int main()
{
   printf("size of union = %d", sizeof(uJob));
   printf("\nsize of structure = %d", sizeof(sJob));
   return 0;
}
