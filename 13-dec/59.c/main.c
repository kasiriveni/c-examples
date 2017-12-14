/*
 * C Program to Print all the Elements of Nth Level in Single Line
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * structure of node
 */
struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
};
typedef struct btnode node;

void createbinary();
node* add(int val);
int height(node *);
void printlevel(node *, int, int);
void print();


node *root = NULL, *ptr;

int  main()
{
    int c;

    createbinary();
    print();
}
/*
 * constructing the following binary tree
 *     50
 *     / \
 *    20 30
 *   / \
 *  70 80
 * / \     \
 *10 40      60
 */
void createbinary()
{
    root = add(50);
    root->l = add(20);
    root->r = add(30);
    root->l->l = add(70);
    root->l->r = add(80);
    root->l->l->l = add(10);
    root->l->l->r = add(40);
    root->l->r->r = add(60);
}

/*
 * Adding node to binary tree
 */
node* add(int val)
{
    ptr = (node*)malloc(sizeof(node));
    if (ptr == NULL)
    {
        printf("Memory was not allocated");
        return;
    }
    ptr->value = val;
    ptr->l = NULL;
    ptr->r = NULL;
    return ptr;
}

/*
 * Prints all the nodes of all levels of the binary tree
 */
void print()
{
    int h, i;

    h = height(root);
    for (i = 0;i < h;i++)
    {
        printf("\nLEVEL %d  :", i);
        printlevel(root, i, 0);
        printf("\n");
    }
}
/*
 *Prints the nodes of a particular level
 */
void printlevel(node *n, int desired, int current)
{
    if (n)
    {
        if (desired == current)
            printf("%d\t", n->value);
        else
        {
            printlevel(n->l, desired, current + 1);
            printlevel(n->r, desired, current + 1);
        }
    }
}

/*
 * Height of the binary tree
 */
int height(node *n)
{
    int lheight, rheight;
    if (n != NULL)
    {
        lheight = height(n->l);
        rheight = height(n->r);
        if (lheight > rheight)
            return(lheight+1);
        else
            return(rheight+1);
    }
}
