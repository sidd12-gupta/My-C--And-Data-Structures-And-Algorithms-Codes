#include <iostream>
using namespace std;

typedef struct
{
    int x;
    int y;
} point;

void display(int, int);

int main()
{
    point p1 = {2, 3};

    display(p1.x, p1.y);

    return 0;
}

void display(int a, int b)
{
    cout << "The coordinates of the point are: " << a << " " << b << endl;
}