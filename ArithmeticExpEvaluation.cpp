#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    char *arr;
    int top;

    int size;
};

bool isEmpty(struct Stack *n)
{

    if (n->top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(struct Stack *n)
{
    if (n->top == n->size - 1)
    {
        return true;
    }

    else
    {
        return false;
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

char pop(struct Stack *n)
{
    if (isEmpty(n))
    {
        cout << "Stack Underflow" << endl;
    }

    char val = n->arr[n->top];
    n->top--;
    return val;
}

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int stackTop(struct Stack *ptr)
{
    return ptr->arr[ptr->top];
}

int stackBottom(struct Stack *ptr)
{
    return ptr->arr[0];
}

char *infixtoPostfix(char *infix)
{

    struct Stack *sp = (struct Stack *)malloc(sizeof(struct Stack));

    sp->size = 10;
    sp->top = -1;
    sp->arr = (char *)malloc(sizeof(char) * sp->size);
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0;
    int j = 0;

    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {

            if (precedence(infix[i]) > precedence(stackTop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }

    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{

    char *infix = 'x-y/z-k*d';
    printf("Postfix is ", infixtoPostfix(infix));
    return 0;
}