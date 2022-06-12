#include <bits/stdc++.h>
using namespace std;

struct HashTable
{
public:
    int bucket;
    list<int> *table;

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
    HashTable h(7);

    h.insert(8);
    h.insert(5);
    h.insert(15);

    h.search(8);
    return 0;
}