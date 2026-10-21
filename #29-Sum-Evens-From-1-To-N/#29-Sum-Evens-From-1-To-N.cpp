#include <iostream>
using namespace std;

int SumEvenFrom1ToN(int Number)
{
    int Sum = 0;
    for (int i = 0; i <= Number; i += 2)
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

    cout << "Sum Even = " << SumEvenFrom1ToN(Number) << endl;
    return 0;
}
