//quick sort in c
#include <stdio.h>

void quick_sort(int[],int,int);
int partition(int[],int,int);

int main()
{
    int a[50],n,i;
    printf("How many elements?");
    scanf("%d",&n);
    printf("\nEnter array elements:");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    quick_sort(a,0,n-1);
    printf("\nArray after sorting:");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}

void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}

int partition(int a[],int l,int u)
{
    int i,j,pivot,temp;
    i=l-1;
    pivot=u;
    for(j=l;j<=u;j++)
    {
        if(a[j]<=a[pivot])
        {
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    return i;
}
