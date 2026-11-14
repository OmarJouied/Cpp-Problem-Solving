#include <iostream>
using namespace std;

void ReadTwoNumbers(int& Num1, int& Num2)
{
    cout << "Please enter a number 1?\n";
    cin >> Num1;
    cout << "Please enter a number 2?\n";
    cin >> Num2;
}

int MaxOf2Numbers(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;
    return Num2;
}

void PrintMax(int Max)
{
    cout << "\n Max Number: " << Max << endl;
}

int main()
{
    int Num1, Num2;

    ReadTwoNumbers(Num1, Num2);
    PrintMax(MaxOf2Numbers(Num1, Num2));

    return 0;
}
