/* formatted output for integers*/
#include<stdio.h>
main()
{
    int m=12345;
    long n=987654;
    printf("%d \n",m);
    printf("%10d \n",m);
    printf("%010d \n",m);
    printf("%-10d \n",m);
    printf("%10ld \n",n);
    printf("%10ld \n",-n);

}
