/*
 * Recursive C program to display members of a linked list
 */
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int a;
    struct node *next;
};

void generate(struct node **);
void display(struct node*);
void delete(struct node **);

int main()
{
    struct node *head = NULL;

    generate(&head);
    display(head);
    delete(&head);
    return 0;
}

void generate(struct node **head)
{
    int num = 10, i;
    struct node *temp;

    for (i = 0; i < num; i++)
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

void display(struct node *head)
{
    printf("%d    ", head->a);
    if (head->next == NULL)
    {
        return;
    }
    display(head->next);
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
