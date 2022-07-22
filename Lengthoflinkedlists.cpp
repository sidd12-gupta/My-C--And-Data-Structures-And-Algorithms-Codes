#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

int Length_LL_Iterative(struct Node *ptr)
{
    int count = 0;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        count++;
    }

    return count;
}

int Length_LL_Recursive(struct Node *ptr)
{
    if (ptr == NULL)
    {
        return 0;
    }
    else
    {

        return 1 + Length_LL_Recursive(ptr->next);
    }
}

int main()
{
    struct Node *head = new Node();
    struct Node *second = new Node();
    struct Node *third = new Node();

    head->data = 5;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 10;
    third->next = NULL;

    cout << "The length of the given linked list is: " << Length_LL_Iterative(head) << endl;
    cout << "The length of the linked list by recursion is " << Length_LL_Recursive(head) << endl;
    return 0;
}