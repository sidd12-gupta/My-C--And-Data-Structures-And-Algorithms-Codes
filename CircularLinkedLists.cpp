#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

CircularLinkedListTrav(struct Node *head)
{

    struct Node *ptr = head;
    do
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *insertionAtFirst(struct Node *head, int new_data)
{

    struct Node *ptr = new Node();
    ptr->data = new_data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }

    p->next=ptr;
    ptr->next = head;
    head = ptr;
    return head;
}



int main()
{
    struct Node *head = new Node();
    struct Node *second = new Node();
    struct Node *third = new Node();
    struct Node *fourth = new Node();

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data = 10;
    fourth->next = head;
    
    head = insertionAtFirst(head, 78);

    CircularLinkedListTrav(head);
    return 0;
}