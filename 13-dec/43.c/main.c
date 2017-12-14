
/*
 * C Program to Implement a Heap & provide Insertion & Deletion Operation
 */
#include <stdio.h>

int array[100], n;
main()
{
    int choice, num;
    n = 0;/*Represents number of nodes in the heap*/
    while(1)
    {
        printf("1.Insert the element \n");
        printf("2.Delete the element \n");
        printf("3.Display all elements \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("Enter the element to be inserted to the list : ");
            scanf("%d", &num);
            insert(num, n);
            n = n + 1;
            break;
        case 2:
            printf("Enter the elements to be deleted from the list: ");
            scanf("%d", &num);
            delete(num);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice \n");
    }/*End  of switch */
}/*End of while */
}/*End of main()*/

display()
{
    int i;
    if (n == 0)
    {
        printf("Heap is empty \n");
        return;
    }
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}/*End of display()*/

insert(int num, int location)
{
    int parentnode;
    while (location > 0)
    {
        parentnode =(location - 1)/2;
        if (num <= array[parentnode])
        {
            array[location] = num;
            return;
        }
        array[location] = array[parentnode];
        location = parentnode;
    }/*End of while*/
    array[0] = num; /*assign number to the root node */
}/*End of insert()*/

delete(int num)
{
    int left, right, i, temp, parentnode;

    for (i = 0; i < num; i++) {
        if (num == array[i])
            break;
    }
    if (num != array[i])
    {
        printf("%d not found in heap list\n", num);
        return;
    }
    array[i] = array[n - 1];
    n = n - 1;
    parentnode =(i - 1) / 2; /*find parentnode of node i */
    if (array[i] > array[parentnode])
    {
        insert(array[i], i);
        return;
    }
    left = 2 * i + 1; /*left child of i*/
    right = 2 * i + 2; /* right child of i*/
    while (right < n)
    {
        if (array[i] >= array[left] && array[i] >= array[right])
            return;
        if (array[right] <= array[left])
        {
            temp = array[i];
            array[i] = array[left];
            array[left] = temp;
            i = left;
        }
        else
        {
            temp = array[i];
            array[i] = array[right];
            array[right] = temp;
            i = right;
        }
        left = 2 * i + 1;
        right = 2 * i + 2;
    }/*End of while*/
    if (left == n - 1 && array[i])    {
        temp = array[i];
        array[i] = array[left];
        array[left] = temp;
    }
}
