#include <iostream>
using namespace std;

// Doubly Linked List..!

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
        cout << "Enter data: ";
        cin >> item;
        ptr->data = item;
        if (head == NULL)
        {
            head = ptr;
            ptr->prev = ptr->next = NULL;
            cout << "Only node inserted" << endl;
        }

        else
        {
            ptr->prev = NULL;
            ptr->next = head;
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
    struct node *temp;

    if (ptr == NULL)
    {
        cout << "Overflow" << endl;
    }

    else
    {
        cout << "Enter data: ";
        cin >> item;
        ptr->data = item;
        if (head == NULL)
        {

            head = ptr;
            ptr->prev = ptr->next = NULL;
            cout << "Only node inserted" << endl;
        }

        else
        {
            temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            ptr->prev = temp;
            temp->next = ptr;
            ptr->next = NULL;
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
        if (head == NULL)
        {
            cout << "No node present in the list" << endl;
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
                    cout << "Cannot insert" << endl;
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
}

void begin_delete()
{
    struct node *temp;

    if (head == NULL)
    {
        cout << "No node present in the list" << endl;
    }

    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
        cout << "Only node deleted" << endl;
    }

    else
    {
        temp = head;
        head = temp->next;
        head->prev = NULL;
        free(temp);
        cout << "Node deleted" << endl;
    }
}

void last_delete()
{
    struct node *temp;

    if (head == NULL)
    {
        cout << "No node present in the list" << endl;
    }

    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
        cout << "Only node deleted" << endl;
    }

    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->prev->next = NULL;
        free(temp);
        cout << "Deleted node" << endl;
    }
}

void random_delete()
{
    struct node *temp;
    int loc;

    if (head == NULL)
    {
        cout << "No node is present" << endl;
    }

    else
    {
        temp = head;
        cout << "Enter location: ";
        cin >> loc;

        for (int i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << "Can't delete" << endl;
                return;
            }
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        cout << "Deleted node from location " << loc << endl;
    }
}

void search()
{
    struct node *ptr;
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d", &item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("\nitem found at location %d ", i + 1);
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            printf("\nItem not found\n");
        }
    }
}

void display()
{
    struct node *ptr;
    printf("\n printing values...\n");
    ptr = head;
    while (ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}