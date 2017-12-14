// Anagram Program in C
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//function to count the frequency of each character
void count_frequency(char str[],int s[])
{
    int i=0,j,count;
    while(str[i]!='\0')
    {
        j=0;
        count=0;
        while(str[j]!='\0')
        {
            if(str[i]==str[j])
                count++;
            j++;
        }

        s[str[i]-97]=count;
        i++;
    }
}

int main()
{
    char str1[100],str2[100];
    int i,j,flag=1,s1[26]={0},s2[26]={0};

    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter second string:");
    scanf("%s",str2);

    if(strlen(str1)!=strlen(str2))    //if the lengths of two strings are not equal
    {
        printf("\nStrings are not anagrams");
        exit(0);
    }

    count_frequency(str1,s1);
    count_frequency(str2,s2);

    for(i=0;i<26;++i)    //checking freuency of each character
    {
        if(s1[i]!=s2[i])
        {
            flag=0;
            break;
        }
    }

    if(flag)
        printf("\nStrings are anagrams");
    else
        printf("\nStrings are not anagrams");

    return 0;
}
