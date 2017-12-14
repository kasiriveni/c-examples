/*
 * C Program that takes an Ordered Binary tree & Rearranges the
 * Internal Pointers to make a Circular Doubly Linked List out
 * of the Tree Nodes
 */
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *left;
    struct node *right;
    int used;
};

void create(struct node **);
void release(struct node **);
void display(struct node *, int);
struct node * transformdet(struct node *);
struct node * transform(struct node *);

int main()
{
    struct node *root = NULL, *head;

    printf("Creating binary tree:\n");
    create (&root);
    printf("Displaying binary tree:\n");
    display(root, 0);
    head = transform(root);
    printf("\nDisplaying circular linked list:\n");
    display(head, 1);
    root->left->right = NULL;
    release(&root);

    return 0;
}

struct node * transformdet(struct node *root)
{
    struct node *left, *right;

    if (root == NULL)
    {
        return root;
    }
    if (root->left != NULL)
    {
        left = transformdet(root->left);
        while (left->right != NULL)
        {
            left = left->right;
        }
        left->right = root;
        root->left = left;
    }
    if (root->right != NULL)
    {
        right = transformdet(root->right);
        while (right->left != NULL)
        {
            right = right->left;
        }
        right->left = root;
        root->right = right;
    }

    return root;
}

struct node * transform(struct node *root)
{
    struct node *rear;
    if (root == NULL)
    {
        return root;
    }
    root = transformdet(root);
    rear = root;
    while (root->left != NULL)
    {
        root = root->left;
    }
    while (rear->right != NULL)
    {
        rear = rear->right;
    }
    root->left = rear;
    rear->right = root;

    return (root);
}

void create(struct node **root)
{
    struct node *temp, *p, *q;
    int a, ch;

    do
    {
        p = *root;
        printf("Enter a number in the tree: ");
        scanf("%d", &a);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->num = a;
        temp->used = 0;
        temp->left = temp->right = NULL;
        if (*root == NULL)
        {
            *root = temp;
        }
        else
        {
            while (p != NULL)
            {
                q = p;
                if (p->num >= temp->num)
                {
                    p = p->right;
                }
                else
                {
                    p = p->left;
                }
            }
            if (q->num >= temp->num)
            {
                q->right = temp;
            }
            else
            {
                q->left = temp;
            }
        }
        printf("Do you want to add more numbers? [1/0]\n");
        scanf("%d", &ch);
    } while (ch != 0);
}

void display(struct node *root, int n)
{
    struct node *temp;

    if (root != NULL && !n)
    {
        display(root->left, 0);
        printf("%d   ", root->num);
        display(root->right, 0);
    }
    else if (root != NULL && n)
    {
        temp = root;
        printf("%d   ", temp->num);
        temp = temp->right;
        while (temp != root)
        {
            printf("%d   ", temp->num);
            temp = temp->right;
        }
        printf("\n");
    }
}

void release(struct node **root)
{
    if (*root != NULL)
    {
        release(&(*root)->right);
        free(*root);
    }
}
