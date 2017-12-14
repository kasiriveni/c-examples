/*
 * C Program to Interchange the two Adjacent Nodes given a circular
 * Linked List
 */
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next;
};

void create(struct node **);
void tocircular(struct node **);
void release(struct node **);
void change(struct node **, int);
void display(struct node *);

int main()
{
    struct node *p = NULL;
    int num;

    printf("Enter data into the list\n");
    create(&p);
    tocircular(&p);
    printf("Circular list generated\n");
    display(p);
    printf("Enter node position to interchange with it's adjacent: ");
    scanf("%d", &num);
    change(&p, num - 2);
    printf("After interchanging, ");
    display(p);
    release (&p);

    return 0;
}

void tocircular(struct node **p)
{
    struct node *rear;

    rear = *p;
    while (rear->next != NULL)
    {
        rear = rear->next;
    }
    rear->next = *p;
    /*After this the singly linked list is now circular*/
}

void change(struct node **head, int num)
{
    struct node *p, *q, *r;

    p = q = r = *head;
    p = p->next->next;
    q = q->next;
    while (num != 0)
    {
        r = q;
        q = p;
        p = p->next;
        num--;
    }
    r->next = p;
    q->next = p->next;
    p->next = q;
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

void display(struct node *head)
{
    struct node *temp = head;
    printf("Displaying the list elements\n");
    printf("%d\t", temp->num);
    temp = temp->next;
    while (head != temp)
    {
        printf("%d\t", temp->num);
        temp = temp->next;
    }
    printf("\n");
}

void release(struct node **head)
{
    struct node *temp = *head;
    temp = temp->next;
    (*head)->next = NULL;
    (*head) = temp->next;
    while ((*head) != NULL)
    {
        free(temp);
        temp = *head;
        (*head) = (*head)->next;
    }
}
