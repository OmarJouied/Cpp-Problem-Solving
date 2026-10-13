#include <iostream>
using namespace std;

int main()
{
    int Number1, Number2;
    double Result;
    char OperationType;

    cout << "Please enter Number1?\n";
    cin >> Number1;

    cout << "Please enter Number2?\n";
    cin >> Number2;

    cout << "Please enter Operation Type?\n";
    cin >> OperationType;

    if (OperationType == '+')
    {
        Result = Number1 + Number2;
    }
    else if (OperationType == '-')
    {
        Result = Number1 - Number2;
    }
    else if (OperationType == '*')
    {
        Result = Number1 * Number2;
    }
    else
    {
        Result = double(Number1) / Number2;
    }

    cout << "Result: " << Result << endl;

    return 0;
}
