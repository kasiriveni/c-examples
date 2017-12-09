#include <stdio.h>
void main()
{
int table[20];
int i, low, mid, high, key, size;

printf("Enter the size of an array\n");
scanf("%d", &size);

printf("Enter the array elements\n");
for(i = 0; i < size; i++)
{
scanf("%d", &table[i]);
}

printf("Enter the key\n");
scanf("%d", &key);

low = 0;
high = (size - 1);

while(low <= high)
{
mid = (low + high)/2;
if(key == table[mid])
{
printf("SUCCESSFUL SEARCH\n");
return;
}
if(key < table[mid])
high = mid - 1;
else
low = mid + 1;
}

printf("UNSUCCESSFUL SEARCH\n");
}
