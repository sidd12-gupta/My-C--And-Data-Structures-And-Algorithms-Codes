#include <iostream>
using namespace std;

//Singly Circular Linked List..!!

struct node
{
    int data;
    struct node *next;
};

struct node *head;

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
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    int item;

    if (ptr == NULL)
    {
        cout << "Overflow" << endl;
    }

    else
    {
        cout << "Enter the data: ";
        cin >> item;
        ptr->data = item;

        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
            cout << "Only node inserted" << endl;
        }

        else
        {
            temp = head;
            ptr->next = head;

            while (temp->next != head)
            {
                temp = temp->next;
            }

            head = ptr;
            temp->next = head;
            cout << "Inserted Node at beginning" << endl;
        }
    }
}

void lastinsert()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    int item;

    if (ptr == NULL)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        cout << "Enter the data: ";
        cin >> item;
        ptr->data = item;

        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }

        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }

            ptr->next = head;
            temp->next = ptr;
        }

        cout << "Node inserted" << endl;
    }
}

void randominsert()
{
    int item, loc;
    struct node *temp;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        cout << "Overflow" << endl;
    }

    else
    {
        cout << "Enter the data: ";
        cin >> item;

        ptr->data = item;
        cout << "Enter your location(starting from 0): ";
        cin >> loc;

        temp = head;
        for (int i = 0; i < loc; i++)
        {
            temp = temp->next;

            if (temp == NULL)
            {
                cout << "Can't insert" << endl;
            }
        }

        ptr->next = temp->next;
        temp->next = ptr;

        cout << "Node inserted at desired location" << endl;
    }
}

void begin_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        cout << "Underflow" << endl;
    }

    else if (head->next == head)
    {
        free(head);
        head = NULL;
        cout << "Node deleted" << endl;
    }
    else
    {
        ptr = head;
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }

        ptr->next = head->next;
        free(head);
        head = ptr->next;
        cout << "Node deleted" << endl;
    }
}

void last_delete()
{
    struct node *ptr, *ptr1;

    if (head == NULL)
    {
        cout << "Nothing to delete" << endl;
    }

    else if (head->next == head)
    {
        free(head);
        head = NULL;
        cout << "Only node deleted" << endl;
    }

    else
    {
        ptr = head;
        ptr1 = ptr;

        while (ptr->next != head)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }

        ptr1->next = ptr->next;

        free(ptr);
        cout << "Node deleted from last" << endl;
    }
}

void random_delete()
{
    struct node *ptr, *ptr1;
    int loc;
    if (head == NULL)
    {
        cout << "No node present..!!" << endl;
    }

    else
    {
        ptr = head;
        for (int i = 0; i < loc; i++)
        {
            ptr1 = ptr;
            ptr = ptr->next;
            if (ptr == NULL)
            {
                cout << "Node can't be deleted" << endl;
                return;
            }
        }

        ptr1->next = ptr->next;
        free(ptr);
        cout << "Node has been deleted from the desired location" << endl;
    }
}

void search()
{
    struct node *ptr;
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

        while (ptr != head)
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
    struct node *ptr;
    ptr = head;

    if (ptr == NULL)
    {
        cout << "nothing to print" << endl;
    }
    else
    {

        cout << "Printing values...." << endl;
        while (ptr != head)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
}