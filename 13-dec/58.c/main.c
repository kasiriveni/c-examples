/*
 * C Program to Find the Common Ancestor and Print the Path
 *
 *                       10
 *                       /  \
 *                      7    15
 *                     / \   / \
 *                    6   8 12  18
 *                   /     \
 *                  5         9
 *               (Given Binary tree)
 */
#include <stdio.h>
#include <stdlib.h>

struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
};

typedef struct btnode N;

N* new(int);
int count;

void create();
void preorder(N *t);
void ancestor(N *t);
int search(N *t, int, int);
void path(int, int, int);

N *root = NULL;

void main()
{
    int choice;

    create();
    while (1)
    {
        printf("Enter the choice\n");
        printf("1-Display : 2-path : 3-Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("preorder display of tree elements\n");
            preorder(root);
            printf("\n");
            break;
        case 2:
            ancestor(root);
            break;
        case 3:
            exit(0);
        default:
            printf("Enter the right choice\n");
        }
    }
}

/* creating temporary node */
N* new(int data)
{
    N* temp = (N*)malloc(sizeof(N));
    temp->value = data;
    temp->l = NULL;
    temp->r = NULL;

    return(temp);
}

/* Creating the binary search tree */
void create()
{
    root = new(10);
    root->l = new(7);
    root->r = new(15);
    root->l->l = new(6);
    root->l->r = new(8);
    root->r->l = new(12);
    root->r->r = new(18);
    root->r->r->r = new(20);
    root->l->l->l = new(5);
    root->l->r->r = new(9);
}

/* To display the preorder traversal of the tree */
void preorder(N *temp)
{
        printf("%d->", temp->value);
        if (temp->l != NULL)
            preorder(temp->l);
        if (temp->r != NULL)
            preorder(temp->r);
}

/* to find common ancestor for given nodes */
void ancestor(N *temp)
{
    int a, b, anc = 0;
    count = 0;

    printf("enter two node values to find common ancestor\n");
    scanf("%d", &a);
    scanf("%d", &b);
    count = search(root, a, b);
    if (count  == 2)
    {
        while (temp->value != a && temp->value != b)
        {
            if ((temp->value > a)&&(temp->value > b))
            {
                anc = temp->value;
                temp = temp->l;
            }
            else if ((temp->value < a)&&(temp->value < b))
            {
                anc = temp->value;
                temp = temp->r;
            }
            else if ((temp->value > a)&&(temp->value < b))
            {
                anc = temp->value;
                printf("anc = %d\n", anc);
                break;
            }
            else if ((temp->value < a)&&(temp->value > b))
            {
                anc = temp->value;
                temp = temp->r;
            }
            else
            {
                printf("common ancestor = %d\n", anc);
                break;
            }
        }
    path(anc, a, b);
    }
    else
        printf("enter correct node values & do not enter root value\n");
}

/* to find whether given nodes are present in tree or not */
int search(N *temp, int a, int b)
{
    if ((temp->value  == a ||temp->value  == b)&& (root->value != a&&root->value != b))
    {
        count++;
    }
    if (temp->l != NULL)
        search(temp->l, a, b);
    if (temp->r != NULL)
        search(temp->r, a, b);
    return count;
}

/* to print the path ancestor to given nodes */
void path(int anc, int c, int b)
{
    N *temp = NULL;
    int i = 0, a[2];
    a[0] = c;
    a[1] = b;

    for (;i < 2;i++)
    {
        if (anc == root->value)    // If ancestor is root
        {
            temp = root;
            while (1)
            {
                printf("%d", temp->value);
                if (a[i] < temp->value)
                    temp = temp->l;
                else if (a[i] > temp->value)
                    temp = temp->r;
                else
                {
                    if (a[i] == temp->value)
                    {
                        break;
                    }
                }
                printf("->");
            }
            printf("\n");
        }
        else if (anc < root->value)    //If ancestor is less than the root value
        {
            temp = root;
            while (temp != NULL)
            {
                if (anc < temp->value)
                    temp = temp->l;
                else if (anc > temp->value)
                    temp = temp->r;
                else
                {
                    while (1)
                    {
                        if (a[i] < temp->value)
                        {
                            printf("%d->", temp->value);
                            temp = temp->l;
                        }
                        else if (a[i] > temp->value)
                        {
                            printf("%d->", temp->value);
                            temp = temp->r;
                        }
                        else
                        {
                            printf("%d\n", temp->value);
                            break;
                        }
                    }
                }
            }
        }
        else //If ancestor greater than the root value
        {
            temp = root;
            while (temp != NULL)
            {
                if (anc > temp->value)
                    temp = temp->r;
                else if (anc < temp->value)
                    temp = temp->l;
                else
                {
                    while (1)
                    {
                        if (a[i] < temp->value)
                        {
                            printf("%d->", temp->value);
                            temp = temp->l;
                        }
                        else if (a[i] > temp->value)
                        {
                            printf("%d->", temp->value);
                            temp = temp->r;
                        }
                        else
                        {
                            printf("%d\n", temp->value);
                            break;
                        }
                    }
                }
            }
        }
    }
}
