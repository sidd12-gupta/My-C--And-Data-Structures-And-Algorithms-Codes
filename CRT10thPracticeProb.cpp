#include <iostream>
using namespace std;

typedef struct
{
    int x;
    int y;
} point;

void display(point);

int main()
{
    point p1 = {2, 3};

    display(p1);

    return 0;
}

void display(point p)
{
    cout << "The coordinates of the point are: " << p.x << " " << p.y << endl;
}