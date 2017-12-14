/*
 * C Program to Convert a Binary Tree into a Singly Linked List by Traversing Level by Level
 */

#include <stdio.h>
#include <stdlib.h>

/*structure type to create a tree*/
struct node
{
    int num;
    struct node *left;
    struct node *right;
};
/*
 * structure type to point to the nodes of a tree
 * and also create self-referential list used for
 * queueing.
 */
struct queue
{
    struct node *nodeptr;
    struct queue *next;
};
/* resulting singly linked list */
struct list
{
    int num;
    struct list *next;
};

void createTree(struct node **);
void createlistbfs(struct node *, struct list **);
void delete(struct node **);
void display(struct list *);
void deleteList(struct list **);

int main()
{
    struct node *root = NULL;
    struct list *head = NULL;

    createTree(&root);
    createlistbfs(root, &head);
    printf("Displaying the list generated at node by node level of the tree: ");
    display(head);
    deleteList(&head);
    delete(&root);

    return 0;
}

void createTree(struct node **root)
{
    struct node *temp, *p, *q;
    int a, ch;

    do
    {
        printf("Enter a number for a node: ");
        scanf("%d", &a);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->num = a;
        temp->left = NULL;
        temp->right = NULL;
        p = q = *root;
        if (*root == NULL)
        {
            *root = temp;
        }
        else
        {
            while (1)
            {
                q = p;
                if (p->num >= temp->num)
                {
                    p = p->left;
                }
                else
                {
                    p = p->right;
                }
                if (p == NULL)
                {
                    break;
                }
            }
            if (q->num >= temp->num)
                q->left = temp;
            else
                 q->right = temp;
        }
        printf("Do you want to continue? [1/0]: ");
        scanf("%d", &ch);
    } while (ch != 0);
}

void createlistbfs(struct node *root, struct list **head)
{
    struct queue *qhead, *qrear, *qtemp, *qrelease;
    struct list *temp, *rear;

    if (root == NULL)
    {
        return;
    }
    qhead = (struct queue *)malloc(sizeof(struct queue));
    qhead->nodeptr = root;
    qhead->next = NULL;
    qrear = qhead;
    while (qhead != NULL)
    {

        temp = (struct list *)malloc(sizeof(struct list));
        temp->num = qhead->nodeptr->num;
        temp->next = NULL;
        if (*head == NULL)
        {
            *head = temp;
        }
        else
        {
            rear->next = temp;
        }
        rear = temp;
        if (qhead->nodeptr->left != NULL)
        {
            qtemp = (struct queue *)malloc(sizeof(struct queue));
            qtemp->nodeptr = qhead->nodeptr->left;
            qtemp->next = NULL;
            qrear->next = qtemp;
            qrear = qtemp;
        }
        if (qhead->nodeptr->right != NULL)
        {
            qtemp = (struct queue *)malloc(sizeof(struct queue));
            qtemp->nodeptr = qhead->nodeptr->right;
            qtemp->next = NULL;
            qrear->next = qtemp;
            qrear = qtemp;
        }
        qrelease = qhead;
        qhead = qhead->next;
        free(qrelease);
    }
}

void delete(struct node **root)
{
    if (*root == NULL)
    {
        return;
    }
    else
    {
        if ((*root)->left != NULL)
        {
            delete(&((*root)->left));
        }
        if ((*root)->right != NULL)
        {
            delete(&((*root)->right));
        }
    }
}

void display(struct list *head)
{
    while (head != NULL)
    {
        printf("%d  ", head->num);
        head = head->next;
    }
}

void deleteList(struct list **head)
{
    struct list *temp;

    temp = *head;
    while (temp != NULL)
    {
        *head = (*head)->next;
        free(temp);
        temp = *head;
    }
}
