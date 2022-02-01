#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *leftNode;
    struct node *rightNode;
}node;
void inorder(node *rootNode)
{
    if (rootNode == NULL)
        return;
    inorder(rootNode->leftNode);
    printf("%d ->", rootNode->data);
    inorder(rootNode->rightNode);
}
void preorder(node *rootNode)
{
    if (rootNode == NULL)
        return;
    printf("%d ->", rootNode->data);
    preorder(rootNode->leftNode);
    preorder(rootNode->rightNode);
}
void postorder(node *rootNode)
{
    if (rootNode == NULL)
        return;
    postorder(rootNode->leftNode);
    postorder(rootNode->rightNode);
    printf("%d ->", rootNode->data);
}
node* createNode(int value)
{
    node *newNode = malloc(sizeof(node));
    newNode->data = value;
    newNode->leftNode = NULL;
    newNode->rightNode = NULL;
    return newNode;
}
node *leftIn(node *rootNode, int value)
{
    rootNode->leftNode = createNode(value);
    return rootNode->leftNode;
}
node *rightIn(node *rootNode, int value)
{
    rootNode->rightNode = createNode(value);
    return rootNode->rightNode;
}
int main()
{
    node * rootNode = createNode(7);
    leftIn(rootNode, 4);
    rightIn(rootNode, 8);
    leftIn(rootNode->leftNode, 1);
    rightIn(rootNode->rightNode, 5);
    leftIn(rootNode->leftNode, 6);
    rightIn(rootNode->rightNode, 3);
    printf("Inorder \n");
    inorder(rootNode);
    printf("\nPreorder \n");
    preorder(rootNode);
    printf("\nPostorder \n");
    postorder(rootNode);
    return 0;
}