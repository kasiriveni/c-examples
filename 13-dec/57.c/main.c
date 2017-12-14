/*
 * C Program to Find the Nearest Common Ancestor in the Given set
 * of Nodes
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * Structure of binary tree node
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
int nearest_common_ancestor(node*,  int,  int);

node *root = NULL, *ptr;

int  main()
{
    int c, n1, n2;

    createbinary();
    printf("\nEnter nodes having common ancestor");
    scanf("%d %d", &n1, &n2);
    c = nearestcommonancestor(root, n1, n2);
    if (c == -1)
    {
        printf("No common ancestor");
    }
    else
    {
        printf("The common ancestor is %d", c);
    }
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
 * Add node to binary tree
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
 * height of the binary tree
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
}

/*
 * Finds the nearest common ancestor
 */
int nearestcommonancestor(node *temp, int n1, int n2)
{
    int h, i, j, k;
    node *prev;

    /*
     * If any one the inputted node is root then no common ancestor
     */
    if (n1 == root->value || n2 == root->value)
    {
        return - 1;
    }
    h = height(root);
    for (i = 1;i < h;i++)
    {
        if (temp->l->value == n1 || temp->r->value == n1 || temp ->l->value == n2 || temp->r->value == n2)
        {
            prev = temp;
            for (j = 1, temp = root;j < h;j++)
            {
                if (temp != NULL)
                {
                    if (temp->r->value == n2 || temp->r->value == n1 || temp->l->value == n1 || temp->l->value == n2)
                    {
                        /*
                         * If the parent of n1 and parent of n2 are same then the value of parent is returned
                         */
                        if (prev->value == temp->value)
                            return prev->value;
                        /*
                         * otherwise from parents of two nodes is traversed upward if any node matches with other's node parent then that is
                         * considered as common ancestor
                         */
                        else
                            for (k = 0, prev = temp;k < h;k++)
                            {
                                if (temp->l->value == prev->l->value)
                                    return temp->value;
                                else
                                    temp = temp->l;
                            }
                    }
                }
                temp = temp->l;
            }
        }
        temp = temp->l;
    }
}
