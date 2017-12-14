/*
 * C Program to Implement Depth First Search Traversal using Post Order
       50
      /  \
    20   30
   /  \
  70  80
 /  \    \
10  40   60
(50, 20, 30, 70, 80, 10, 40, 60)
 */
#include <stdio.h>
#include <stdlib.h>

struct btnode {
    int value;
    struct btnode *l;
    struct btnode *r;
};

typedef struct btnode bt;
bt *root;
bt *new, *list;
bt *create_node();
void display(bt *);
void construct_tree();
void dfs(bt *);

void main()
{
    construct_tree();
    display(root);
    printf("\n");
    printf("Depth first traversal\n ");
    dfs(root);
}

/* Creates an empty node */
bt * create_node()
{
    new=(bt *)malloc(sizeof(bt));
    new->l = NULL;
    new->r = NULL;
}

/* Constructs a tree */
void construct_tree()
{
    root = create_node();
    root->value = 50;
    root->l = create_node();
    root->l->value = 20;
    root->r = create_node();
    root->r->value = 30;
    root->l->l = create_node();
    root->l->l->value = 70;
    root->l->r = create_node();
    root->l->r->value = 80;
    root->l->r->r = create_node();
    root->l->r->r->value = 60;
    root->l->l->l = create_node();
    root->l->l->l->value = 10;
    root->l->l->r = create_node();
    root->l->l->r->value = 40;
}

/* Display the elements in a tree using inorder */
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

/* Dfs traversal using post order */
void dfs(bt * list)
{
    if (list == NULL)
    {
        return;
    }
    dfs(list->l);
    dfs(list->r);
    printf("->%d ", list->value);
}
