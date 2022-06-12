#include <bits/stdc++.h>
using namespace std;

/*struct Stack
{
    int size;
    int top;
    int *arr;
};

bool isEmpty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(struct Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(struct Stack *ptr, int val)
{
    if (isFull(ptr))
    {
        cout << "Stack Overflow!!" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout << "Stack Underflow!!" << endl;
    }

    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct Stack *ptr, int i)
{

    int pos = ptr->top - i + 1;
    if (pos < 0)
    {
        return -1;
    }
    else
    {
        return ptr->arr[pos];
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

int main()
{
    struct Stack *sp = new Stack();
    sp->size = 50;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    cout << "Stack has been created successfully" << endl;

    push(sp, 76);
    push(sp, 89);
    cout << peek(sp, 2);
    return 0;
}*/

// Stack using linked list..

/*struct Node{
    int data;
    struct Node * next;
};

int isFull(struct Node * top){
    struct Node *p = new Node();
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct Node *top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct Node* push(struct Node *top,int x){
    if(isFull(top)){
        cout<<"Stack Overflow"<<endl;

    }
    else{
        struct Node * n = new Node();
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop*/

// CircularQueue

/*struct CircularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct CircularQueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct CircularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct CircularQueue *q, int val)
{
    if (isFull(q))
    {
        cout << "Queue Overflow..!" << endl;
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        cout << "Enqueued Element is: " << val << endl;
    }
}

int dequeue(struct CircularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        cout << "Queue Underflow..!" << endl;
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct CircularQueue *q = new CircularQueue();
    q->size = 4;
    q->f = q->r = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    enqueue(q, 45);
    enqueue(q, 15);
    enqueue(q, 1);
    cout << "Dequeued Element is: " << dequeue(q) << endl;
    return 0;
}*/

// Queue using Linkedlist
/*struct Node *f = NULL;
struct Node *r = NULL;
struct Node
{
    int data;
    struct Node *next;
};

void LLTrav(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    struct Node *n = new Node();
    if (n == NULL)
    {

        cout << "Queue is Full..!!" << endl;
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        cout << "Queue is Empty..!!" << endl;
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
    cout << "Dequeueing Element " << dequeue() << endl;
    LLTrav(f);
    return 0;
}*/

// StacksUsingLinkedlist
/*
struct Node{
    int data;
    int *link;
};

struct Node * top;

void push(int data){
    struct Node * push_node;
    push_node = new Node();

    if(!push_node){
        cout<<"Heap Overflow!"<<endl;
    }

    push_node->data=data;
    push_node->link=top;
    top=push_node;
}

bool isEmpty(){
    if(top==NULL){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    struct Node * n;
    if(n==NULL){
        return true;
    }
    else{
        return false;
    }
}

void pop(){
    struct Node * removing_node;
    removing_node=new Node();

    if(top==NULL){
        cout<<"Stack Underflow"<<endl;
    }

    removing_node=top;
    top=removing_node->link;
    removing_node->link=NULL;
    delete removing_node;
}*/

