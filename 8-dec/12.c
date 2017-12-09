/*printing of characters and strings*/
#include<stdio.h>
main()
{
    char x='A';
    char name[20]="manoj kumar yadav";
    printf("OUTUT OF CHARACTERS\n\n");
    printf("%c\n%3c\n%5c\n",x,x,x);
    printf("%3c\n%c\n",x,x);
    printf("\n");
    printf("OUTPUT OF STRINGS\n\n");
    printf("%s\n",name);
    printf("%20s\n",name);
    printf("%20.10s\n",name);
    printf("%.5s\n",name);
    printf("%-20.10s\n",name);
    printf("%5s\n",name);

}
