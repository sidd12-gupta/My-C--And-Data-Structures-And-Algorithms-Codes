#include <iostream>
using namespace std;

struct DOB
{
    int day;
    int month;
    int year;
};

struct student
{
    int roll_no;
    char name[100];
    float fees;
    struct DOB date;
};

int main()
{

    struct student st1;

    cout << "Enter roll: ";
    cin >> st1.roll_no;

    cout << st1.roll_no << endl;

    cout << "Enter name: ";
    cin >> st1.name;

    cout << st1.name << endl;

    cout << "Enter fees: ";
    cin >> st1.fees;

    cout << st1.fees << endl;

    cout << "Enter the DOB: ";

    cin >> st1.date.day >> st1.date.month >> st1.date.year;

    cout << "DOB is: " << st1.date.day << "-" << st1.date.month << "-" << st1.date.year;

    return 0;
}