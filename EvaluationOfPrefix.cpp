#include <bits/stdc++.h>
using namespace std;

double evalPre(string prefix)
{
    stack<double> operendStack;
    int size = prefix.size() - 1;

    for (int i = size; i >= 0; i--)
    {
        if (isdigit(prefix[i]))
        {
            operendStack.push(prefix[i] - '0');
        }
        else
        {
            double o1 = operendStack.top();
            operendStack.pop();

            double o2 = operendStack.top();
            operendStack.pop();

            if (prefix[i] == '+')
            {
                operendStack.push(o1 + o2);
            }
            else if (prefix[i] == '-')
                operendStack.push(o1 - o2);
            else if (prefix[i] == '*')
                operendStack.push(o1 * o2);
            else if (prefix[i] == '/')
                operendStack.push(o1 / o2);
            else
            {
                cout << "Invalid Expression";
                return -1;
            }
        }
    }
    return operendStack.top();
}
int main()
{
    string prefix = "*+69-31";
    double a = evalPre(prefix);

    cout << a << endl;

    return 0;
}