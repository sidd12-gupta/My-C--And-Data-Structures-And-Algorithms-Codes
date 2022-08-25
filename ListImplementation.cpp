#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4};
    list<int>::iterator itr = l.end();
    l.insert(itr, 5);
    for (itr = l.begin(); itr != l.end(); itr++)
    {
        cout << *itr << " ";
    }
    return 0;
}