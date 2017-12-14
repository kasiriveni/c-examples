/*
 * C Program To Find the Smallest and Largest Elements
 * in the Binary Search Tree
 *                    40
 *                   /  \
 *                  20   60
 *                 /  \   \
 *                10  30   80
 *                         \
 *                         90
 *            (Given Binary Search Tree)
 *
 */
#include <stdio.h>
#include <stdlib.h>

struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root  =  NULL;

typedef struct btnode N;
N* new(int);
void create();
void preorder(N *t);
void min_max(N *t);

void main()
{
    int choice;

    create();
    while (1)
    {
        printf("Enter the choice\n");
        printf("1-Display : 2-Min & Max element : 3-Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            printf("preorder preorder of tree elements\n");
            preorder(root);
            printf("\n");
            break;
        case 2:
            min_max(root);
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
    root = new(40);
    root->l = new(20);
    root->r = new(60);
    root->l->l = new(10);
    root->l->r = new(30);
    root->r->r = new(80);
    root->r->r->r = new(90);
}

/* To display preorder traversal of the tree */
void preorder(N *temp)
{
        printf("%d->", temp->value);
        if (temp->l != NULL)
        preorder(temp->l);
        if (temp->r != NULL)
        preorder(temp->r);
}

/* TO find the minimum and maximum values in the given tree */
void min_max(N *temp)
{
    while (temp->l != NULL)
        temp = temp->l;
    printf("Minimum value  = %d\n", temp->value);
    temp = root;
    while (temp->r != NULL)
        temp = temp->r;
    printf("Maximum value  = %d\n", temp->value);
}
