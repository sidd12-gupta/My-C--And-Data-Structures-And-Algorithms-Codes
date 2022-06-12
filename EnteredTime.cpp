#include <bits/stdc++.h>
using namespace std;

class EnteredTime
{
    int hours;
    int mins;
    string s;

public:
    void setTime(int h, int m, string ap)
    {
        hours = h;
        mins = m;
        s = ap;
    }

    void display()
    {
        cout << "The time is: " << hours << ":" << mins << " " << s << endl;
    }
};

int main()
{
    int h, m;
    string s;
    cout << "Enter hours,minutes and am/pm: ";
    cin >> h >> m >> s;
    EnteredTime et;
    et.setTime(h, m, s);
    et.display();
    return 0;
}