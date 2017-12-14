/*
 * C Program to Add Corresponding Positioned Elements of 2 Linked Lists
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node
{
    int num;
    struct node *next;
};

int feednumber(struct node **);
struct node *addlist(struct node *, struct node *, int, int);
void release(struct node **);
void display(struct node *);

int main()
{
    struct node *p = NULL;
    struct node *q = NULL;
    struct node *res = NULL;
    int pcount = 0, qcount = 0;

    printf("Enter first number\n");
    pcount = feednumber(&p);
    printf("Enter second number\n");
    qcount = feednumber(&q);
    printf("Displaying list1: ");
    display(p);
    printf("Displaying list2: ");
    display(q);
    res = addlist(p, q, pcount, qcount);
    printf("Displaying the resulting list: ");
    display(res);
    release(&p);
    release(&q);
    release(&res);

    return 0;
}

/*Function to create nodes of numbers*/
int feednumber(struct node **head)
{
    char ch, dig;
    int count = 0;
    struct node *temp, *rear = NULL;

    ch = getchar();
    while (ch != '\n')
    {
        dig = atoi(&ch);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->num = dig;
        temp->next = NULL;
        count++;
        if ((*head) == NULL)
        {
            *head = temp;
            rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = rear->next;
        }
        ch = getchar();
    }

    return count;
}

/*Function to display the list of numbers*/
void display (struct node *head)
{
    while (head != NULL)
    {
        printf("%d", head->num);
        head = head->next;
    }
    printf("\n");
}

/*Function to free the allocated list of numbers*/
void release (struct node **head)
{
    struct node *temp = *head;

    while ((*head) != NULL)
    {
        (*head) = (*head)->next;
        free(temp);
        temp = *head;
    }
}

/*Function to add the list of numbers and store them in 3rd list*/
struct node *addlist(struct node *p, struct node *q, int pcount, int qcount)
{
    struct node *ptemp, *qtemp, *result = NULL, *temp;
    int i, carry = 0;

    while (pcount != 0 && qcount != 0)
    {
        ptemp = p;
        qtemp = q;
        for (i = 0; i < pcount - 1; i++)
        {
            ptemp = ptemp->next;
        }
        for (i = 0; i < qcount - 1; i++)
        {
            qtemp = qtemp->next;
        }
        temp = (struct node *) malloc (sizeof(struct node));
        temp->num = ptemp->num + qtemp->num + carry;
        carry = temp->num / 10;
        temp->num = temp->num % 10;
        temp->next = result;
        result = temp;
        pcount--;
        qcount--;
    }
    /*both or one of the 2 lists have been read completely by now*/
    while (pcount != 0)
    {
        ptemp = p;
        for (i = 0; i < pcount - 1; i++)
        {
            ptemp = ptemp->next;
        }
        temp = (struct node *) malloc (sizeof(struct node));
        temp->num = ptemp->num + carry;
        carry = temp->num / 10;
        temp->num = temp->num % 10;
        temp->next = result;
        result = temp;
        pcount--;
    }
    while (qcount != 0)
    {
        qtemp = q;
        for (i = 0; i < qcount - 1; i++)
        {
            qtemp = qtemp->next;
        }
        temp = (struct node *) malloc (sizeof(struct node));
        temp->num = qtemp->num + carry;
        carry = temp->num / 10;
        temp->num = temp->num % 10;
        temp->next = result;
        result = temp;
        qcount--;
    }

    return result;
}
