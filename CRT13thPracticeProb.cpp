#include <iostream>
using namespace std;

int stack[100], top = -1;
int i, j;
int choice = 0, n;

void push();
void pop();
void show();
void peek();

int main()
{

    printf("Enter the number of elements in the stack ");
    scanf("%d", &n); // n = 5
    printf("*********Stack operations using array*********");
    printf("\n----------------------------------------------\n");
    while (choice != 5)
    {
        printf("Chose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Peek\n5.Exit");
        printf("\n Enter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            peek();
            break;
        case 5:
            printf("Exiting....");
            break;
        default:
            printf("Please Enter valid choice ");
        } // end of switch
    }     // end of while

    return 0;
}

void push()
{
    int val;
    if (top == n)
    {
        cout << "Overflow" << endl;
    }

    else
    {
        cout << "Enter the value: ";
        cin >> val;

        top += 1;
        stack[top] = val;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        top -= 1;
    }
}

void show()
{
    for (i = top; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
}

void peek()
{
    if (top > -1)
    {
        cout << "Peek: " << stack[top] << endl;
    }
    else
    {
        cout << "stack is empty" << endl;
    }
}