/*
 * C Program to Print only Nodes in Left SubTree
 */
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

int queue[100];
int front = 0, rear = 0, val;

/*Function to traverse the tree using Breadth First Search*/
void bfs_traverse(struct node *node)
{
    val = node->data;
    if ((front<= rear)&&(node->data == queue[front]))
    {
        if (node->left != NULL)
            queue[rear++] = node->left->data;
        if (node->right != NULL)
            queue[rear++] = node->right->data;
        front++;
    }
    if (node->left != NULL)
    {
        bfs_traverse(node->left);
    }
    if (node->right != NULL)
    {
        bfs_traverse(node->right);
    }
}

struct node* newnode(int data)
{
    struct node* node  =  (struct node *)malloc(sizeof(struct node));
    node->data  =  data;
    node->left  =  NULL;
    node->right  =  NULL;

    return(node);
}

int main()
{
    int i;

    /*
    The input tree is as shown below
                40
                / \
            20        60
            / \       \
        10        30      80
                          \
                            90
    */
    struct node *root  =  newnode(40);
    root->left         =  newnode(20);
    root->right        =  newnode(60);
    root->left->left   =  newnode(10);
    root->left->right  =  newnode(30);
    root->right->right  =  newnode(80);
    root->right->right->right  =  newnode(90);
    queue[rear++] = root->left->data;
    bfs_traverse(root->left);
    for (i = 0;i < rear;i++)
        printf("%d->", queue[i]);
    return 0;
}
