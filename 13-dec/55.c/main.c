/*
 * C Program to Check whether a Tree and its Mirror Image are same
 *                        50                               50
 *                       /  \                             /  \
 *                      20     30                        30   20
 *  Sample Tree<------ /  \                                  /  \   ----------> Mirror image
 *                    70      80                            80   70
 *                   /  \    \                             /    /  \
 *                  10  40     60                        60   40   10
 *                             (50,20,30,70,80,10,40,60)
 */
#include <stdio.h>
#include <stdlib.h>

struct btnode {
    int value;
    struct btnode * l;
    struct btnode * r;
};

typedef struct btnode bt;

bt *root,*temp;
bt *new;
int c;

bt * create_node();
void display(bt *);
bt * construct_tree();
void mirror_image(bt *);
int compare(bt *,bt *);

void main()
{
    root = construct_tree();
    display(root);
    temp = construct_tree();
    mirror_image(temp);
    printf("\n mirror image:\n");
    display(temp);
    c = compare(root,temp);
    if (c)
    {
        printf("\nsame");
    }
    else
    {
        printf("\nnot same");
    }
}

/* creates new node */
bt * create_node()
{
    new=(bt *)malloc(sizeof(bt));
    new->l = NULL;
    new->r = NULL;
}

/* constructs the tree */
bt * construct_tree()
{
    bt *list;

    list = create_node();
    list->value = 50;
    list->l = create_node();
    list->l->value = 20;
    list->r = create_node();
    list->r->value = 30;
    list->l->l = create_node();
    list->l->l->value = 70;
    list->l->r = create_node();
    list->l->r->value = 80;
    list->l->r->r = create_node();
    list->l->r->r->value = 60;
    list->l->l->l = create_node();
    list->l->l->l->value = 10;
    list->l->l->r = create_node();
    list->l->l->r->value = 40;

    return list;
}

/* displays the tree using inorder */
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

/* creates mirror image of a tree */
void mirror_image(bt * list)
{
    bt * temp1;

    if (list == NULL)
    {
        return;
    }
    temp1 = list->l;
    list->l = list->r;
    list->r = temp1;
    mirror_image(list->l);
    mirror_image(list->r);
}

/* compares tree and its mirror image */
int compare(bt *list, bt * list1)
{
    int d;
    if (list == NULL && list1 == NULL)
    {
        return 1;
    }
    else if (list != NULL && list1 != NULL)
    {
        return(list->value == list1->value &&
        compare(list->l, list1->l) &&
        compare(list->r, list1->r));
    }
    else
    {
        return 0;
    }
}
