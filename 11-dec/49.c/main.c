/*
 * C Program to Find the Size of File using File Handling Function
 */
#include <stdio.h>

void main(int argc, char **argv)
{
    FILE *fp;
    char ch;
    int size = 0;

    fp = fopen(argv[1], "r");
    if (fp == NULL)
        printf("\nFile unable to open ");
    else
        printf("\nFile opened ");
    fseek(fp, 0, 2);    /* file pointer at the end of file */
    size = ftell(fp);   /* take a position of file pointer un size variable */
    printf("The size of given file is : %d\n", size);
    fclose(fp);
}
