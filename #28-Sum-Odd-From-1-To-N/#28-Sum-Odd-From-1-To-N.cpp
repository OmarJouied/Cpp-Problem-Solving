#include <iostream>
using namespace std;

int SumOddFrom1ToN(int Number)
{
    int Sum = 0;
    int i = 1;
    while (i <= Number)
    {
        Sum += i;
        i += 2;
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
