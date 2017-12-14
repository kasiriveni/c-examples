/*
 * C Program to Implement qsort using function pointers
 */
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct s
{
    char empname[5];
    int empid;
};

/* To sort array elemets */
int int_call(const void *a1,const void *b1)
{
    const int *a = (const int *)a1;
    const int *b = (const int *)b1;

    if (*a > *b)
        return 1;
    else
    {
        if (*a == *b)
            return 0;
        else
            return -1;
    }
}

/* To sort structure elemets */
int string_call(const void *a1, const void *b1)
{
    const char *a = (const char *)a1;
    const char *b = (const char *)b1;
    return(strcmp(a, b));
}

void main()
{
    int array1[5]={20, 30, 50, 60, 10};
    struct s emprec[5];
    int i, j;

    strcpy(emprec[0].empname, "bbb");
    emprec[0].empid = 100;
    strcpy(emprec[1].empname, "ccc");
    emprec[1].empid = 200;
    strcpy(emprec[2].empname, "eee");
    emprec[2].empid = 300;
    strcpy(emprec[3].empname, "aaa");
    emprec[3].empid = 400;
    strcpy(emprec[4].empname,"ddd");
    emprec[4].empid = 500;
    qsort(array1, 5, sizeof(int), int_call);
    qsort(emprec, 5, sizeof(struct s), string_call);
    for (i = 0; i < 5; i++)
        printf("%d\t", array1[i]);
    printf("\nSorting of Structure elements ");
    for (i = 0; i < 5; i++)
        printf("\n%s\t%d", emprec[i].empname, emprec[i].empid);
    printf("\n");
}
