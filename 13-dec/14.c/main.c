/*
 * C Program to Illustrate Stack Operations using MACROS
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 5
#define EMPTY "Stack is Empty"
#define OVERFLOW "Stack Overflow"
#define ISOVERFLOW top >= MAX - 1 /*Macro to find whether the stack is full*/
#define ISEMPTY top == -1    /*Macro to find whether the stack is empty*/

void push(int);
void pop();
void display();
void stacksize();
void destroy();
void stackfull();

int top = -1;
int stack[MAX];

void main()
{
    int choice, value;

    while (1)
    {
        printf("Enter Your choice:\n");
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.STACKSIZE\n5.DESTROY\n6.SATCKFULL CHECK\n7.EXIT");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the value to be pushed on to the stack");
            scanf("%d", &value);
            push(value);
            continue;
        case 2:
            pop();
            continue;
        case 3:
            display();
            continue;
        case 4:
            stacksize();
            continue;
        case 5:
            destroy();
            continue;
        case 6:
            stackfull();
            continue;
        case 7:
            exit(0);
        default:
            printf("YOU HAVE ENTERD A WRONG CHOICE");
        }
    }
}

/*Function to add an element into the stack*/
void push(int value)
{
    if (ISOVERFLOW)
    {
        printf(OVERFLOW);
        return;
    }
    top++;
    stack[top] = value;
}

/*Function to delete an element from the stack*/
void pop()
{
    if (ISEMPTY)
    {
        printf(EMPTY);
        return;
    }
    printf("the popped element is %d", stack[top]);
    top--;
}

/*Function to display all the elements in the stack*/

void display()
{
    int temp = top;

    if (ISEMPTY)
    {
        printf(EMPTY);
        return;
    }
    while (temp + 1)
    {
        printf("%d\n", stack[temp]);
        temp--;
    }
}

/* Function to check whether the stack is full using macro */
void stackfull()
{
    int temp = top, count = 0;

    if (ISEMPTY)
    {
        printf(EMPTY);
        return;
    }
    while (temp + 1)
    {
        printf("%d\n", stack[temp]);
        temp--;
        count++;
    }
    if (count >= MAX)
    {
        printf("Stack is full");
    }
    else
    {
        printf("there are %d more spaces in the stack", (MAX-count));
    }
}

/* Function to return the size of the stack */
void stacksize()
{
    int temp = top, count = 0;
    if (ISEMPTY)
    {
        printf(EMPTY);
        return;
    }
    while (temp + 1)
    {
          temp--;
        count++;
    }
    printf("the size of the stack is %d\n", count);
}

/* Function to delete all the elements in the stack */

void destroy()
{
    if (ISEMPTY)
    {
        printf("nothing is there to destroy");
    }
    while (top != -1)
    {
        pop();
    }
}
