//typedef with structures alternative
#include<stdio.h>

typedef struct b1 {
   char bname[30];
   int ssn;
   int pages;
}book;

book b1 = {"Let Us C",1000,90};

int main()
{
    printf("\nName of Book : %s",b1.bname);
    printf("\nSSN of Book : %d",b1.ssn);
    printf("\nPages in Book : %d",b1.pages);
    return(0);
}
