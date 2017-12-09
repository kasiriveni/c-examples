// a program on array search
#include <stdio.h>
void main()
{
 int array[10];
 int i, N, keynum, found=0;

 printf("Enter the value of N\n");
 scanf("%d",&N);

 printf("Enter the elements one by one\n");
 for(i=0; i<N ; i++)
 {
  scanf("%d",&array[i]);
 }
 printf("Input array is\n");
 for(i=0; i<N ; i++)
 {
  printf("%d\n",array[i]);
 }
 printf("Enter the element to be searched\n");
 scanf("%d", &keynum);


 for ( i=0; i < N ; i++)
 {
  if( keynum == array[i] )
  {
   found = 1;
   break;
  }
 }
 if ( found == 1)
  printf("Element found in the given array");
 else
  printf("Element was not found in the array");

}

