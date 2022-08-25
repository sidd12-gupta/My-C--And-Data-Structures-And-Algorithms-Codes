#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator itr;

    for (itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout << *itr << " ";
    }
}
int main()
{
    list<int> list1;

    list1.push_back(5);
    list1.push_back(10);
    list1.push_back(11);
    list1.push_back(15);
    list1.push_back(22);
    list1.push_front(23);

    display(list1);
    return 0;
}