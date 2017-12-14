/*
 * C program to find the number of occurences of a given number in a
 * list
 */
#include <stdio.h>

void occur(int [], int, int, int, int *);

int main()
{
    int size, key, count = 0;
    int list[20];
    int i;

    printf("Enter the size of the list: ");
    scanf("%d", &size);
    printf("Printing the list:\n");
    for (i = 0; i < size; i++)
    {
        list[i] = rand() % size;
        printf("%d    ", list[i]);
    }
    printf("\nEnter the key to find it's occurence: ");
    scanf("%d", &key);
    occur(list, size, 0, key, &count);
    printf("%d occurs for %d times.\n", key, count);
    return 0;
}

void occur(int list[], int size, int index, int key, int *count)
{
    if (size == index)
    {
        return;
    }
    if (list[index] == key)
    {
        *count += 1;
    }
    occur(list, size, index + 1, key, count);
}
