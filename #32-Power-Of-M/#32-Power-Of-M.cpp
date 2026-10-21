#include <iostream>
using namespace std;

void ReadNumberAndPower(int& Number, int& Power)
{
    cout << "Please enter a Number?\n";
    cin >> Number;

    cout << "Please enter a Power?\n";
    cin >> Power;
}

long PowerOfM(int Number, int Power)
{
    long PowerResult = 1;
    for (int i = 1; i <= Power; i++)
    {
        PowerResult *= Number;
    }

    return PowerResult;
}

int main()
{
    int Number, Power;

    ReadNumberAndPower(Number, Power);

    cout << Number << " ^ " << Power << " = " << PowerOfM(Number, Power) << endl;

    return 0;
}
