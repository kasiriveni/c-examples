// program on bit fields
#include <stdio.h>

struct test1
{
   unsigned int x: 5;
   unsigned int y: 8;
};

struct test2
{
   unsigned int x: 5;
   unsigned int: 0;
   unsigned int y: 8;
};

int main()
{
   printf("Size of test1 is %d bytes\n", sizeof(struct test1));
   printf("Size of test2 is %d bytes\n", sizeof(struct test2));
   return 0;
}
