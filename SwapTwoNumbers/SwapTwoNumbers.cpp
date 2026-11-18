#include <iostream>
using namespace std;

void ReadTwoNumbers(int& Num1, int& Num2)
{
    cout << "Enter Number 1?\n";
    cin >> Num1;

    cout << "Enter Number 2?\n";
    cin >> Num2;
}

void SwapTwoNumbers(int &Num1, int &Num2)
{
    int tmp;

    tmp = Num1;
    Num1 = Num2;
    Num2 = tmp;
}

void PrintResults(int Num1, int Num2)
{
    cout << "Num1 = " << Num1 << ", " << "Num2 = " << Num2 << "\n" << endl;
}

int main()
{
    int Num1, Num2;

    ReadTwoNumbers(Num1, Num2);

    PrintResults(Num1, Num2);

    SwapTwoNumbers(Num1, Num2);

    PrintResults(Num1, Num2);

    return 0;
}
