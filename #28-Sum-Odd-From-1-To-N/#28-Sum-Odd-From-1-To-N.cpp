#include <iostream>
using namespace std;

int SumOddFrom1ToN(int Number)
{
    int Sum = 0;
    for (int i = 1; i <= Number; i += 2)
    {
        Sum += i;
    }

    return Sum;
}

int main()
{
    int Number;

    cout << "Please enter a Number?\n";
    cin >> Number;

    cout << "Sum Odd = " << SumOddFrom1ToN(Number) << endl;
    return 0;
}
