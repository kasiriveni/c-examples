/*
 * C Program to Sort the Array Elements using Gnome Sort
 */
#include <stdio.h>

void main()
{
    int i, temp, ar[10], n;

    printf("\nenter the elemts number u would like to enter:");
    scanf("%d", &n);
    printf("\nenter the elements to be sorted through gnome sort:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    i = 0;
    while (i < n)
    {
        if (i == 0 || ar[i - 1] <= ar[i])
            i++;
        else
        {
            temp = ar[i-1];
            ar[i - 1] = ar[i];
            ar[i] = temp;
            i = i - 1;
        }
    }
    for (i = 0;i < n;i++)
        printf("%d\t", ar[i]);
}
