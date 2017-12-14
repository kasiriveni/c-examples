/*
 * C Program to Print the Alternate Nodes in a Linked List without
 * using Recursion
 */
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int a;
    struct node *next;
};

void generate(struct node **);
void display(struct node *);
void delete(struct node **);

int main()
{
    struct node *head = NULL;

    generate(&head);
    printf("\nDisplaying the alternate nodes\n");
    display(head);
    delete(&head);

    return 0;
}

void display(struct node *head)
{
    int flag = 0;

    while(head != NULL)
    {
        if (!(flag % 2))
        {
           printf("%d  ", head->a);
        }
        flag++;
        head = head->next;
    }
}

void generate(struct node **head)
{
    int num, i;
    struct node *temp;

    printf("Enter length of list: ");
    scanf("%d", &num);
    for (i = num; i > 0; i--)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = i;
        if (*head == NULL)
        {
            *head = temp;
            (*head)->next = NULL;
        }
        else
        {
            temp->next = *head;
            *head = temp;
        }
    }
}

void delete(struct node **head)
{
    struct node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}
