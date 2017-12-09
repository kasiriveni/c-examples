// largest element in the array
#include <stdio.h>
int main()
{
    int i, n;
    float arr[100];

    printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &n);
    printf("\n");
    for(i = 0; i < n; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%f", &arr[i]);
    }
    for(i = 1; i < n; ++i)
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("Largest element = %.2f", arr[0]);

    return 0;
}
