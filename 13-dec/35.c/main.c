/*
 * C Program for Depth First Binary Tree Search without using
 * Recursion
 */
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int a;
    struct node *left;
    struct node *right;
    int visited;
};

void generate(struct node **, int);
void DFS(struct node *);
void delete(struct node **);

int main()
{
    struct node *head = NULL;
    int choice = 0, num, flag = 0, key;

    do
    {
        printf("\nEnter your choice:\n1. Insert\n2. Perform DFS Traversal\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("Enter element to insert: ");
            scanf("%d", &num);
            generate(&head, num);
            break;
        case 2:
            DFS(head);
            break;
        case 3:
            delete(&head);
            printf("Memory Cleared\nPROGRAM TERMINATED\n");
            break;
        default:
            printf("Not a valid input, try again\n");
        }
    } while (choice != 3);

    return 0;
}

void generate(struct node **head, int num)
{
    struct node *temp = *head, *prev = *head;

    if (*head == NULL)
    {
        *head = (struct node *)malloc(sizeof(struct node));
        (*head)->a = num;
        (*head)->visited = 0;
        (*head)->left = (*head)->right = NULL;
    }
    else
    {
        while (temp != NULL)
        {
            if (num > temp->a)
            {
                prev = temp;
                temp = temp->right;
            }
            else
            {
                prev = temp;
                temp = temp->left;
            }
        }
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = num;
        temp->visited = 0;
        if (temp->a >= prev->a)
        {
            prev->right = temp;
        }
        else
        {
            prev->left = temp;
        }
    }
}

void DFS(struct node *head)
{
    struct node *temp = head, *prev;

    printf("On DFS traversal we get:\n");
    while (temp && !temp->visited)
    {
        if (temp->left && !temp->left->visited)
        {
            temp = temp->left;
        }
        else if (temp->right && !temp->right->visited)
        {
            temp = temp->right;
        }
        else
        {
            printf("%d  ", temp->a);
            temp->visited = 1;
            temp = head;
        }
    }
}

void delete(struct node **head)
{
    if (*head != NULL)
    {
        if ((*head)->left)
        {
            delete(&(*head)->left);
        }
        if ((*head)->right)
        {
            delete(&(*head)->right);
        }
        free(*head);
    }
}
