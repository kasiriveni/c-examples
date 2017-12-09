/* a program to test the character type*/
#include<stdio.h>
#include<ctype.h>
main()
{
    char character;
    printf("press any key \n");
    character= getchar();
    if(isalpha(character)>0)
        printf("the character is a letter");
    else
        if(isdigit(character)>0)
    {
        printf("the charcter is a digit");
    }
    else
        printf("the character is not a alphanumeric");
}
