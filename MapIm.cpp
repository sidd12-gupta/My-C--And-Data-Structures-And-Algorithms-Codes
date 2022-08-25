#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Sidd"] = 98;
    marksMap["Rohit"] = 67;
    marksMap["Dinesh"] = 87;
    marksMap["Utkarsh"] = 90;

    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }

    return 0;
}
