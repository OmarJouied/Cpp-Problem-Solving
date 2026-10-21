#include <iostream>
using namespace std;

long FactorialN(int Number)
{
    long Factorial = 1;
    for (int i = 1; i <= Number; i++)
    {
        Factorial *= i;
    }

    return Factorial;
}

int main()
{
    int Number;

    cout << "Please enter a Number?\n";
    cin >> Number;

    cout << "Factorail " << Number << " = " << FactorialN(Number) << endl;

    return 0;
}
