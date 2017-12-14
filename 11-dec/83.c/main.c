/*
 * C Program to Find the Largest Element in a Doubly Linked List
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next;
    struct node *prev;
};

void create(struct node **);
int max(struct node *);
void release(struct node **);

int main()
{
    struct node *p = NULL;
    int n;

    printf("Enter data into the list\n");
    create(&p);
    n = max(p);
    printf("The maximum number entered in the list is %d.\n", n);
    release (&p);

    return 0;
}

int max(struct node *head)
{
    struct node *max, *q;

    q = max = head;
    while (q != NULL)
    {
        if (q->num > max->num)
        {
            max = q;
        }
        q = q->next;
    }

    return (max->num);
}

void create(struct node **head)
{
    int c, ch;
    struct node *temp, *rear;

    do
    {
        printf("Enter number: ");
        scanf("%d", &c);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->num = c;
        temp->next = NULL;
        temp->prev = NULL;
        if (*head == NULL)
        {
            *head = temp;
        }
        else
        {
            rear->next = temp;
            temp->prev = rear;
        }
        rear = temp;
        printf("Do you wish to continue [1/0]: ");
        scanf("%d", &ch);
    } while (ch != 0);
    printf("\n");
}

void release(struct node **head)
{
    struct node *temp = *head;
    *head = (*head)->next;
    while ((*head) != NULL)
    {
        free(temp);
        temp = *head;
        (*head) = (*head)->next;
    }
}
