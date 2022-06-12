#include <bits/stdc++.h>
using namespace std;

struct CircularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

bool isFull(struct CircularQueue *ptr)
{
    if ((ptr->r + 1) % ptr->size == ptr->f)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmpty(struct CircularQueue *ptr)
{
    if (ptr->r == ptr->f)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue(struct CircularQueue *ptr, int val)
{
    if (isFull(ptr))
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {
        ptr->r = (ptr->r + 1) % ptr->size;
        ptr->arr[ptr->r] = val;
        cout << "Enqueued element is " << val << endl;
    }
}

int dequeue(struct CircularQueue *ptr)
{
    int a = -1;
    if (isEmpty(ptr))
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        ptr->f = (ptr->f + 1) % ptr->size;
        a = ptr->arr[ptr->f];
    }
    return a;
}

void print(struct CircularQueue *q,int n){
    for(int i=0;i<n;i++){
        cout<<q->arr[i]<<" ";
    }
}

int main()
{
    struct CircularQueue *q = new CircularQueue();
    q->size = 4;
    q->f = q->r = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    enqueue(q, 15);
    enqueue(q, 14);
    enqueue(q, 13);
    print(q,q->size);

    return 0;
}