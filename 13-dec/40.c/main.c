/*
 * C Program to Create a Mirror Copy of a Tree and Display using
 * BFS Traversal
 *                    40
 *                    /\
 *                   20 60
 *                   /\  \
 *                  10 30  80
 *                          \
 *                           90
 */
#include <stdio.h>
#include <stdlib.h>

struct btnode
{
    int value;
    struct btnode *left, *right;
};
typedef struct btnode node;

/* function prototypes */
void insert(node *, node *);
void mirror(node *);

/* global variables */
node *root = NULL;
int val, front = 0, rear = -1, i;
int queue[20];

void main()
{
    node *new = NULL ;
    int num = 1;
    printf("Enter the elements of the tree(enter 0 to exit)\n");
    while (1)
    {
        scanf("%d",  &num);
        if (num == 0)
            break;
        new = malloc(sizeof(node));
        new->left = new->right = NULL;
        new->value = num;
        if (root == NULL)
            root = new;
        else
        {
            insert(new, root);
        }
    }
    printf("mirror image of tree is\n");
    queue[++rear] = root->value;
    mirror(root);
    for (i = 0;i <= rear;i++)
        printf("%d -> ", queue[i]);
    printf("%d\n", root->right->right->right->value);
}

/* inserting nodes into the tree */
void insert(node * new , node *root)
{
    if (new->value > root->value)
    {
        if (root->right == NULL)
            root->right = new;
        else
            insert (new, root->right);
    }
    if (new->value < root->value)
    {
        if (root->left == NULL)
            root->left = new;
        else
            insert (new, root->left);
    }
}

/* mirror image of nodes */
void mirror(node *root)
{
    val = root->value;
    if ((front <= rear) && (root->value == queue[front]))
    {
        if (root->right != NULL || root->right == NULL)
            queue[++rear] = root->right->value;
        if (root->left != NULL)
            queue[++rear] = root->left->value;
        front++;
    }
    if (root->right != NULL)
    {
        mirror(root->right);
    }
    if (root->left != NULL)
    {
        mirror(root->left);
    }
}
