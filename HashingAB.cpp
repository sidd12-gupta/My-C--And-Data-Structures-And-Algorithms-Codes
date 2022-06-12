#include <iostream>
#include <unordered_set>
using namespace std;

/*int main()
{
    unordered_set<int> s;
    s.insert(5);
    s.insert(10);

    if (s.find(11) == s.end())
    {
        cout << "Not Found" << endl;
    }

    else
    {
        cout << "Found element" << endl;
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    cout << s.size() << endl;

    return 0;
}*/

// Some Other Functions.

int main()
{

    unordered_set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(7);

    cout << s.count(10) << endl;

    if (s.count(9) == 0)
    {
        cout << "Element not present" << endl;
    }

    s.erase(10);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}