#include <iostream>
using namespace std;

struct Student
{
    int roll_no;
    char name[80];
    int fees;
    char DOB[80];
};

int main()
{
    struct Student stud[50];

    int n, i;
    int num;

    char new_DOB[80], new_name[80];

    cout << "Enter the no. of students: ";
    cin >> n;

    // READ..!!
    for (int i = 0; i < n; i++)
    {
        cin >> stud[i].roll_no;

        cin >> stud[i].name;

        cin >> stud[i].fees;

        cin >> stud[i].DOB;
    }

    // WRITE..!!
    for (int i = 0; i < n; i++)
    {
        cout << stud[i].roll_no << endl;

        cout << stud[i].name << endl;

        cout << stud[i].fees << endl;

        cout << stud[i].DOB << endl;
    }

    cout << "Enter the student number whose data is to be changed: ";
    cin >> num;

    num--;

    cin >> stud[num].roll_no;
    cin >> stud[num].name;
    cin >> stud[num].fees;
    cin >> stud[num].DOB;

    for (int i = 0; i < n; i++)
    {
        cout << stud[i].roll_no << endl;

        cout << stud[i].name << endl;
        cout << stud[i].fees << endl;

        cout << stud[i].DOB << endl;
    }

    return 0;
}