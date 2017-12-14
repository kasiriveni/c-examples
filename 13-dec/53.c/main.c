
/*
 * C Program to Print Height and Depth of given Binary Tree
 *                                        50
 *                                       /  \
 *                                      20   30
 *                                     /  \
 *                                    70  80
 *                                   / \    \
 *                                  10  40   60
 */
#include <stdio.h>
#include <stdlib.h>

struct btnode {
    int value;
    struct btnode *l;
    struct btnode *r;
};
struct btnode *root;
typedef struct btnode bt;
bt *new,*ptr,*ptr1,*ptr2;

bt* create()
{
    new = (bt *)malloc(sizeof(bt));
    new->l = NULL;
    new->r = NULL;
    return new;
}

void construct_binary_tree()
{
    root = create();
    root->value = 50;

    ptr = create();
    root->l = ptr;
    ptr->value = 20;

    ptr1 = create();
    ptr->l = ptr1;
    ptr1->value = 70;

    ptr2 = create();
    ptr1->l = ptr2;
    ptr2->value = 10;

    ptr2 = create();
    ptr1->r = ptr2;
    ptr2->value = 40;

    ptr1 = create();
    ptr->r = ptr1;
    ptr1->value = 80;

    ptr2 = create();
    ptr1->r = ptr2;
    ptr2->value = 60;

    ptr = create();
    root->r = ptr;
    ptr->value = 30;
}

void main()
{
    int depth1 = 0, depth2 = 0;

    construct_binary_tree();
    ptr = root;
    while (ptr->l != NULL || ptr->r != NULL)
    {
        depth1++;
        if (ptr->l == NULL)
            ptr = ptr->r;
        else
            ptr = ptr->l;
    }
    ptr = root;
    while (ptr->l != NULL || ptr->r != NULL)
    {
        depth2++;
        if (ptr->r == NULL)
            ptr = ptr->l;
        else
            ptr = ptr->r;
    }
/*
 *DEPTH IS CONSIDERED FROM LEVEL-0 ALSO HEIGHT IS CONSIDERED AS NUMBER OF EDGES
 */
    if (depth1 > depth2)
        printf("height of the tree is %d\ndepth of the tree is %d",depth1,depth1);
    else
        printf("height of the tree is %d\ndepth of the tree is %d",depth2,depth2);
}
