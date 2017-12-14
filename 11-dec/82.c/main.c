/*
 * C Program to Find the first Common Element between the 2 given Linked Lists
 */
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next;
};

void create(struct node **);
int find(struct node *, struct node *);
void release(struct node **);
void display(struct node *);

int main()
{
    struct node *p = NULL, *q = NULL;
    int result;

    printf("Enter data into the list\n");
    create(&p);
    printf("Enter data into the list\n");
    create(&q);
    printf("Displaying list1:\n");
    display(p);
    printf("Displaying list2:\n");
    display(q);
    result = find(p, q);
    if (result)
    {
        printf("The first matched element is %d.\n", result);
    }
    else
    {
        printf("No matching element found.\n");
    }
    release (&p);

    return 0;
}

int find(struct node *p, struct node *q)
{
    struct node *temp;

    while (p != NULL)
    {
        temp = q;
        while (temp != NULL)
        {
            if (temp->num == p->num)
            {
                return p->num;
            }
            temp = temp->next;
        }
        p = p->next;
    }

    /*Assuming 0 is not used in the list*/
    return 0;
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
    while (head != NULL)
    {
        printf("%d\t", head->num);
        head = head->next;
    }
    printf("\n");
}

void release(struct node **head)
{
    struct node *temp;
    while ((*head) != NULL)
    {
        temp = *head;
        (*head) = (*head)->next;
        free(temp);
    }
}
