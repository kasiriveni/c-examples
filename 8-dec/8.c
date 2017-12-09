/*a program for detection of errors in scanf input*/
#include<stdio.h>
main()
{
    int a;
    float b;
    char c;
    printf("enter the values for a,b ,c \n");
    if(scanf("%d %f %c",&a,&b,&c)==3){
         printf("a=%d b=%f c=%c\n",a,b,c);
    }

    else{
        printf("Error in input \n");
    }

}
