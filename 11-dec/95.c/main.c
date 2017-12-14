/*
 * C Program to Interchange two Elements of the List without
 * touching the Key Field
 */
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next;
};

void create(struct node **);
void release(struct node **);
void change(struct node **, int, int);
void display(struct node *);

int main()
{
    struct node *p = NULL;
    int num1, num2;

    printf("Enter data into the list\n");
    create(&p);
    printf("Circular list generated\n");
    display(p);
    printf("Enter node position: ");
    scanf("%d", &num1);
    printf("Enter node position to exchange with: ");
    scanf("%d", &num2);
    change(&p, num1 - 2, num2 - 2);
    printf("After interchanging, ");
    display(p);
    release (&p);

    return 0;
}

void change(struct node **head, int num1, int num2)
{
    struct node *p1, *q1, *r1;
    struct node *p2, *q2, *r2;

    p1 = q1 = r1 = *head;
    p2 = q2 = r2 = *head;
    if (num1 == num2)
    {
        return;
    }
    else if ((p1->next == NULL && num1 > 0) || (p1->next->next == NULL && num1 > 1))
    {
        printf("List smaller than entered node position.\n");
    }
    else if ((p2->next == NULL && num2 > 0) || (p2->next->next == NULL && num2 > 1))
    {
        printf("List smaller than entered node position.\n");
    }
    else
    {
        if (num1 >=0 && num2 >= 0)
        {
            p1 = p1->next->next;
            q1 = q1->next;
            while (num1 > 0)
            {
                r1 = q1;
                q1 = p1;
                p1 = p1->next;
                num1--;
            }
            p2 = p2->next->next;
            q2 = q2->next;
            while (num2 > 0)
            {
                r2 = q2;
                q2 = p2;
                p2 = p2->next;
                num2--;
            }
            r2->next = q1;
            q2->next = p1;
            r1->next = q2;
            q1->next = p2;
        }
        else if (num1 == -1)
        {
            p2 = p2->next->next;
            q2 = q2->next;
            while (num2 > 0)
            {
                r2 = q2;
                q2 = p2;
                p2 = p2->next;
                num2--;
            }
            if (p1->next != q2)
            {
                q2->next = p1->next;
                p1->next = p2;
                r2->next = p1;
            }
            else
            {
                p1->next = q2->next;
                q2->next = p1;
            }
            *head = q2;
        }
        else if (num2 == -1)
        {
            p1 = p1->next->next;
            q1 = q1->next;
            while (num1 > 0)
            {
                r1 = q1;
                q1 = p1;
                p1 = p1->next;
                num1--;
            }
            if (p2->next != q1)
            {
                q1->next = p2->next;
                p2->next = p1;
                r1->next = p2;
            }
            else
            {
                p2->next = q1->next;
                q1->next = p2;
            }
            *head = q1;
        }
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

void display(struct node *head)
{
    struct node *temp = head;
    printf("Displaying the list elements\n");
    while (temp != NULL)
    {
        printf("%d\t", temp->num);
        temp = temp->next;
    }
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
