/*
 * C Program to Find Nodes which are at Maximum Distance in Binary Tree
 */
#include <stdio.h>
#include <stdlib.h>

struct btnode
{
    int value;
    struct btnode *r,*l;
} *root = NULL, *temp = NULL;

void create();
void insert();
void add(struct btnode *t);
void maxdistance(struct btnode *t);

int count = 0, max = 0, v[100] = {0}, z = 0, max2, max1[100] = {0};

void main()
{
    int ch, i;

    printf("Program to find nodes at maximum distance");
    printf("\n  OPERATIONS ----");
    printf("\n1] Insert ");
    printf("\n2] Display nodes ");
    printf("\n3] Exit ");
    while (1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            max = 0;
            count = 0;
            maxdistance(root);
        for (i = 1; i < z; i++)
        {
            max2 = max1[0];
            if (max2 < max1[i])
                max2 = max1[i];
        }
        printf("Maximum distance nodes \nNodes\t Distance ");
        for (i = 0; i < z; i++)
        {
            if (max2 == max1[i])
                printf("\n %d\t  %d ",v[i],max2);
        }
        break;
        case 3:
            exit(0);
        default :
            printf("Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}

/* To create a new node with the data from the user */
void create()
{
    int data;

    printf("Enter the data of node : ");
    scanf("%d", &data);
    temp = (struct btnode* ) malloc(1*(sizeof(struct btnode)));
    temp->value = data;
    temp->l = temp->r = NULL;
}

/* To check for root node and then create it */
void insert()
{
    create();

    if (root == NULL)
        root = temp;
    else
        add(root);
}

/* Search for the appropriate position to insert the new node */
void add(struct btnode *t)
{
    if ((temp->value > t->value) && (t->r!=NULL))    /* value more than root node value insert at right */
        add(t->r);
    else if ((temp->value > t->value) && (t->r==NULL))
        t->r = temp;
    else if ((temp->value < t->value) && (t->l!=NULL))   /* value less than root node value insert at left */
        add(t->l);
    else if ((temp->value < t->value) && (t->l==NULL))
        t->l = temp;
}

/* Function to find the max distance nodes */
void maxdistance(struct btnode *t)
{
    if (t->l!=NULL)
    {
        count++;            /* to count the number of nodes in between root and leaf */
        maxdistance(t->l);
    }
    if (max < count)
        max = count;
    if (max == count)
    {
        max1[z] = max;
        v[z] = t->value;
        z++;
    }
    if (t->r != NULL)
    {
        count++;
        maxdistance(t->r);
    }
    count--;
}
