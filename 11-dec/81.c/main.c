/*
 * C Program to Find Number of Occurences of All Elements in a Linked List
 */
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next;
};

struct node_occur
{
    int num;
    int times;
    struct node_occur *next;
};

void create(struct node **);
void occur(struct node *, struct node_occur **);
void release(struct node **);
void release_2(struct node_occur **);
void display(struct node *);
void disp_occur(struct node_occur *);

int main()
{
    struct node *p = NULL;
    struct node_occur *head = NULL;
    int n;

    printf("Enter data into the list\n");
    create(&p);
    printf("Displaying the occurence of each node in the list:\n");
    display(p);
    occur(p, &head);
    disp_occur(head);
    release(&p);
    release_2(&head);

    return 0;
}

void occur(struct node *head, struct node_occur **result)
{
    struct node *p;
    struct node_occur *temp, *prev;

    p = head;
    while (p != NULL)
    {
        temp = *result;
        while (temp != NULL && temp->num != p->num)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            temp = (struct node_occur *)malloc(sizeof(struct node_occur));
            temp->num = p->num;
            temp->times = 1;
            temp->next = NULL;
            if (*result != NULL)
            {
                prev->next = temp;
            }
            else
            {
                *result = temp;
            }
        }
        else
        {
            temp->times += 1;
        }
        p = p->next;
    }
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
        if (*head == NULL)
        {
            *head = temp;
        }
        else
        {
            rear->next = temp;
        }
        rear = temp;
        printf("Do you wish to continue [1/0]: ");
        scanf("%d", &ch);
    } while (ch != 0);
    printf("\n");
}

void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d\t", p->num);
        p = p->next;
    }
    printf("\n");
}

void disp_occur(struct node_occur *p)
{
    printf("***************************\n  Number\tOccurence\n***************************\n");
    while (p != NULL)
    {
        printf("    %d\t\t%d\n", p->num, p->times);
        p = p->next;
    }
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

void release_2(struct node_occur **head)
{
    struct node_occur *temp = *head;
    *head = (*head)->next;
    while ((*head) != NULL)
    {
        free(temp);
        temp = *head;
        (*head) = (*head)->next;
    }
}
