/*
 * C Program to Convert Binary Tree to Binary Search Tree
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * Structure of the binary tree
 */
struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
};
typedef struct btnode node;
void createbinary();
void inorder(node *);
int count(node*);
node* add(int );
void sort();
void binary_to_bst(node *);
int compare(const void *,const void *);
void inorder_to_array(node*,int[],int *);
void array_to_bst(int *arr,node *,int *);
void display_bst(node *);
void print();
void print_level(node*,int,int);
int height(node*);


node *root = NULL,*ptr;

int data[10];
int i = 0;

int  main()
{
    createbinary();
    binary_to_bst(root);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\nThe inorder of binary search tree\n");
    inorder(root);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n================================================");
    printf("\nThe nodes of a binary search tree (LEVEL WISE)");
    printf("\n=================================================");
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
 * Adds a node to the tree
 */
node* add(int val)
{
    ptr = (node*)malloc(sizeof(node));
    if (ptr == NULL)
    {
        printf("Memory was not allocated");
        return 0;
    }
    ptr->value = val;
    ptr->l = NULL;
    ptr->r = NULL;
    return ptr;
}

/*
 * Store the inorder of binary tree
 */
void inorder_to_array(node *n,int data[],int *ptr)
{
    if (n != NULL)
    {
        inorder_to_array(n->l,data,ptr);
        data[*ptr] = n->value;
        (*ptr)++;
        inorder_to_array(n->r,data,ptr);
    }
}

/*
 * counting the number of nodes in a tree
 */
int count(node *n)
{
    int c = 1;

    if (n == NULL)
        return 0;
    else
    {
        c += count(n->l);
        c += count(n->r);
        return c;
    }
}
/*
 *Display inorder of the BST
 */
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->l);
        printf("%d->", root->value);
        inorder(root->r);
    }

}
/*
 * print the nodes of the BST for all levels until height of the tree is reached
 */

void print()
{
    int h, i;

    h = height(root);
    for(i = 0;i < h;i++)
    {
        printf("\nLEVEL %d  :", i);
        print_level(root, i, 0);
        printf("\n");
    }
}

/*
 * print the nodes of the BST for a particular level
 */
void print_level(node *n, int desired, int current)
{
    if (n)
    {
        if (desired == current)
        {
            printf("  %5d", n->value);
        }
        else
        {
            print_level(n->l, desired, current + 1);
            print_level(n->r, desired, current + 1);
        }
   }
}

/*
 * Height of binary tree
 */
int height(node *n)
{
    int lheight, rheight;

    if (n != NULL)
    {
        lheight = height(n->l);
        rheight = height(n->r);
        if (lheight > rheight)
            return(lheight + 1);
        else
            return(rheight + 1);
    }
    else
    {
        return 0;
    }
}
int compare(const void *a, const void *b)
{
    return *(int*)a-*(int*)b;
}

/*
 * copies the elements of array to binary tree
 */
void array_to_bst(int *arr, node *root, int *indexptr)
{
    if (root != NULL)
    {
        array_to_bst(arr,root->l, indexptr);
        root->value = arr[i++];
        array_to_bst(arr,root->r, indexptr);
    }
}

/*
 * Converting binary tree to binary search tree
 * storeinorder() function stores the inorder traversal of binary tree
 * qsort() sorts the inorder of binary tree
 * arraytobst() copies the elements of array to binary tree
 * Then binary tree converted to binary search tree
 */

void binary_to_bst(node *root)
{
    int n, i;

    if (root == NULL)
        return;
    n = count(root);
    i = 0;
    inorder_to_array(root, data, &i);
    qsort(&data, n, sizeof(data[0]), compare);
    i = 0;
    array_to_bst(data, root, &i);
}
