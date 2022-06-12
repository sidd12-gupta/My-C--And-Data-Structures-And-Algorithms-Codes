#include <iostream>
using namespace std;

struct Student
{

    int roll;
    char name[80];
    float fees;
    char DOB[80];
};

int main()
{

    struct Student s1;

    cout << "Enter the roll no: ";
    cin >> s1.roll;

    cout << "Enter the name: ";
    cin >> s1.name;

    cout << "Enter the fees: ";
    cin >> s1.fees;

    cout << "Enter the date of birth: ";
    cin >> s1.DOB;

    cout << s1.roll << endl;
    cout << s1.name << endl;
    cout << s1.fees << endl;
    cout << s1.DOB << endl;

    return 0;
}
