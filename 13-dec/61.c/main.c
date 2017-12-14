
/*
 * C Program to find the Total Columns/Vertical Lines of a given
 * Binary Search Tree

    40
   /  \
  20   60
 /  \    \
10  30   80
          \
          90
(40,60,80,20,30,90,10)
(Binary search tree)
 */
#include <stdio.h>
#include <stdlib.h>

struct btnode {
    int value;
    int col;
    struct btnode *l;
    struct btnode *r;
};

typedef struct btnode bt;

bt *root,*temp;
bt *new;
int min = 0, max = 0;

bt * create_node();
void display(bt *);
void insert(bt *, bt *);
void columns(bt *);

void main()
{
    int num;

    while (1)
    {
        printf("enter the number:");
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        create_node();
        new->value = num;
        if (root == NULL)
        {
            root = new;
            root->col = 0;
        }
        else
        {
            insert(new,root);
        }
    }
    display(root);
    columns(root);
    printf("\n total number of columns : %d",-min + max + 1);
}

/* creates new node */
bt * create_node()
{
    new=(bt *)malloc(sizeof(bt));
    new->l = NULL;
    new->r = NULL;
}

/* inserts the node into tree */
void insert(bt * new , bt * list)
{
    if (new->value>list->value)
    {
        if (list->r == NULL)
        {
            list->r = new;
            new->col = list->col + 1;
        }
        else
        {
            insert (new,list->r);
        }
    }
    if (new->value < list->value)
    {
        if (list->l == NULL)
        {
            list->l = new;
            new->col = list->col - 1;
        }
        else
        {
            insert (new,list->l);
        }
    }
}

/* displays the elements in the tree using inorder */
void display(bt * list)
{
    if (list == NULL)
    {
        return;
    }
    display(list->l);
    printf("->%d", list->value);
    display(list->r);
}

/* counts the number of columns in tree */
void columns(bt * list)
{
    if (list == NULL)
    {
        return;
    }
    if (list->col < min)
    {
        min = list->col;
    }
    if (list->col > max)
    {
        max = list->col;
    }
    columns(list->l);
    columns(list->r);
}
