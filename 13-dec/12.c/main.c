/*
 * C Program to Implement Queue Functions Using Arrays and Macros
 */
#include <stdio.h>
#include<stdlib.h>

/* Macro  Definition */
#define MAX 10
#define EMPTY "QUEUE EMPTY"
#define ISFULL rear >=  MAX - 1
#define FULL "QUEUE FULL"
#define ISEMPTY rear == -1

/* Global Variable Declaration */
int queue[MAX], front = 0, rear = -1;

/* Fucntion Prototypes */
void insert_rear();
void delete_front();
void display_queue();
void empty_queue();
void front_ele();
int queue_size();
void destroy();

void main()
{
    int choice, n, flag = 0;
    char ch;

    do
    {
        printf("MENU\n");
        printf("Enter 1 to INSERT an element in the queue\n");
        printf("Enter 2 to DELETE an element in the queue\n");
        printf("Enter 3 to DISPLAY the elements of the queue\n");
        printf("Enter 4 to CHECK if the queue is EMPTY\n");
        printf("Enter 5 to KNOW the FIRST element of the queue\n");
        printf("Enter 6 to KNOW the queue SIZE\n");
        printf("Enter 7 to Destroy the Queue\n");
        printf("Enter 8 to EXIT the program\n");
        printf("Enter your Choice:");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            insert_rear();
            break;
        case 2:
            delete_front();
            break;
        case 3:
            display_queue();
            break;
        case 4:
            empty_queue();
            break;
        case 5:
            front_ele();
            break;
        case 6:
            n = queue_size();
            printf("\nthe queue size is: %d", n);
            break;
        case 7:
            destroy();
            flag = 1;
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("WRONG CHOICE\n");
        }
        printf("\nDo you want to continue:");
        scanf(" %c", &ch);
    } while(ch == 'y' || ch == 'Y');
    if (flag == 0)
    {
        destroy();
    }
}

/* Code to Insert the element in Queue */
void insert_rear()
{
    int val;

    if (ISFULL)
    {
        printf(FULL);
    }
    else
    {
        printf("\nEnter the value you want to insert in the queue:");
        scanf("%d", &val);
        rear++;
        queue[rear] = val;
        printf("\nElement successfully inserted in the queue");
    }
}

/* Code to Delete the element in Queue */
void delete_front()
{
    if (ISEMPTY)
    {
        printf(EMPTY);
    }
    else
    {
        printf("\nThe deleted element is: %d", queue[front]);
        front++;
    }
}

/* Code to Display the Elements of Queue */
void display_queue()
{
    int i;

    if (ISEMPTY)
    {
        printf(EMPTY);
    }
    else
    {
        for (i = front;i <= rear;i++)
        {
            printf("%d->", queue[i]);
        }
    }
}

/* Code to Check the Queue is Empty or Not */
void empty_queue()
{
    if (ISEMPTY)
    {
        printf(EMPTY);
    }
    else
    {
        printf("\nTHE QUEUE has elements\n");
    }
}


/* Code to Check the First element of Queue */
void front_ele()
{
    if (ISEMPTY)
    {
        printf(EMPTY);
    }
    else
    {
        printf("The first element of the queue is: %d", queue[front]);
    }
}

/* Code to Check the Size of Queue */
int queue_size()
{
    int i = 0, count = 0;

    if (ISEMPTY)
    {
        printf(EMPTY);
    }
    else
    {
        for (i = front;i <= rear;i++)
        {
            count++;
        }
    }
    return count;
}

/* Code to destroy the queue */
void destroy()
{
    int size, i;

    if (ISEMPTY)
    {
        printf("EMPTY QUEUE CANNOT BE DESTROYED");
    }
    else
    {
        size = queue_size();

        for (i = 0;i < size;i++)
        {
            front++;
        }
        front = 0;
        rear = -1;
        printf("\n\nQUEUE DESTROYED");
    }
}
