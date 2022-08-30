#include <iostream>
#include<stdlib.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct Stack *n)
{

    if (n->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int  isFull(struct Stack *n)
{
    if (n->top == n->size - 1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

void push(struct Stack *n, char data)
{
    if (isFull(n))
    {
        cout << "Stack Overflow! No more elements can be added" << endl;
    }

    else
    {
        n->top++;
        n->arr[n->top] = data;
    }
}

void pop(struct Stack *n)
{
    if (isEmpty(n))
    {
        cout << "Stack Underflow" << endl;
    }

    char val = n->arr[n->top];
    n->top--;
    cout << val << endl;
}

int ParanthesisMatching(char *exp)
{
    struct Stack *n;

    n= new Stack();
    n->size = 200;
    n->top = -1;
    n->arr = (char*)malloc(n->size*sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(n, '(');
        }

        else if (exp[i] == ')')
        {
            if (isEmpty(n))
            {
                return 0;
            }
            else
            {
                pop(n);
            }
        }

    if (isEmpty(n))
        {
            return 1;
        }
    else
        {
            return 0;
        }
    }
}

int main()
{
    char *exp;
    exp = "((8+2)*)";
    if (ParanthesisMatching(exp))
    {
        cout << "Parenthesis is matching" << endl;
    }
    else
    {
        cout << "Parenthesis is not matching" << endl;
    }

    return 0;
}