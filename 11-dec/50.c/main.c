/*
 * C Program to Capitalize First Letter of every Word in a File
 */
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
int to_initcap_file(FILE *);

void main(int argc, char * argv[])
{
    FILE *fp1;
    char fp[10];
    int p;

    fp1 = fopen(argv[1], "r+");
    if (fp1 == NULL)
    {
        printf("cannot open the file ");
        exit(0);
    }
    p = to_initcap_file(fp1);
    if (p == 1)
    {
        printf("success");
    }
    else
    {
        printf("failure");
    }
    fclose(fp1);
}

/* capitalizes first letter of every word */
int to_initcap_file(FILE *fp)
{
    char c;

    c = fgetc(fp);
    if (c >= 'a' && c <= 'z')
    {
        fseek(fp, -1L, 1);
        fputc(c - 32, fp);
    }
    while(c != EOF)
    {
        if (c == ' ' || c == '\n')
        {
            c = fgetc(fp);
            if (c >= 'a' && c <= 'z')
            {
                fseek(fp, -1L, 1);
                fputc(c - 32, fp);
            }
        }
        else
        {
            c = fgetc(fp);
        }
    }
    return 1;
}
