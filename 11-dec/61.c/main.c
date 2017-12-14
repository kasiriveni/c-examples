/*
 * C Program to Display the Nodes of a Linked List in Reverse without
 * using Recursion
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int visited;
    int a;
    struct node *next;
};

void generate(struct node **);
void display(struct node *);
void linear(struct node *);
void delete(struct node **);

int main()
{
    struct node *head = NULL;

    generate(&head);
    printf("\nPrinting the list in linear order\n");
    linear(head);
    printf("\nPrinting the list in reverse order\n");
    display(head);
    delete(&head);

    return 0;
}

void display(struct node *head)
{
    struct node *temp = head, *prev = head;

    while (temp->visited == 0)
    {
        while (temp->next != NULL && temp->next->visited == 0)
        {
            temp = temp->next;
        }
        printf("%d  ", temp->a);
        temp->visited = 1;
        temp = head;
    }
}

void linear(struct node *head)
{
    while (head != NULL)
    {
        printf("%d  ", head->a);
        head = head->next;
    }
    printf("\n");
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
        temp->visited = 0;
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
