#include <iostream>
using namespace std;

// Doubly Circular..!

struct node
{
    int data;
    struct node *prev;
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
            break;
        default:
            cout << "Please enter valid choice.." << endl;
        }
    }

    return 0;
}

void beginsert()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    int item;

    if (ptr == NULL)
    {
        cout << "Overflow" << endl;
    }

    else
    {

        cout << "Enter value: ";
        cin >> item;
        ptr->data = item;

        if (head == NULL)
        {
            head = ptr;
            ptr->prev = ptr->next = head;

            cout << "Only node inserted" << endl;
        }

        else
        {
            ptr->next = head;
            ptr->prev = head->prev;
            head->prev->next = ptr;
            head->prev = ptr;
            head = ptr;
            cout << "Node inserted" << endl;
        }
    }
}

void lastinsert()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    int item;

    if (ptr == NULL)
    {
        cout << "Overflow" << endl;
    }

    else
    {
        cout << "Enter: ";
        cin >> item;

        ptr->data = item;

        if (head == NULL)
        {
            ptr->prev = ptr->next = NULL;
            head = ptr;
        }

        else
        {
            ptr->prev = head->prev;
            ptr->next = head;
            head->prev->next = ptr;
            head->prev = ptr;
            cout << "Node inserted" << endl;
        }
    }
}

void randominsert()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    int item, loc;

    struct node *temp;

    if (ptr == NULL)
    {
        cout << "Overflow" << endl;
    }

    else
    {
        temp = head;
        cout << "Enter data: ";
        cin >> item;
        ptr->data = item;
        cout << "Enter location: ";
        cin >> loc;
        for (int i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << "Can't insert" << endl;
                return;
            }
        }

        ptr->prev = temp;
        ptr->next = temp->next;
        temp->next->prev = ptr;
        temp->next = ptr;
        cout << "Node inserted after location " << loc << endl;
    }
}

void begin_delete()
{

    struct node *ptr;

    ptr = head;
    if (head == NULL)
    {
        cout << "Underflow" << endl;
    }

    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }

    else
    {
        head = ptr->next;
        ptr->prev->next = head;
        head->prev = ptr->prev;
        free(ptr);
        cout << "Deleted node..!" << endl;
    }
}

void last_delete()
{
    struct node *temp;
    temp = head;

    if (head == NULL)
    {
        cout << "Underflow" << endl;
    }

    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }

    else
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }

        head->prev = temp->prev;
        temp->prev->next = head;
        free(temp);
        cout << "Deleted node..!" << endl;
    }
}

void random_delete()
{
    int loc;
    struct node *ptr;

    if (head == NULL)
    {
        cout << "Can't delete" << endl;
    }

    else
    {
        cout << "Enter location: " << endl;
        cin >> loc;
        ptr = head;
        for (int i = 0; i < loc; i++)
        {
            ptr = ptr->next;

            if (ptr == NULL)
            {
                cout << "Can't Delete" << endl;
                return;
            }
        }

        ptr->prev->next = ptr->next;

        ptr->next->prev = ptr->prev;
        free(ptr);

        cout << "Deleted node at specified location" << endl;
    }
}

void search()
{
    struct node *ptr;
    int item, flag = 0, i = 0;

    cout << "Enter what you're looking for: ";
    cin >> item;

    ptr = head;
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
        while (ptr->next != head)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << " " << ptr->data;
    }
}