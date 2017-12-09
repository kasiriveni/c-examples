/* use of getchar function to read characters from the  keyboard*/
#include<stdio.h>
main()
{
    char answer;
    printf("would you like to know my name?\n");
    printf("type Y for yes and N for no:");
    answer=getchar();
    if(answer=='Y' || answer=='y')
        printf("\n \n my name is  manoj \n");
    else
        printf("\n i never say to u \n");
}
