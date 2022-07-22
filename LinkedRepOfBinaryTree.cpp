#include <iostream>
using namespace std;

struct node
{

    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main()
{
    struct node *p = createNode(2);
    struct node *q = createNode(5);
    struct node *r = createNode(7);

    p->left = q;
    p->right = r;
    return 0;
}