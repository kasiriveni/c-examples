/* formatted output for real numbers*/
#include<stdio.h>
main()
{
    float y=98.7654;
    printf("%7.4f\n",y);
    printf("%f\n",y);
    printf("%7.2f\n",y);
    printf("%-7.2f\n",y);
    printf("%07.2f\n",y);
    printf("%*.*f",7,2,y);
    printf("\n");
    printf("%10.2e\n",y);
    printf("%12.4e\n",-y);
    printf("%-10.2e\n",y);
    printf("%e\n",y);
}

