/*
 * C Program that Merges Lines Alternatively from 2 Files & Print Result
 */
#include<stdio.h>
main()
{
    char file1[10], file2[10];

    puts("enter the name of file 1");      /*getting the names of file to be concatenated*/
    scanf("%s", file1);
    puts("enter the name of file 2");
    scanf("%s", file2);
    FILE *fptr1, *fptr2, *fptr3;
    fptr1=fopen(file1, "r");             /*opening the files in read only mode*/
    fptr2=fopen(file2, "r");
    fptr3=fopen("merge2.txt", "w+");   /*opening a new file in write,update mode*/
    char str1[200];
    char ch1, ch2;
    int n = 0, w = 0;
    while (((ch1=fgetc(fptr1)) != EOF) && ((ch2 = fgetc(fptr2)) != EOF))
    {
        if (ch1 != EOF)             /*getting lines in alternately from two files*/
        {
            ungetc(ch1, fptr1);
            fgets(str1, 199, fptr1);
            fputs(str1, fptr3);
            if (str1[0] != 'n')
                n++;      /*counting no. of lines*/
        }
        if (ch2 != EOF)
        {
            ungetc(ch2, fptr2);
            fgets(str1, 199, fptr2);
            fputs(str1, fptr3);
            if (str1[0] != 'n')
                n++;        /*counting no.of lines*/
        }
    }
    rewind(fptr3);
    while ((ch1 = fgetc(fptr3)) != EOF)       /*countig no.of words*/
    {
        ungetc(ch1, fptr3);
        fscanf(fptr3, "%s", str1);
        if (str1[0] != ' ' || str1[0] != 'n')
            w++;
    }
    fprintf(fptr3, "\n\n number of lines = %d n number of words is = %d\n", n, w - 1);
    /*appendig comments in the concatenated file*/
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
}
