// a program on binary search
#include<stdio.h>
int main() {

 int n, a[30], item, i, j, mid, top, bottom;
 printf("Enter how many elements you want:\n");
 scanf("%d", &n);
 printf("Enter the %d elements in ascending order\n", n);
 for (i = 0; i < n; i++) {
  scanf("%d", &a[i]);
 }
 printf("\nEnter the item to  search\n");
 scanf("%d", &item);
 bottom = 1;
 top = n;

 do {
  mid = (bottom + top) / 2;
  if (item < a[mid])
   top = mid - 1;
  else if (item > a[mid])
   bottom = mid + 1;
 } while (item != a[mid] && bottom <= top);

 if (item == a[mid]) {
  printf("Binary search successfull!!\n");
  printf("\n %d found in position: %d\n", item, mid + 1);
 } else {
  printf("\n  Search failed\n %d not found\n", item);
 }
 return 0;
}
