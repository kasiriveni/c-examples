/*
 * C Program to Collect Statistics of a Source File like Total Lines,
 * Total no. of Blank Lines, Total no. of Lines ending with Semicolon
 */
#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])    /* Command line Arguments */
{
    int ncount = 0, ccount = 0, scount = 0, blank = 0;
    char ch;
    FILE *fp;
    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        perror("Error Occured");
    }
    else
    {
        while(1)
        {
            ch = fgetc(fp);
            if (ch == EOF)
            {
                break;
            }
            if (ch == 10)
            {
                ncount++;
                if (ch = fgetc(fp) == '\n')
                {
                    fseek(fp, -1, 1);        /* shifting offset of the file to previous position */
                    blank++;
                }
            }
            else if (ch == 59)
            {
                scount++;
            }
            else if (ch == '/' || ch == '*')
            {
                ccount++;
            }
        }
    }
    printf("\nThe Total number of lines are %d", ncount);
    printf("\nThe Total number of Commented lines are %d", ccount);
    printf("\nThe Total number of blank lines are %d", blank);
    printf("\nThe total number of lines that end with Semicolon %d", scount);
    printf("\nThe length of Actual code is %d ", ncount-blank-ccount);
    fclose(fp);
}
