#include <iostream>
using namespace std;

// Singly Linked List..!!
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();

int main()
{

    int choice = 0;

    while (choice != 9)
    {
        cout << "*********Main Menu*********" << endl;
        cout << "Choose one option from the following list ..." << endl;
        cout << "===============================================" << endl;
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning");
        printf("\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            randominsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);

        default:
            cout << "Please enter valid choice.." << endl;
        }
    }

    return 0;
}

void beginsert()
{

    int item;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        cout << "Overflow" << endl;
    }

    else
    {

        cout << "Enter the value: ";
        cin >> item;
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        cout << "Node inserted" << endl;
    }
}

void lastinsert()
{
    int item;
    struct Node *temp;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        cout << "Overflow" << endl;
    }

    else
    {
        cout << "Enter the value: ";
        cin >> item;
        ptr->data = item;
        if (head == NULL)
        {

            ptr->next = NULL;
            head = ptr;
        }

        else
        {

            temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = ptr;
            ptr->next = NULL;
            cout << "Node inserted" << endl;
        }
    }
}

void randominsert()
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    int pos, item;
    struct Node *temp;

    temp = head;
    if (ptr == NULL)
    {
        cout << "Overflow" << endl;
    }

    else
    {
        cout << "Enter the data: ";
        cin >> item;
        ptr->data = item;
        cout << "Enter the location: ";
        cin >> pos;

        for (int i = 0; i < pos; i++)
        {
            temp = temp->next;

            if (temp == NULL)
            {
                cout << "Can't Insert" << endl;
                return;
            }
        }

        ptr->next = temp->next;
        temp->next = ptr;
        cout << "Node inserted at desired location" << endl;
    }
}

void begin_delete()
{

    struct Node *ptr;

    if (head == NULL)
    {
        cout << "No deletion..!" << endl;
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        cout << "Node deleted from beginning" << endl;
    }
}

void last_delete()
{
    struct Node *ptr, *ptr1;
    ptr = head;
    if (head == NULL)
    {
        cout << "No deletion..!" << endl;
    }

    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
        cout << "Only node of the list deleted" << endl;
    }

    else
    {
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }

        ptr1->next = NULL;
        free(ptr);
        cout << "Deleted node from last" << endl;
    }
}

void random_delete()
{
    struct Node *ptr, *ptr1;

    int loc, i;

    cout << "Enter location: " << endl;
    cin >> loc;

    ptr = head;

    for (int i = 0; i < loc; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if (ptr == NULL)
        {
            cout << "cant delete" << endl;
            return;
        }
    }

    ptr1->next = ptr->next;
    free(ptr);
    cout << "Deleted node" << endl;
}

void search()
{
    struct Node *ptr;
    int item, flag = 0, i = 0;
    ptr = head;
    if (ptr == NULL)
    {
        cout << "Empty List" << endl;
    }
    else
    {
        cout << "Enter what you're looking for: ";
        cin >> item;

        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                cout << "Found at location " << i + 1 << endl;
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
            i++;
            ptr = ptr->next;
        }

        if (flag == 0)
        {
            cout << "Not Found" << endl;
        }
    }
}

void display()
{
    struct Node *ptr;
    ptr = head;

    if (ptr == NULL)
    {
        cout << "nothing to print" << endl;
    }
    else
    {

        cout << "Printing values...." << endl;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
}