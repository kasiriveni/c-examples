/* reading of strings*/
#include<stdio.h>
main()
{
    int no;
    char name1[15],name2[15],name3[15];
    printf("enter the serial number and the name one\n");
    scanf("%d %15c",&no,name1);
    printf("%d %15s\n\n",no,name1);
    printf("enter the serial number and two\n");
    scanf("%d %s",&no,name2);
    printf("%d %15s\n\n",no,name2);

}
