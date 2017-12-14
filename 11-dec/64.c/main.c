/*
 * C program to find the length of a string
 */
#include <stdio.h>

int length(char [], int);
int main()
{
    char word[20];
    int count;

    printf("Enter a word to count it's length: ");
    scanf("%s", word);
    count = length(word, 0);
    printf("The number of characters in %s are %d.\n", word, count);
    return 0;
}

int length(char word[], int index)
{
    if (word[index] == '\0')
    {
        return 0;
    }
    return (1 + length(word, index + 1));
}
