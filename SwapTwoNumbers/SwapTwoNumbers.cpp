#include <iostream>
using namespace std;

void SwapTwoNumbers(int &Num1, int &Num2)
{
    int tmp;

    tmp = Num1;
    Num1 = Num2;
    Num2 = tmp;
}

int main()
{
    int Num1, Num2;

    cout << "Enter Number 1?\n";
    cin >> Num1;

    cout << "Enter Number 2?\n";
    cin >> Num2;

    cout << "Num1 = " << Num1 << ", " << "Num2 = " << Num2 << "\n" << endl;

    SwapTwoNumbers(Num1, Num2);

    cout << "Num1 = " << Num1 << ", " << "Num2 = " << Num2 << "\n" << endl;

    return 0;
}
