#include <iostream>
using namespace std;

int SumEvenFrom1ToN(int Number)
{
    int Sum = 0;
    int i = 2;
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

    cout << "Sum Even = " << SumEvenFrom1ToN(Number) << endl;
    return 0;
}
