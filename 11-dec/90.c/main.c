/*
 * C Program to Construct a Balanced Binary Search Tree
 * which has same data members as the given Doubly Linked List
 */
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *left;
    struct node *right;
};

void create(struct node **);
void treemaker(struct node **, int);
void display(struct node *);
void displayTree(struct node *);
void delete(struct node **);

int main()
{
    struct node *headList = NULL, *rootTree, *p;
    int count = 1, flag = 0;

    create(&headList);
    printf("Displaying the doubly linked list:\n");
    display(headList);
    rootTree = p = headList;
    while (p->right != NULL)
    {
        p = p->right;
        count = count + 1;
        if (flag)
        {
            rootTree = rootTree->right;
        }
        flag = !flag;
    }
    treemaker(&rootTree, count / 2);
    printf("Displaying the tree: (Inorder)\n");
    displayTree(rootTree);
    printf("\n");

    return 0;
}

void create(struct node **head)
{
    struct node *rear, *temp;
    int a, ch;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->num = a;
        temp->right = NULL;
        temp->left = NULL;
        if (*head == NULL)
        {
            *head = temp;
        }
        else
        {
            rear->right = temp;
            temp->left = rear;
        }
        rear = temp;
        printf("Do you wish to continue [1/0] ?: ");
        scanf("%d", &ch);
    } while (ch != 0);
}

void treemaker(struct node **root, int count)
{
    struct node *quarter, *thirdquarter;
    int n = count, i = 0;

    if ((*root)->left != NULL)
    {
        quarter = (*root)->left;
        for (i = 1; (i < count / 2) && (quarter->left != NULL); i++)
        {
            quarter = quarter->left;
        }
        (*root)->left->right = NULL;
        (*root)->left = quarter;
        /*
         * Uncomment the following line to see when the pointer changes
         */
        //printf("%d's left child is now %d\n", (*root)->num, quarter->num);
        if (quarter != NULL)
        {
            treemaker(&quarter, count / 2);
        }
    }
    if ((*root)->right != NULL)
    {
        thirdquarter = (*root)->right;
        for (i = 1; (i < count / 2) && (thirdquarter->right != NULL); i++)
        {
            thirdquarter = thirdquarter->right;
        }
        (*root)->right->left = NULL;
        (*root)->right = thirdquarter;
        /*
         * Uncomment the following line to see when the pointer changes
         */
        //printf("%d's right child is now %d\n", (*root)->num, thirdquarter->num);
        if (thirdquarter != NULL)
        {
            treemaker(&thirdquarter, count / 2);
        }
    }
}

void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d  ", head->num);
        head = head->right;
    }
    printf("\n");
}

/*DisplayTree performs inorder traversal*/
void displayTree(struct node *root)
{
    if (root != NULL)
    {
        displayTree(root->left);
        printf("%d  ", root->num);
        displayTree(root->right);
    }
}

void delete(struct node **root)
{
    if (*root != NULL)
    {
        displayTree((*root)->left);
        displayTree((*root)->right);
        free(*root);
    }
}
