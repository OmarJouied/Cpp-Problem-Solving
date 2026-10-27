#include <iostream>
using namespace std;

void SumUntilMinus99(int& Sum)
{
    int Number;
    cin >> Number;
    while (Number != -99)
    {
        Sum += Number;
        cin >> Number;
    }
}

int main()
{
    int Sum = 0;

    SumUntilMinus99(Sum);

    cout << "Sum = " << Sum << endl;

    return 0;
}
