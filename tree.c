#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    int info;
    struct tree *left;
    struct tree *right;
} node;

int c = 0;

node *createnode(int key)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->info = key;
    newnode->left = NULL;
    newnode->right = NULL;
    return (newnode);
}

void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d  ", root->info);
}

int main()
{
    node *newnode = createnode(10);
    newnode->left = createnode(11);
    newnode->right = createnode(12);
    newnode->left->left = createnode(13);
    newnode->left->right = createnode(14);
    newnode->right->left = createnode(15);
    newnode->right->right = createnode(16);
    postorder(newnode);
    return 0;
}