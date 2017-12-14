/*
 * C Program to Print Border of given Tree in Anticlockwise Direction
 *              50
 *             /  \
 *            20  30
 *           /  \
 *          70  80
 *         / \    \
 *       10  40   60
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
bt *new, *ptr, *ptr1, *ptr2;

void print();
void print_leaf_nodes(bt*);
void print_right_recursive(bt*);
bt* create();
void construct_binary_tree();

void main()
{
    construct_binary_tree();
    printf("\nprinting the border elements anticlockwise direction:\n");
    print();
    printf("\n");
}

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

void print()
{
    ptr = root;
    while (ptr->l != NULL)
    {
        printf("->%d", ptr->value);
        ptr = ptr->l;
    }
    ptr = root;
    print_leaf_nodes(ptr);
    ptr = root;
    print_right_recursive(ptr);
}

void print_leaf_nodes(bt* ptr)
{
    if (ptr != NULL)
    {
        if (ptr->l == NULL && ptr->r == NULL)
        {
            printf("->%d", ptr->value);
        }
        else
        {
            print_leaf_nodes(ptr->l);
            print_leaf_nodes(ptr->r);
        }
    }
    else
        return;
}

void print_right_recursive(bt* ptr)
{
    int val;
    ptr = ptr->r;
    if (ptr->r != NULL)
    {
        print_right_recursive(ptr->r);
        printf("->%d", ptr->value);
    }
    else
    {
        return;
    }
}
