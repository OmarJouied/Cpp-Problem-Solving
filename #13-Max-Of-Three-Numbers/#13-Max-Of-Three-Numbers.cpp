#include <iostream>
using namespace std;

void ReadThreeNumbers(int& Num1, int& Num2, int& Num3)
{
    cout << "Please enter a number 1?\n";
    cin >> Num1;
    cout << "Please enter a number 2?\n";
    cin >> Num2;
    cout << "Please enter a number 3?\n";
    cin >> Num3;
}

int MaxOf3Numbers(int Num1, int Num2, int Num3)
{
    if (Num1 > Num2 && Num1 > Num3)
        return Num1;
    else if (Num2 > Num3)
        return Num2;
    return Num3;
}

void PrintMax(int Max)
{
    cout << "\n Max Number: " << Max << endl;
}

int main()
{
    int Num1, Num2, Num3;

    ReadThreeNumbers(Num1, Num2, Num3);
    PrintMax(MaxOf3Numbers(Num1, Num2, Num3));

    return 0;
}