// Bubble Sort...
/*
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

//BubbleSort Adaptive

void bubbleSortAdaptive(int arr[], int n)
{
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cout << "Working on pass number " << i + 1 << endl;
        isSorted = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            break;
        }
    }
}

void InsertionSort(int a[], int n)
{
    int key, j;

    for (int i = 1; i <= n - 1; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void printAr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {10, 12, 1, 2, 7, 23};
    int n = sizeof(a) / sizeof(a[0]);

    InsertionSort(a, n);

    printAr(a, n);

    return 0;
}

void SelectionSort(int arr[], int n)
{
    int indexOfmin, temp;
    for (int i = 0; i < n; i++)
    {
        indexOfmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexOfmin])
            {
                indexOfmin = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[indexOfmin];
        arr[indexOfmin] = temp;
    }
}

void printAr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int arr[] = {12, 11, 45, 67, 23, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, n);
    printAr(arr, n);
    return 0;
}

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

    } while (i < j);

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quickSort(int a[], int low, int high)
{
    int partitionIndex;

    while (low < high)
    {
        partitionIndex = partition(a, low, high);
        quickSort(a, low, partitionIndex - 1);
        quickSort(a, partitionIndex + 1, high);
    }
}
void printAr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {3, 9, 4, 4, 8, 7, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    quickSort(a, 0, n - 1);
    printAr(a, n);
    return 0;
}

void merge(int a[], int mid, int low, int high)
{
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void mergeSort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, mid, low, high);
    }
}
void printAr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {12, 10, 60, 4, 25, 22};
    int n = sizeof(a) / sizeof(a[0]);

    mergeSort(a, 0, n - 1);
    printAr(a, n);
    return 0;
}

int maximum(int a[], int n)
{
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

void countSort(int a[], int n)
{
    int i, j;
    int max = maximum(a, n);

    int *count = (int *)malloc((max + 1) * sizeof(int));

    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        count[a[i]] = count[a[i]] + 1;
    }

    i = 0;
    j = 0;

    while (i <= max)
    {
        if (count[i] > 0)
        {
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}
void printAr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {9, 1, 4, 14, 4, 15, 6};
    int n = sizeof(a) / sizeof(a[0]);

    countSort(a, n);
    printAr(a, n);
    return 0;
}

//BinaryTree (Node Creation).....

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n = new node();
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main()
{
    struct node *n1 = createNode(7);
    struct node *n2 = createNode(5);
    struct node *n3 = createNode(10);

    n1->left = n2;

    n1->right = n3;

    preorder(n1);
    cout << "\n";
    postorder(n1);
    cout << "\n";
    inorder(n1);

    return 0;
}

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *n;
    n = new Node();

    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n;
};

struct Node *searchKey(struct Node *root, int key)
{
    if (root == NULL)
    {
        return 0;
    }

    if (key == root->data)
    {
        return root;
    }

    if (key < root->data)
    {
        return searchKey(root->left, key);
    }
    if (key > root->data)
    {
        return searchKey(root->right, key);
    }
}

void insert(struct Node *root, int key)
{
    struct Node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            cout << "Element already in BST" << endl;
        }

        else if (key < root->data)
        {

            root = root->left;
        }

        else
        {
            root = root->right;
        }
    }

    struct Node *ne = createNode(key);

    if (key < prev->data)
    {
        prev->left = ne;
    }
    else
    {
        prev->right = ne;
    }
}

int main()
{
    struct Node *n1 = createNode(7);
    struct Node *n2 = createNode(5);
    struct Node *n3 = createNode(10);
    struct Node *n4 = createNode(3);
    struct Node *n5 = createNode(6);
    struct Node *n6 = createNode(9);
    struct Node *n7 = createNode(11);

    n1->left = n2;
    n1->right = n3;

    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;

    insert(n1, 15);

    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void BubbleSortAdaptive(int arr[], int n)
{
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cout << "Working on pass number " << i + 1 << endl;
        isSorted = 1;
        for (int j = 0; j < n - i + 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            break;
        }
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void InsertionSort(int arr[], int n)
{
    int key, j;

    for (int i = 1; i <= n - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {12, 3, 41, 5, 7};
    int n = 5;

    InsertionSort(arr, n);
    printArray(arr, n);
    return 0;
}

void selectionSort(int arr[], int n)
{

    int indexOfMin, temp;
    cout << "Running Selection Sort..!!" << endl;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        cout << "Working on " << i + 1 << " pass" << endl;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexOfMin])
            {
                indexOfMin = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    int temp;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {

        partitionIndex = partition(arr, low, high);

        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {12, 4, 3, 7, 8, 11, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}

void merge(int arr[], int mid, int low, int high)
{
    int i, j, k, brr[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            brr[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            brr[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        brr[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        brr[k] = arr[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = brr[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, mid, low, high);
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int a[] = {12, 4, 7, 11, 67, 34};
    int n = sizeof(a) / sizeof(a[0]);

    mergeSort(a, 0, n - 1);
    printArray(a, n);
    return 0;
}

int maximum(int arr[], int n)
{
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

void countSort(int arr[], int n)
{
    int i, j;

    int max = maximum(arr, n);

    int *count = (int *)malloc((max + 1) * sizeof(int));

    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        count[arr[i]] += 1;
    }

    i = 0;
    j = 0;

    while (i <= max)
    {
        if (count[i] > 0)
        {
            arr[j] = i;
            count[i] -= 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int a[] = {12, 4, 7, 11, 67, 34};
    int n = sizeof(a) / sizeof(a[0]);

    countSort(a, n);

    printArray(a, n);
    return 0;
}

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

int getHeight(struct Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return n->height;
    }
}

struct Node *createNode(int key)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

int getBalanceFactor(struct Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return getHeight(n->left) - getHeight(n->right);
    }
}

struct Node *leftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = 1 + max(getHeight(x->right), getHeight(x->left));
    y->height = 1 + max(getHeight(y->right), getHeight(y->left));

    return y;
}

struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    x->height = 1 + max(getHeight(x->right), getHeight(x->left));
    y->height = 1 + max(getHeight(y->right), getHeight(y->left));

    return x;
}

struct Node *insert(struct Node *node, int key)
{
    if (node == NULL)
    {
        return createNode(key);
    }
    if (key < node->key)
    {
        node->left = insert(node->left, key);
    }
    else if (key > node->key)
    {
        node->right = insert(node->right, key);
    }

    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getBalanceFactor(node);

    if (bf > 1 && node->left->key > key)
    {
        return rightRotate(node);
    }
    if (bf < 1 && node->right->key)
    {
        return leftRotate(node);
    }
    if (bf > 1 && key > node->left->key)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    if (bf < 1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}
void preOrder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main()
{
    struct Node *root = NULL;

    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    preOrder(root);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};


int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        // printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main(){
    // Initializing Queue (Array Implementation)
    struct queue q;
    q.size = 400;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));

    // BFS Implementation
    int node;
    int i = 1;
    int visited[7] = {0,0,0,0,0,0,0};
    int a [7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };
    printf("%d", i);
    visited[i] = 1;
    enqueue(&q, i); // Enqueue i for exploration
    while (!isEmpty(&q))
    {
        int node = dequeue(&q);
        for (int j = 0; j < 7; j++)
        {
            if(a[node][j] ==1 && visited[j] == 0){
                printf("%d", j);
                visited[j] = 1;
                enqueue(&q, j);
            }
        }
    }
    return 0;
}

int visited[7] = {0, 0, 0, 0, 0, 0, 0};
int a[7][7] = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0}};
void DFS(int i)
{
    cout << i << endl;
    visited[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if (a[i][j] == 1 && !visited[j])
        {
            DFS(j);
        }
    }
}

int main()
{

    DFS(4);
    return 0;
}

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

Node *createNode(int val)
{
    Node *n = new Node();

    n->data = val;
    n->left = NULL;
    n->right = NULL;
}

void preOrder(struct Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(struct Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

void postOrder(struct Node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

/*int isBST(struct Node *root)
{
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }

        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

struct node *search(struct Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (key == root->data)
    {
        return root;
    }

    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

struct Node *searchIter(struct Node *root,int key){
    while(root!=NULL){
        if(key==root->data){
            return root;
        }

        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }

    return NULL;
}

void insert(struct Node *root,int key){
    struct Node *prev=NULL;

    while(root!=NULL){
        prev=root;

        if(key==root->data){
            cout<<"Cannot insert already in BST"<<endl;
            return;
        }

        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }

    struct Node *new = createNode(key);

    if(key<prev->data){
        prev->left=new;
    }
    else{
        prev->right=new;
    }
}
struct Node *inOrderPredecessor(struct Node *root){
    root=root->left;

    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
struct Node *deleteNode(struct Node *root,int value){

    struct Node *iPre;

    if(root==NULL){
        return NULL;
    }

    if(root->left==NULL && root->right==NULL){
        free(root);
    }

    if(value<root->data){
        deleteNode(root->left,value);
    }

    else if(value>root->data){
        deleteNode(root->right,value);
    }

    else{
        iPre = inOrderPredecessor(root);
        root->data =iPre->data;
        deleteNode(root->left,iPre->data);
    }
}

int main()
{
    struct Node *n = createNode(5);

    struct Node *n1 = createNode(3);

    struct Node *n2 = createNode(6);

    struct Node *n3 = createNode(1);
    struct Node *n4 = createNode(4);

    n->left = n1;
    n->right = n2;

    n1->left = n3;
    n1->right = n4;

    struct Node *p = searchIter(n, 6);

    cout<<p->data<<endl;


    return 0;
}



struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

bool isFull(struct Queue *q);

void enqueue(struct Queue *q, int new_data)
{
    if (isFull(q))
    {
        cout << "Queue Overflow." << endl;
    }
    else
    {
        q->r++;
        q->arr[q->r] = new_data;
    }
}

bool isEmpty(struct Queue *q);

int dequeue(struct Queue *q)
{
    int a = -1; // For checking if dequeue has been performed successfully or not.
    if (isEmpty(q))
    {
        cout << "No elements are there to be dequeued." << endl;
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

bool isFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmpty(struct Queue *q)
{
    if (q->r == q->f)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    struct Queue q;
    q.f = -1;
    q.r = -1;
    q.size = 400;
    q.arr = (int *)malloc(sizeof(int) * q.size);

    int node;
    int i = 1;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int a[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};

    cout << i << " ";

    visited[i] = i;
    enqueue(&q, i);

    while (!isEmpty(&q))
    {
        node = dequeue(&q);

        for (int j = 0; j < 7; i++)
        {
            if (a[node][j] == 1 && visited[j] == 0)
            {
                cout << j << " ";
                visited[j] = 1;
                enqueue(&q, j);
            }
        }
    }

    return 0;
}

int visited[7] = {0, 0, 0, 0, 0, 0, 0};
int A[7][7] = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0}};

void DFS(int i)
{
    cout << i << " ";
    visited[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if (A[i][j] == 1 && !visited[j])
        {
            DFS(j);
        }
    }
}
int main()
{
    DFS(0);
    return 0;
}

// Heap

#define MAX 1000;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void maxheapify(int arr[], int i, int n)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
    }
    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
    }

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, largest, n);
    }
}

void minheapify(int arr[], int i, int n)
{
    int smallest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    int(l < n && arr[l] < arr[smallest])
    {
        smallest = l;
    }
    int(r < n && arr[r] < arr[smallest])
    {
        smallest = r;
    }

    if (smallest != i)
    {
        swap(&arr[i], &arr[smallest]);
        heapify(arr, smallest, n);
    }
}

void insertElement(int arr[], int n, int key)
{
    n = n + 1;

    arr[n - 1] = key;

    minheapify(arr, n - 1, n);
}

void deleteElement(int arr[], int n)
{
    int lastElement = arr[n - 1];

    arr[0] = lastElement;

    n--;

    maxheapify(arr, 0, n);
}

void buildheap(int arr[], int n)
{
    int start = (n - 2) / 2;

    for (int i = start; i >= 0; i--)
    {
        minheapify(arr, i, n);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[MAX] = {10, 5, 3, 2, 4};
    int n = 5;
    int key = 15;
    insertElement(arr, n, key);
    printArray(arr, n);

    return 0;
}

struct Activity{
    int start;
    int end;
};

bool comp(Activity act1,Activity act2){
    return (act1.end<act2.end);
}

int maxActivity(Activity arr[],int n){
    sort(arr,arr+n,comp);

    int prev=0;
    int res=1;

    for(int curr=1;curr<n;curr++){
        if(arr[prev].end<=arr[curr].start){
            res++;
            prev=curr;
        }
    }
}

struct Knap
{
    double value;
    double weight;
};

bool comp(Knap k1, Knap k2)
{
    double a = k1.value / k1.weight;
    double b = k2.value / k2.weight;

    return a > b;
}

int maxProfit(int W, Knap k[], int n)
{
    sort(k, k + n, comp);

    double res = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (W >= k[i].weight)
        {
            res += k[i].value;
            W -= k[i].weight;
        }
        else
        {
            res += W * ((double)k[i].value / k[i].weight);
            break;
        }
    }

    return res;
}

// JOB Sequencing Problem.

struct Job
{
    int deadline;
    int profit;
};

bool comp(Job j1, Job j2)
{
    return (j1.profit > j2.profit);
}

int maxProfit(Job j[], int n)
{
    sort(j, j + n, comp);

    int result[n];
    bool slot[n];

    for (int i = 0; i < n; i++)
    {
        slot[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, j[i].deadline) - 1; j >= 0; j--)
        {
            if (slot[j] == false)
            {
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
}


// Chaining Implementation..!!

class HashTable
{
    int bucket;
    list<int> *table;

public:
    HashTable(int b)
    {
        bucket = b;
        table = new list<int>[b];
    }

    void search(int key)
    {
        int i = key % bucket;

        for (int x = 0; x < bucket; x++)
        {
            if (x == i)
            {
                cout << "Present" << endl;
                break;
            }
            else
            {
                cout << "Not Present" << endl;
            }
        }
    }

    void insert(int key)
    {
        int i = key % bucket;

        table[i].push_back(key);
    }

    void delete1(int key)
    {
        int i = key % bucket;
        table[i].remove(key);
    }
};

int main()
{
    HashTable h(12);

    h.insert(5);
    h.insert(12);

    h.search(12);

    return 0;
}*/
