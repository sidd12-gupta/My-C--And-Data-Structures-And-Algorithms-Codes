#include <bits/stdc++.h>
using namespace std;

class ATM
{
    double bank_b;
    double amount;

public:
    ATM(double bb = 0, double amt = 0)
    {
        bank_b = bb;
        amount = amt;
    }
    friend double updatedBankBalance(ATM);
};

double updatedBankBalance(ATM atm)
{

    if (atm.bank_b < atm.amount)
    {
        atm.bank_b = atm.bank_b + atm.amount;
        return atm.bank_b;
    }

    else if (atm.bank_b >= atm.amount)
    {
        atm.bank_b = atm.bank_b - atm.amount;
        return atm.bank_b;
    }
    else
    {
        return -1.1;
    }
}

int main()
{
    double val, val1;
    cout << "Enter your bank balance: ";
    cin >> val;
    cout << "Enter your amount: ";
    cin >> val1;
    ATM atm(val, val1);

    cout << "Your updated bank balance is: " << updatedBankBalance(atm) << endl;
    return 0;
}
