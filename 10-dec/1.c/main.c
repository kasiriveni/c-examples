//character oriented read/write operations on a file
#include <stdio.h>
#include <stdlib.h>

main()
{
    FILE *f1;
    char c;
    printf("data input\n\n");
    f1=fopen("INPUT","w");
    while((c=getchar())!=EOF)
    {
        putc(c,f1);
    }
    fclose(f1);
    printf("\n data output\n\n");
    f1=fopen("INPUT","r");
    while((c=getc(f1))!=EOF)
    {
        printf("%c",c);
    }
    fclose(f1);

}
