#include <iostream>
#include <cmath>

using namespace std;

double PowOf2(int Number)
{
    return pow(Number, 2);
}

double PowOf3(int Number)
{
    return pow(Number, 3);
}

double PowOf4(int Number)
{
    return pow(Number, 4);
}

int main()
{
    int Number;

    cout << "Enter a Number?\n";
    cin >> Number;

    cout << Number << " ^ 2 = " << PowOf2(Number) << endl;
    cout << Number << " ^ 3 = " << PowOf3(Number) << endl;
    cout << Number << " ^ 4 = " << PowOf4(Number) << endl;

    return 0;
}
