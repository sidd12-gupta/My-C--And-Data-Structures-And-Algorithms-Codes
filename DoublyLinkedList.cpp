#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void DoublyLinkedTrav(struct Node *ptr)
{

    while (ptr->next != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }

    do
    {
        cout << ptr->data << "<-";
        ptr = ptr->prev;
    } while (ptr != NULL);
}

int main()
{
    struct Node *head = new Node();
    struct Node *second = new Node();
    struct Node *third = new Node();

    head->data = 23;
    head->prev = NULL;
    head->next = second;

    second->data = 34;
    second->prev = head;
    second->next = third;

    third->data = 56;
    third->prev = second;
    third->next = NULL;

    DoublyLinkedTrav(head);
    return 0;
}