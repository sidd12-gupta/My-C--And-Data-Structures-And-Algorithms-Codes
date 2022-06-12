#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int f;
    int r;
    int size;
    int *arr;
};

void initialize(struct Queue *q)
{
    q->f = -1;
    q->r = -1;
}

bool isEmpty(struct Queue *q)
{
    if (q->f == q->r)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(struct Queue *q)
{
    if (q->r == q->size - 1 && q->f == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enqueueR(struct Queue *q, int val)
{
    if (isFull(q))
    {
        cout << "Queue Overflow...!!" << endl;
    }

    q->r++;
    q->arr[q->r] = val;
}

int dequeueF(struct Queue *q)
{
    if (isEmpty(q))
    {
        cout << "Queue Underflow...!!" << endl;
    }

    q->f++;
    int a = q->arr[q->f];
    return a;
}

void enqueueF(struct Queue *q, int val)
{
    if (isFull(q))
    {
        cout << "Queue Overflow...!!" << endl;
    }

    if (q->f >= 0)
    {
        q->arr[q->f] = val;
        q->f--;
    }

    else
    {
        cout << "Cannot enqueue in the front side!!" << endl;
    }
}

int dequeueR(struct Queue *q)
{
    if (isEmpty(q))
    {
        cout << "Queue Underflow...!!" << endl;
    }

    int a = q->arr[q->r];
    q->r--;
    return a;
}

void print(struct Queue *q, int arr[], int n)
{
    for (int i = 0; i < q->r + 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    struct Queue *q = new Queue();
    q->size = 10;
    initialize(q);
    q->arr = (int *)malloc(q->size * sizeof(int));

    enqueueR(q, 23);
    enqueueR(q, 25);
    enqueueR(q, 12);

    dequeueF(q);

    enqueueF(q, 18);

    print(q, q->arr, q->size);
    return 0;
}