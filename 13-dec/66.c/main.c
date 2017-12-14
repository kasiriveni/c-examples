/*
 * C Program to Print all the Paths from the Root to the Leaf
 * in a Tree
 */
#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node* left;
   struct node* right;
};

void print_paths_recur(struct node* node, int path[], int path_len);
void print_array(int ints[], int len);

/*Function to store all the paths from the root node to all leaf nodes in  a array*/

void print_paths(struct node* node)
{
  int path[1000];
  print_paths_recur(node, path, 0);
}

/*Function which helps the print_path to recursively print all the nodes*/
void print_paths_recur(struct node* node, int path[], int path_len)
{
  if (node == NULL)
    return;

  path[path_len] = node->data;
  path_len++;

  if (node->left == NULL && node->right == NULL)
  {
    print_array(path, path_len);
  }
  else
  {
    print_paths_recur(node->left, path, path_len);    //recursively calls the left node of the tree
    print_paths_recur(node->right, path, path_len);    //recursively calls the right node of the tree
  }
}

/*Function to print all the paths */
void print_array(int ints[], int len)
{
  int i;
  for (i = 0; i < len; i++)
  {
    printf("%d -> ", ints[i]);
  }
  printf("\n");
}

struct node* newnode(int data)
{
  struct node* node = (struct node*) malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return(node);
}

int main()
{
   /*
    The input tree is as shown below
                40
                / \
            20        60
            / \       \
        10        30      80
                          \
                            90
  */
  struct node *root = newnode(40);
  root->left = newnode(20);
  root->right = newnode(60);
  root->left->left = newnode(10);
  root->left->right = newnode(30);
  root->right->right = newnode(80);
  root->right->right->right = newnode(90);
  print_paths(root);
  return 0;
}
