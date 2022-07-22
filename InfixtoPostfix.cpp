#include<iostream>
#include<string>
using namespace std;

int isOperator(char ch);

int Precedence(char ch);

struct Stack
{
    int size;
    int top;
    int *arr;
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

void push(struct Stack *n, int data)
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

    int val = n->arr[n->top];
    n->top--;
    cout << val << endl;
}

void display(struct Stack *n)
{

    if (n->top >= 0)
    {
        for (int i = n->top; i >= 0; i--)
        {
            cout << " " << n->arr[i];
        }
    }
    else
    {
        cout << "Stack is empty" << endl;
    }
}

char* IntoPo(char* infix){
    struct stack *n;
    char *pos= (char*)malloc(strlen(infix+1)*sizeof(char));
    int i=0;
    int j=0;

    while(infix[i]=='\0'){
        if (!isOperator(infix[i])){
            pos[j]=infix[i];
            i++;
            j++;
        }
        else{
            if(Precedence(infix[i])>stackTop(n)){
                push(n,infix[i]);

            }
            else{
                pos[j]=pop(n);
                j++;
            }
        }
    }
    while(!isEmpty(n)){
        pos[j]=pop(sp);
        j++;
    }
    pos[j]='\0';
    return pos;
    
}

int isOperator(char ch){
    if(ch="+"||ch="-"||ch="*"||ch="/"){
        return 1;
    }
    else{
        return 0;
    }
}

int Precedence(char ch){
    if(ch=="*"||ch=="/"){
        return 3;
    }
    else if(ch=="+"||ch=="-"){
        return 2;
    }
    else{
        return 0;
    }

}

int main(){
    char * infix = "x-y/z-k*d";
    cout<<"Postfix is "<<IntoPo(infix);
    return 0;
}